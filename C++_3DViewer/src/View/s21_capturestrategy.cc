#include "s21_capturestrategy.h"

#include <QDateTime>
#include <QFileDialog>
#include <QFileInfo>
#include <QImage>
#include <QMessageBox>
#include <QTimer>
#include <memory>

namespace s21 {

void CaptureContext::SetStrategy(std::unique_ptr<CaptureStrategy> &&strategy) {
  strategy_ = std::move(strategy);
}

void CaptureContext::PerformCapture() { strategy_->Capture(); }

void ScreenshotCaptureStrategy::Capture() {
  QString filename =
      QDateTime::currentDateTime().toString("yyyy-MM-dd hh-mm-ss");
  QString filter = "JPEG Files (*.jpg);;BMP Files (*.bmp);;All Files (*)";
  QString filepath = QFileDialog::getSaveFileName(
      nullptr, "Enter the name of screenshot", filename, filter);
  QString extension = QFileInfo(filepath).suffix().toLower();
  extension = extension.isEmpty() ? "jpg" : extension;
  if (!QStringList{"jpeg", "jpg", "bmp"}.contains(extension)) {
    QMessageBox::warning(nullptr, "Warning!",
                         "Invalid file extension. Expected JPG or BMP");
    return;
  }
  QImage(gl_->grab().toImage()).save(filepath, extension.toUtf8().constData());
}

void GifCaptureStrategy::Capture() {
  timer_ = new QTimer;
  gif_ = new QGifImage;
  frames_counter_ = 0;
  timer_->start(100);
  QObject::connect(timer_, &QTimer::timeout, this, [=]() { CreateGif(); });
}

void GifCaptureStrategy::CreateGif() {
  gif_->setDefaultDelay(100);
  QImage image = gl_->grabFramebuffer();
  QImage resized_image = image.scaled(640, 480, Qt::IgnoreAspectRatio);
  gif_->addFrame(resized_image);
  ++frames_counter_;
  if (frames_counter_ == 50) {
    timer_->stop();
    QString filename =
        QDateTime::currentDateTime().toString("yyyy-MM-dd hh-mm-ss");
    gif_->save(filename);
    QMessageBox::information(gl_, "Success!", "Gif saved successfully");
    delete gif_;
  }
}

}  // namespace s21
