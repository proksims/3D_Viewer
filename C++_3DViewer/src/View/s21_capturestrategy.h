#ifndef _3DVIEWER_V2_VIEW_S21_CAPTURESTRATEGY_H
#define _3DVIEWER_V2_VIEW_S21_CAPTURESTRATEGY_H

#include <QObject>
#include <QTimer>
#include <memory>

#include "../third_party/QtGifImage/gifimage/qgifimage.h"
#include "s21_glwidget.h"

namespace s21 {

/**
 * @class CaptureStrategy
 *
 * @brief Interface (abstract class) for Capture Strategies: Recording Screen
 * and save as Gif or Screen Capture (screenshot) and save as JPG or BMP file.
 *
 * @note Use QObject possibilities for connect signal in QTimer.
 */
class CaptureStrategy : public QObject {
  Q_OBJECT
 public:
  explicit CaptureStrategy(s21::GLWidget *gl) : gl_(gl) {}
  virtual void Capture() = 0;
  virtual ~CaptureStrategy() = default;

 protected:
  s21::GLWidget *gl_;
};

class CaptureContext {
 public:
  void SetStrategy(std::unique_ptr<CaptureStrategy> &&strategy);
  void PerformCapture();

 private:
  /** During execution, the strategy may change.
   *  Since the link cannot be changed, we simply update the value of the
   * variable
   */
  std::unique_ptr<CaptureStrategy> strategy_;  ///< Concrete strategy
};

class ScreenshotCaptureStrategy : public CaptureStrategy {
  Q_OBJECT
 public:
  using CaptureStrategy::CaptureStrategy;  /// Inheriting constructors
  void Capture() override;
};

class GifCaptureStrategy : public CaptureStrategy {
  Q_OBJECT
 public:
  using CaptureStrategy::CaptureStrategy;  /// Inheriting constructors
  void Capture() override;

 private slots:
  void CreateGif();

 private:
  QTimer *timer_;
  QGifImage *gif_;
  int frames_counter_;
};

}  // namespace s21
#endif  // _3DVIEWER_V2_VIEW_S21_CAPTURESTRATEGY_H
