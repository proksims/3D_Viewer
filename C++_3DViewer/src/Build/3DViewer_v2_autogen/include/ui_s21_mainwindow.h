/********************************************************************************
** Form generated from reading UI file 's21_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S21_MAINWINDOW_H
#define UI_S21_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "View/s21_glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *menu_verticalLayout;
    QPushButton *load_file_button;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *filename_horizontalLayout;
    QLabel *filename_title_label;
    QLabel *filename_label;
    QHBoxLayout *edges_count_horizontalLayout;
    QLabel *edges_label;
    QLabel *edges_count_label;
    QHBoxLayout *vertices_count_horizontalLayout;
    QLabel *vertices_label;
    QLabel *vertices_count_label;
    QHBoxLayout *horizontalLayout;
    QLabel *status_title_label;
    QLabel *status_label;
    QGroupBox *rotation_groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *x_rotation_horizontalLayout;
    QLabel *x_rotation_label;
    QSlider *x_rotation_qslider;
    QLabel *x_value_rotation_label;
    QHBoxLayout *y_rotation_horizontalLayout;
    QLabel *y_rotation_label;
    QSlider *y_rotation_qslider;
    QLabel *y_value_rotation_label;
    QHBoxLayout *z_rotation_horizontalLayout;
    QLabel *z_rotation_label;
    QSlider *z_rotation_qslider;
    QLabel *z_value_rotation_label;
    QGroupBox *position_groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *x_pos_horizontalLayout;
    QLabel *x_position_label;
    QSlider *x_position_qslider;
    QLabel *x_value_position_label;
    QHBoxLayout *y_pos_horizontalLayout;
    QLabel *y_position_label;
    QSlider *y_position_qslider;
    QLabel *y_value_position_label;
    QHBoxLayout *z_pos_horizontalLayout;
    QLabel *z_position_label;
    QSlider *z_position_qslider;
    QLabel *z_value_position_label;
    QGroupBox *vertices_groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *vert_size_horizontalLayout;
    QLabel *type_label;
    QComboBox *vertices_type_comboBox;
    QHBoxLayout *vert_size_horizontalLayout_2;
    QLabel *size_label;
    QSlider *vertices_size_slider;
    QPushButton *vertices_color_button;
    QGroupBox *edges_groupBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *edges_horizontalLayout;
    QLabel *type_edges_label;
    QComboBox *edges_type_comboBox;
    QHBoxLayout *edges_size_horizontalLayout;
    QLabel *edges_size_label;
    QSlider *edges_size_slider;
    QPushButton *edges_color_button;
    QGroupBox *projection_groupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *projection_horizontalLayout;
    QLabel *type_projection_label;
    QComboBox *projection_type_comboBox;
    QGroupBox *scene_groupBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *scale_horizontalLayout;
    QLabel *scale_label;
    QSlider *scale_qslider;
    QSpacerItem *horizontalSpacer;
    QPushButton *background_color_button;
    QPushButton *reset_settings_button;
    QHBoxLayout *capture_horizontalLayout;
    QPushButton *screenshot_button;
    QPushButton *record_gif_button;
    s21::GLWidget *gl_widget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1218, 791);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	color: rgb(246, 245, 244);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(0, 0, 0);\n"
"	font-size: 10pt;\n"
"}"));
        horizontalLayout_17 = new QHBoxLayout(centralwidget);
        horizontalLayout_17->setSpacing(2);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(5, 5, 5, 5);
        menu_verticalLayout = new QVBoxLayout();
        menu_verticalLayout->setSpacing(2);
        menu_verticalLayout->setObjectName(QString::fromUtf8("menu_verticalLayout"));
        menu_verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        menu_verticalLayout->setContentsMargins(2, 2, 2, -1);
        load_file_button = new QPushButton(centralwidget);
        load_file_button->setObjectName(QString::fromUtf8("load_file_button"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(load_file_button->sizePolicy().hasHeightForWidth());
        load_file_button->setSizePolicy(sizePolicy);
        load_file_button->setMinimumSize(QSize(181, 25));
        load_file_button->setMaximumSize(QSize(180, 30));
        load_file_button->setLayoutDirection(Qt::LeftToRight);
        load_file_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(28, 28, 28);\n"
"	border-radius: 5px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(129, 61, 156);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:   rgb(129, 61, 156);\n"
"}"));

        menu_verticalLayout->addWidget(load_file_button);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(180, 16777215));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 1, -1);
        filename_horizontalLayout = new QHBoxLayout();
        filename_horizontalLayout->setSpacing(2);
        filename_horizontalLayout->setObjectName(QString::fromUtf8("filename_horizontalLayout"));
        filename_title_label = new QLabel(groupBox);
        filename_title_label->setObjectName(QString::fromUtf8("filename_title_label"));
        sizePolicy.setHeightForWidth(filename_title_label->sizePolicy().hasHeightForWidth());
        filename_title_label->setSizePolicy(sizePolicy);
        filename_title_label->setMaximumSize(QSize(35, 16777215));

        filename_horizontalLayout->addWidget(filename_title_label);

        filename_label = new QLabel(groupBox);
        filename_label->setObjectName(QString::fromUtf8("filename_label"));
        filename_label->setStyleSheet(QString::fromUtf8(""));

        filename_horizontalLayout->addWidget(filename_label);


        verticalLayout->addLayout(filename_horizontalLayout);

        edges_count_horizontalLayout = new QHBoxLayout();
        edges_count_horizontalLayout->setObjectName(QString::fromUtf8("edges_count_horizontalLayout"));
        edges_label = new QLabel(groupBox);
        edges_label->setObjectName(QString::fromUtf8("edges_label"));
        sizePolicy.setHeightForWidth(edges_label->sizePolicy().hasHeightForWidth());
        edges_label->setSizePolicy(sizePolicy);
        edges_label->setMaximumSize(QSize(45, 16777215));

        edges_count_horizontalLayout->addWidget(edges_label);

        edges_count_label = new QLabel(groupBox);
        edges_count_label->setObjectName(QString::fromUtf8("edges_count_label"));

        edges_count_horizontalLayout->addWidget(edges_count_label);


        verticalLayout->addLayout(edges_count_horizontalLayout);

        vertices_count_horizontalLayout = new QHBoxLayout();
        vertices_count_horizontalLayout->setObjectName(QString::fromUtf8("vertices_count_horizontalLayout"));
        vertices_label = new QLabel(groupBox);
        vertices_label->setObjectName(QString::fromUtf8("vertices_label"));
        sizePolicy.setHeightForWidth(vertices_label->sizePolicy().hasHeightForWidth());
        vertices_label->setSizePolicy(sizePolicy);
        vertices_label->setMaximumSize(QSize(60, 16777215));

        vertices_count_horizontalLayout->addWidget(vertices_label);

        vertices_count_label = new QLabel(groupBox);
        vertices_count_label->setObjectName(QString::fromUtf8("vertices_count_label"));

        vertices_count_horizontalLayout->addWidget(vertices_count_label);


        verticalLayout->addLayout(vertices_count_horizontalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        status_title_label = new QLabel(groupBox);
        status_title_label->setObjectName(QString::fromUtf8("status_title_label"));
        sizePolicy.setHeightForWidth(status_title_label->sizePolicy().hasHeightForWidth());
        status_title_label->setSizePolicy(sizePolicy);
        status_title_label->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(status_title_label);

        status_label = new QLabel(groupBox);
        status_label->setObjectName(QString::fromUtf8("status_label"));
        status_label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(status_label);


        verticalLayout->addLayout(horizontalLayout);


        menu_verticalLayout->addWidget(groupBox);

        rotation_groupBox = new QGroupBox(centralwidget);
        rotation_groupBox->setObjectName(QString::fromUtf8("rotation_groupBox"));
        sizePolicy.setHeightForWidth(rotation_groupBox->sizePolicy().hasHeightForWidth());
        rotation_groupBox->setSizePolicy(sizePolicy);
        rotation_groupBox->setMaximumSize(QSize(180, 16777215));
        rotation_groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	color: white;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(rotation_groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 2, -1);
        x_rotation_horizontalLayout = new QHBoxLayout();
        x_rotation_horizontalLayout->setObjectName(QString::fromUtf8("x_rotation_horizontalLayout"));
        x_rotation_label = new QLabel(rotation_groupBox);
        x_rotation_label->setObjectName(QString::fromUtf8("x_rotation_label"));
        x_rotation_label->setStyleSheet(QString::fromUtf8(""));

        x_rotation_horizontalLayout->addWidget(x_rotation_label);

        x_rotation_qslider = new QSlider(rotation_groupBox);
        x_rotation_qslider->setObjectName(QString::fromUtf8("x_rotation_qslider"));
        x_rotation_qslider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: none;\n"
"    margin-top: 1px;\n"
"    margin-bottom: 1px;\n"
"    height: 1px;\n"
"}\n"
"\n"
"QSlider::handle {\n"
"    background: rgb(97, 53, 131);\n"
"    border: 3px solid black;\n"
"    width: 3px;\n"
"    margin: -30px 0;\n"
"}\n"
"\n"
"QSlider::sub-page {\n"
"    background: rgb(145, 65, 172);\n"
"}\n"
"\n"
"QSlider::add-page {\n"
"    background: rgb(36, 31, 49);\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled, QSlider::sub-page:horizontal:disabled,\n"
"QSlider::add-page:vertical:disabled, QSlider::sub-page:vertical:disabled {\n"
"    background: #606060;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(36, 31, 49),\n"
"                                stop:0.1 rgb(36, 31, 49),\n"
"                                stop:0.6 rgb(145, 65, 172),\n"
"                                stop:1.0 rgb(145, 65, 172));\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {"
                        "\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(145, 65, 172),\n"
"                                stop:0.4 rgb(145, 65, 172),\n"
"                                stop:0.9 rgb(36, 31, 49),\n"
"                                stop:1.0 rgb(36, 31, 49));\n"
"}\n"
"\n"
"QSlider::tick:horizontal {\n"
"    height: 5px;\n"
"    width: 1px;\n"
"    background: rgb(255, 255, 255);\n"
"    margin-top: -2px;\n"
"}\n"
""));
        x_rotation_qslider->setMinimum(-180);
        x_rotation_qslider->setMaximum(180);
        x_rotation_qslider->setSingleStep(2);
        x_rotation_qslider->setValue(0);
        x_rotation_qslider->setOrientation(Qt::Horizontal);

        x_rotation_horizontalLayout->addWidget(x_rotation_qslider);

        x_value_rotation_label = new QLabel(rotation_groupBox);
        x_value_rotation_label->setObjectName(QString::fromUtf8("x_value_rotation_label"));
        sizePolicy.setHeightForWidth(x_value_rotation_label->sizePolicy().hasHeightForWidth());
        x_value_rotation_label->setSizePolicy(sizePolicy);
        x_value_rotation_label->setMaximumSize(QSize(30, 16777215));
        x_value_rotation_label->setStyleSheet(QString::fromUtf8(""));

        x_rotation_horizontalLayout->addWidget(x_value_rotation_label);


        verticalLayout_3->addLayout(x_rotation_horizontalLayout);

        y_rotation_horizontalLayout = new QHBoxLayout();
        y_rotation_horizontalLayout->setObjectName(QString::fromUtf8("y_rotation_horizontalLayout"));
        y_rotation_label = new QLabel(rotation_groupBox);
        y_rotation_label->setObjectName(QString::fromUtf8("y_rotation_label"));
        y_rotation_label->setStyleSheet(QString::fromUtf8(""));

        y_rotation_horizontalLayout->addWidget(y_rotation_label);

        y_rotation_qslider = new QSlider(rotation_groupBox);
        y_rotation_qslider->setObjectName(QString::fromUtf8("y_rotation_qslider"));
        y_rotation_qslider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: none;\n"
"    margin-top: 1px;\n"
"    margin-bottom: 1px;\n"
"    height: 1px;\n"
"}\n"
"\n"
"QSlider::handle {\n"
"    background: rgb(97, 53, 131);\n"
"    border: 3px solid black;\n"
"    width: 3px;\n"
"    margin: -30px 0;\n"
"}\n"
"\n"
"QSlider::sub-page {\n"
"    background: rgb(145, 65, 172);\n"
"}\n"
"\n"
"QSlider::add-page {\n"
"    background: rgb(36, 31, 49);\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled, QSlider::sub-page:horizontal:disabled,\n"
"QSlider::add-page:vertical:disabled, QSlider::sub-page:vertical:disabled {\n"
"    background: #606060;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(36, 31, 49),\n"
"                                stop:0.1 rgb(36, 31, 49),\n"
"                                stop:0.6 rgb(145, 65, 172),\n"
"                                stop:1.0 rgb(145, 65, 172));\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {"
                        "\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(145, 65, 172),\n"
"                                stop:0.4 rgb(145, 65, 172),\n"
"                                stop:0.9 rgb(36, 31, 49),\n"
"                                stop:1.0 rgb(36, 31, 49));\n"
"}\n"
"\n"
"QSlider::tick:horizontal {\n"
"    height: 5px;\n"
"    width: 1px;\n"
"    background: rgb(255, 255, 255);\n"
"    margin-top: -2px;\n"
"}\n"
""));
        y_rotation_qslider->setMinimum(-180);
        y_rotation_qslider->setMaximum(180);
        y_rotation_qslider->setValue(0);
        y_rotation_qslider->setOrientation(Qt::Horizontal);

        y_rotation_horizontalLayout->addWidget(y_rotation_qslider);

        y_value_rotation_label = new QLabel(rotation_groupBox);
        y_value_rotation_label->setObjectName(QString::fromUtf8("y_value_rotation_label"));
        y_value_rotation_label->setStyleSheet(QString::fromUtf8(""));

        y_rotation_horizontalLayout->addWidget(y_value_rotation_label);


        verticalLayout_3->addLayout(y_rotation_horizontalLayout);

        z_rotation_horizontalLayout = new QHBoxLayout();
        z_rotation_horizontalLayout->setObjectName(QString::fromUtf8("z_rotation_horizontalLayout"));
        z_rotation_label = new QLabel(rotation_groupBox);
        z_rotation_label->setObjectName(QString::fromUtf8("z_rotation_label"));
        z_rotation_label->setStyleSheet(QString::fromUtf8(""));

        z_rotation_horizontalLayout->addWidget(z_rotation_label);

        z_rotation_qslider = new QSlider(rotation_groupBox);
        z_rotation_qslider->setObjectName(QString::fromUtf8("z_rotation_qslider"));
        z_rotation_qslider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: none;\n"
"    margin-top: 1px;\n"
"    margin-bottom: 1px;\n"
"    height: 1px;\n"
"}\n"
"\n"
"QSlider::handle {\n"
"    background: rgb(97, 53, 131);\n"
"    border: 3px solid black;\n"
"    width: 3px;\n"
"    margin: -30px 0;\n"
"}\n"
"\n"
"QSlider::sub-page {\n"
"    background: rgb(145, 65, 172);\n"
"}\n"
"\n"
"QSlider::add-page {\n"
"    background: rgb(36, 31, 49);\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled, QSlider::sub-page:horizontal:disabled,\n"
"QSlider::add-page:vertical:disabled, QSlider::sub-page:vertical:disabled {\n"
"    background: #606060;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(36, 31, 49),\n"
"                                stop:0.1 rgb(36, 31, 49),\n"
"                                stop:0.6 rgb(145, 65, 172),\n"
"                                stop:1.0 rgb(145, 65, 172));\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {"
                        "\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(145, 65, 172),\n"
"                                stop:0.4 rgb(145, 65, 172),\n"
"                                stop:0.9 rgb(36, 31, 49),\n"
"                                stop:1.0 rgb(36, 31, 49));\n"
"}\n"
"\n"
"QSlider::tick:horizontal {\n"
"    height: 5px;\n"
"    width: 1px;\n"
"    background: rgb(255, 255, 255);\n"
"    margin-top: -2px;\n"
"}\n"
""));
        z_rotation_qslider->setMinimum(-180);
        z_rotation_qslider->setMaximum(180);
        z_rotation_qslider->setValue(0);
        z_rotation_qslider->setOrientation(Qt::Horizontal);

        z_rotation_horizontalLayout->addWidget(z_rotation_qslider);

        z_value_rotation_label = new QLabel(rotation_groupBox);
        z_value_rotation_label->setObjectName(QString::fromUtf8("z_value_rotation_label"));
        z_value_rotation_label->setStyleSheet(QString::fromUtf8(""));

        z_rotation_horizontalLayout->addWidget(z_value_rotation_label);


        verticalLayout_3->addLayout(z_rotation_horizontalLayout);


        menu_verticalLayout->addWidget(rotation_groupBox);

        position_groupBox = new QGroupBox(centralwidget);
        position_groupBox->setObjectName(QString::fromUtf8("position_groupBox"));
        sizePolicy.setHeightForWidth(position_groupBox->sizePolicy().hasHeightForWidth());
        position_groupBox->setSizePolicy(sizePolicy);
        position_groupBox->setMaximumSize(QSize(180, 16777215));
        position_groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	color: white;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(position_groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 2, -1);
        x_pos_horizontalLayout = new QHBoxLayout();
        x_pos_horizontalLayout->setObjectName(QString::fromUtf8("x_pos_horizontalLayout"));
        x_position_label = new QLabel(position_groupBox);
        x_position_label->setObjectName(QString::fromUtf8("x_position_label"));
        x_position_label->setStyleSheet(QString::fromUtf8(""));

        x_pos_horizontalLayout->addWidget(x_position_label);

        x_position_qslider = new QSlider(position_groupBox);
        x_position_qslider->setObjectName(QString::fromUtf8("x_position_qslider"));
        x_position_qslider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: none;\n"
"    margin-top: 1px;\n"
"    margin-bottom: 1px;\n"
"    height: 1px;\n"
"}\n"
"\n"
"QSlider::handle {\n"
"    background: rgb(97, 53, 131);\n"
"    border: 3px solid black;\n"
"    width: 3px;\n"
"    margin: -30px 0;\n"
"}\n"
"\n"
"QSlider::sub-page {\n"
"    background: rgb(145, 65, 172);\n"
"}\n"
"\n"
"QSlider::add-page {\n"
"    background: rgb(36, 31, 49);\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled, QSlider::sub-page:horizontal:disabled,\n"
"QSlider::add-page:vertical:disabled, QSlider::sub-page:vertical:disabled {\n"
"    background: #606060;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(36, 31, 49),\n"
"                                stop:0.1 rgb(36, 31, 49),\n"
"                                stop:0.6 rgb(145, 65, 172),\n"
"                                stop:1.0 rgb(145, 65, 172));\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {"
                        "\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(145, 65, 172),\n"
"                                stop:0.4 rgb(145, 65, 172),\n"
"                                stop:0.9 rgb(36, 31, 49),\n"
"                                stop:1.0 rgb(36, 31, 49));\n"
"}\n"
"\n"
"QSlider::tick:horizontal {\n"
"    height: 5px;\n"
"    width: 1px;\n"
"    background: rgb(255, 255, 255);\n"
"    margin-top: -2px;\n"
"}\n"
""));
        x_position_qslider->setMinimum(-300);
        x_position_qslider->setMaximum(300);
        x_position_qslider->setValue(0);
        x_position_qslider->setOrientation(Qt::Horizontal);

        x_pos_horizontalLayout->addWidget(x_position_qslider);

        x_value_position_label = new QLabel(position_groupBox);
        x_value_position_label->setObjectName(QString::fromUtf8("x_value_position_label"));
        x_value_position_label->setStyleSheet(QString::fromUtf8(""));

        x_pos_horizontalLayout->addWidget(x_value_position_label);


        verticalLayout_4->addLayout(x_pos_horizontalLayout);

        y_pos_horizontalLayout = new QHBoxLayout();
        y_pos_horizontalLayout->setObjectName(QString::fromUtf8("y_pos_horizontalLayout"));
        y_position_label = new QLabel(position_groupBox);
        y_position_label->setObjectName(QString::fromUtf8("y_position_label"));
        y_position_label->setStyleSheet(QString::fromUtf8(""));

        y_pos_horizontalLayout->addWidget(y_position_label);

        y_position_qslider = new QSlider(position_groupBox);
        y_position_qslider->setObjectName(QString::fromUtf8("y_position_qslider"));
        y_position_qslider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: none;\n"
"    margin-top: 1px;\n"
"    margin-bottom: 1px;\n"
"    height: 1px;\n"
"}\n"
"\n"
"QSlider::handle {\n"
"    background: rgb(97, 53, 131);\n"
"    border: 3px solid black;\n"
"    width: 3px;\n"
"    margin: -30px 0;\n"
"}\n"
"\n"
"QSlider::sub-page {\n"
"    background: rgb(145, 65, 172);\n"
"}\n"
"\n"
"QSlider::add-page {\n"
"    background: rgb(36, 31, 49);\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled, QSlider::sub-page:horizontal:disabled,\n"
"QSlider::add-page:vertical:disabled, QSlider::sub-page:vertical:disabled {\n"
"    background: #606060;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(36, 31, 49),\n"
"                                stop:0.1 rgb(36, 31, 49),\n"
"                                stop:0.6 rgb(145, 65, 172),\n"
"                                stop:1.0 rgb(145, 65, 172));\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {"
                        "\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(145, 65, 172),\n"
"                                stop:0.4 rgb(145, 65, 172),\n"
"                                stop:0.9 rgb(36, 31, 49),\n"
"                                stop:1.0 rgb(36, 31, 49));\n"
"}\n"
"\n"
"QSlider::tick:horizontal {\n"
"    height: 5px;\n"
"    width: 1px;\n"
"    background: rgb(255, 255, 255);\n"
"    margin-top: -2px;\n"
"}\n"
""));
        y_position_qslider->setMinimum(-300);
        y_position_qslider->setMaximum(300);
        y_position_qslider->setValue(0);
        y_position_qslider->setOrientation(Qt::Horizontal);

        y_pos_horizontalLayout->addWidget(y_position_qslider);

        y_value_position_label = new QLabel(position_groupBox);
        y_value_position_label->setObjectName(QString::fromUtf8("y_value_position_label"));
        y_value_position_label->setStyleSheet(QString::fromUtf8(""));

        y_pos_horizontalLayout->addWidget(y_value_position_label);


        verticalLayout_4->addLayout(y_pos_horizontalLayout);

        z_pos_horizontalLayout = new QHBoxLayout();
        z_pos_horizontalLayout->setObjectName(QString::fromUtf8("z_pos_horizontalLayout"));
        z_position_label = new QLabel(position_groupBox);
        z_position_label->setObjectName(QString::fromUtf8("z_position_label"));
        z_position_label->setStyleSheet(QString::fromUtf8(""));

        z_pos_horizontalLayout->addWidget(z_position_label);

        z_position_qslider = new QSlider(position_groupBox);
        z_position_qslider->setObjectName(QString::fromUtf8("z_position_qslider"));
        z_position_qslider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: none;\n"
"    margin-top: 1px;\n"
"    margin-bottom: 1px;\n"
"    height: 1px;\n"
"}\n"
"\n"
"QSlider::handle {\n"
"    background: rgb(97, 53, 131);\n"
"    border: 3px solid black;\n"
"    width: 3px;\n"
"    margin: -30px 0;\n"
"}\n"
"\n"
"QSlider::sub-page {\n"
"    background: rgb(145, 65, 172);\n"
"}\n"
"\n"
"QSlider::add-page {\n"
"    background: rgb(36, 31, 49);\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled, QSlider::sub-page:horizontal:disabled,\n"
"QSlider::add-page:vertical:disabled, QSlider::sub-page:vertical:disabled {\n"
"    background: #606060;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(36, 31, 49),\n"
"                                stop:0.1 rgb(36, 31, 49),\n"
"                                stop:0.6 rgb(145, 65, 172),\n"
"                                stop:1.0 rgb(145, 65, 172));\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {"
                        "\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(145, 65, 172),\n"
"                                stop:0.4 rgb(145, 65, 172),\n"
"                                stop:0.9 rgb(36, 31, 49),\n"
"                                stop:1.0 rgb(36, 31, 49));\n"
"}\n"
"\n"
"QSlider::tick:horizontal {\n"
"    height: 5px;\n"
"    width: 1px;\n"
"    background: rgb(255, 255, 255);\n"
"    margin-top: -2px;\n"
"}\n"
""));
        z_position_qslider->setMinimum(-300);
        z_position_qslider->setMaximum(300);
        z_position_qslider->setValue(0);
        z_position_qslider->setOrientation(Qt::Horizontal);

        z_pos_horizontalLayout->addWidget(z_position_qslider);

        z_value_position_label = new QLabel(position_groupBox);
        z_value_position_label->setObjectName(QString::fromUtf8("z_value_position_label"));
        z_value_position_label->setStyleSheet(QString::fromUtf8(""));

        z_pos_horizontalLayout->addWidget(z_value_position_label);


        verticalLayout_4->addLayout(z_pos_horizontalLayout);


        menu_verticalLayout->addWidget(position_groupBox);

        vertices_groupBox = new QGroupBox(centralwidget);
        vertices_groupBox->setObjectName(QString::fromUtf8("vertices_groupBox"));
        sizePolicy.setHeightForWidth(vertices_groupBox->sizePolicy().hasHeightForWidth());
        vertices_groupBox->setSizePolicy(sizePolicy);
        vertices_groupBox->setMaximumSize(QSize(180, 120));
        verticalLayout_5 = new QVBoxLayout(vertices_groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, 2, -1);
        vert_size_horizontalLayout = new QHBoxLayout();
        vert_size_horizontalLayout->setObjectName(QString::fromUtf8("vert_size_horizontalLayout"));
        type_label = new QLabel(vertices_groupBox);
        type_label->setObjectName(QString::fromUtf8("type_label"));
        sizePolicy.setHeightForWidth(type_label->sizePolicy().hasHeightForWidth());
        type_label->setSizePolicy(sizePolicy);
        type_label->setMaximumSize(QSize(30, 16777215));

        vert_size_horizontalLayout->addWidget(type_label);

        vertices_type_comboBox = new QComboBox(vertices_groupBox);
        vertices_type_comboBox->addItem(QString());
        vertices_type_comboBox->addItem(QString());
        vertices_type_comboBox->addItem(QString());
        vertices_type_comboBox->setObjectName(QString::fromUtf8("vertices_type_comboBox"));

        vert_size_horizontalLayout->addWidget(vertices_type_comboBox);


        verticalLayout_5->addLayout(vert_size_horizontalLayout);

        vert_size_horizontalLayout_2 = new QHBoxLayout();
        vert_size_horizontalLayout_2->setObjectName(QString::fromUtf8("vert_size_horizontalLayout_2"));
        size_label = new QLabel(vertices_groupBox);
        size_label->setObjectName(QString::fromUtf8("size_label"));
        sizePolicy.setHeightForWidth(size_label->sizePolicy().hasHeightForWidth());
        size_label->setSizePolicy(sizePolicy);
        size_label->setMaximumSize(QSize(35, 16777215));

        vert_size_horizontalLayout_2->addWidget(size_label);

        vertices_size_slider = new QSlider(vertices_groupBox);
        vertices_size_slider->setObjectName(QString::fromUtf8("vertices_size_slider"));
        vertices_size_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border:none;\n"
"    margin-top: 1px;\n"
"    margin-bottom: 1px;\n"
"    height: 1px;\n"
"}\n"
"\n"
"QSlider::handle {\n"
"    background: rgb(97, 53, 131);\n"
"    border: 3px solid black;\n"
"    width: 3px;\n"
"    margin: -30px 0;\n"
"}\n"
"\n"
"QSlider::sub-page {\n"
"    background: rgb(145, 65, 172);\n"
"}\n"
"\n"
"QSlider::add-page {\n"
"    background: rgb(36, 31, 49);\n"
"}"));
        vertices_size_slider->setMinimum(1);
        vertices_size_slider->setMaximum(110);
        vertices_size_slider->setValue(1);
        vertices_size_slider->setOrientation(Qt::Horizontal);

        vert_size_horizontalLayout_2->addWidget(vertices_size_slider);


        verticalLayout_5->addLayout(vert_size_horizontalLayout_2);

        vertices_color_button = new QPushButton(vertices_groupBox);
        vertices_color_button->setObjectName(QString::fromUtf8("vertices_color_button"));
        sizePolicy.setHeightForWidth(vertices_color_button->sizePolicy().hasHeightForWidth());
        vertices_color_button->setSizePolicy(sizePolicy);
        vertices_color_button->setMaximumSize(QSize(300, 50));
        vertices_color_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(28, 28, 28);\n"
"	border-radius: 5px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(129, 61, 156);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color:   rgb(129, 61, 156);\n"
"}"));

        verticalLayout_5->addWidget(vertices_color_button);


        menu_verticalLayout->addWidget(vertices_groupBox);

        edges_groupBox = new QGroupBox(centralwidget);
        edges_groupBox->setObjectName(QString::fromUtf8("edges_groupBox"));
        sizePolicy.setHeightForWidth(edges_groupBox->sizePolicy().hasHeightForWidth());
        edges_groupBox->setSizePolicy(sizePolicy);
        edges_groupBox->setMaximumSize(QSize(180, 120));
        verticalLayout_6 = new QVBoxLayout(edges_groupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, -1, 2, -1);
        edges_horizontalLayout = new QHBoxLayout();
        edges_horizontalLayout->setObjectName(QString::fromUtf8("edges_horizontalLayout"));
        type_edges_label = new QLabel(edges_groupBox);
        type_edges_label->setObjectName(QString::fromUtf8("type_edges_label"));
        sizePolicy.setHeightForWidth(type_edges_label->sizePolicy().hasHeightForWidth());
        type_edges_label->setSizePolicy(sizePolicy);
        type_edges_label->setMinimumSize(QSize(30, 0));

        edges_horizontalLayout->addWidget(type_edges_label);

        edges_type_comboBox = new QComboBox(edges_groupBox);
        edges_type_comboBox->addItem(QString());
        edges_type_comboBox->addItem(QString());
        edges_type_comboBox->setObjectName(QString::fromUtf8("edges_type_comboBox"));

        edges_horizontalLayout->addWidget(edges_type_comboBox);


        verticalLayout_6->addLayout(edges_horizontalLayout);

        edges_size_horizontalLayout = new QHBoxLayout();
        edges_size_horizontalLayout->setObjectName(QString::fromUtf8("edges_size_horizontalLayout"));
        edges_size_label = new QLabel(edges_groupBox);
        edges_size_label->setObjectName(QString::fromUtf8("edges_size_label"));
        sizePolicy.setHeightForWidth(edges_size_label->sizePolicy().hasHeightForWidth());
        edges_size_label->setSizePolicy(sizePolicy);
        edges_size_label->setMinimumSize(QSize(29, 0));

        edges_size_horizontalLayout->addWidget(edges_size_label);

        edges_size_slider = new QSlider(edges_groupBox);
        edges_size_slider->setObjectName(QString::fromUtf8("edges_size_slider"));
        edges_size_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border:none;\n"
"    margin-top: 1px;\n"
"    margin-bottom: 1px;\n"
"    height: 1px;\n"
"}\n"
"\n"
"QSlider::handle {\n"
"    background: rgb(97, 53, 131);\n"
"    border: 3px solid black;\n"
"    width: 3px;\n"
"    margin: -30px 0;\n"
"}\n"
"\n"
"QSlider::sub-page {\n"
"    background: rgb(145, 65, 172);\n"
"}\n"
"\n"
"QSlider::add-page {\n"
"    background: rgb(36, 31, 49);\n"
"}"));
        edges_size_slider->setMaximum(10);
        edges_size_slider->setValue(0);
        edges_size_slider->setOrientation(Qt::Horizontal);

        edges_size_horizontalLayout->addWidget(edges_size_slider);


        verticalLayout_6->addLayout(edges_size_horizontalLayout);

        edges_color_button = new QPushButton(edges_groupBox);
        edges_color_button->setObjectName(QString::fromUtf8("edges_color_button"));
        sizePolicy.setHeightForWidth(edges_color_button->sizePolicy().hasHeightForWidth());
        edges_color_button->setSizePolicy(sizePolicy);
        edges_color_button->setMaximumSize(QSize(300, 50));
        edges_color_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(28, 28, 28);\n"
"	border-radius: 5px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(129, 61, 156);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color:   rgb(129, 61, 156);\n"
"}"));

        verticalLayout_6->addWidget(edges_color_button);


        menu_verticalLayout->addWidget(edges_groupBox);

        projection_groupBox = new QGroupBox(centralwidget);
        projection_groupBox->setObjectName(QString::fromUtf8("projection_groupBox"));
        sizePolicy.setHeightForWidth(projection_groupBox->sizePolicy().hasHeightForWidth());
        projection_groupBox->setSizePolicy(sizePolicy);
        projection_groupBox->setMaximumSize(QSize(180, 16777215));
        verticalLayout_7 = new QVBoxLayout(projection_groupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, -1, 2, -1);
        projection_horizontalLayout = new QHBoxLayout();
        projection_horizontalLayout->setObjectName(QString::fromUtf8("projection_horizontalLayout"));
        type_projection_label = new QLabel(projection_groupBox);
        type_projection_label->setObjectName(QString::fromUtf8("type_projection_label"));
        sizePolicy.setHeightForWidth(type_projection_label->sizePolicy().hasHeightForWidth());
        type_projection_label->setSizePolicy(sizePolicy);
        type_projection_label->setMaximumSize(QSize(30, 16777215));

        projection_horizontalLayout->addWidget(type_projection_label);

        projection_type_comboBox = new QComboBox(projection_groupBox);
        projection_type_comboBox->addItem(QString());
        projection_type_comboBox->addItem(QString());
        projection_type_comboBox->setObjectName(QString::fromUtf8("projection_type_comboBox"));

        projection_horizontalLayout->addWidget(projection_type_comboBox);


        verticalLayout_7->addLayout(projection_horizontalLayout);


        menu_verticalLayout->addWidget(projection_groupBox);

        scene_groupBox = new QGroupBox(centralwidget);
        scene_groupBox->setObjectName(QString::fromUtf8("scene_groupBox"));
        sizePolicy.setHeightForWidth(scene_groupBox->sizePolicy().hasHeightForWidth());
        scene_groupBox->setSizePolicy(sizePolicy);
        scene_groupBox->setMaximumSize(QSize(180, 90));
        verticalLayout_8 = new QVBoxLayout(scene_groupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, -1, 2, -1);
        scale_horizontalLayout = new QHBoxLayout();
        scale_horizontalLayout->setObjectName(QString::fromUtf8("scale_horizontalLayout"));
        scale_label = new QLabel(scene_groupBox);
        scale_label->setObjectName(QString::fromUtf8("scale_label"));
        sizePolicy.setHeightForWidth(scale_label->sizePolicy().hasHeightForWidth());
        scale_label->setSizePolicy(sizePolicy);
        scale_label->setMaximumSize(QSize(40, 16777215));

        scale_horizontalLayout->addWidget(scale_label);

        scale_qslider = new QSlider(scene_groupBox);
        scale_qslider->setObjectName(QString::fromUtf8("scale_qslider"));
        scale_qslider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: none;\n"
"    margin-top: 1px;\n"
"    margin-bottom: 1px;\n"
"    height: 1px;\n"
"}\n"
"\n"
"QSlider::handle {\n"
"    background: rgb(97, 53, 131);\n"
"    border: 3px solid black;\n"
"    width: 3px;\n"
"    margin: -30px 0;\n"
"}\n"
"\n"
"QSlider::sub-page {\n"
"    background: rgb(145, 65, 172);\n"
"}\n"
"\n"
"QSlider::add-page {\n"
"    background: rgb(36, 31, 49);\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled, QSlider::sub-page:horizontal:disabled,\n"
"QSlider::add-page:vertical:disabled, QSlider::sub-page:vertical:disabled {\n"
"    background: #606060;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(36, 31, 49),\n"
"                                stop:0.1 rgb(36, 31, 49),\n"
"                                stop:0.6 rgb(145, 65, 172),\n"
"                                stop:1.0 rgb(145, 65, 172));\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {"
                        "\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0.0 rgb(145, 65, 172),\n"
"                                stop:0.4 rgb(145, 65, 172),\n"
"                                stop:0.9 rgb(36, 31, 49),\n"
"                                stop:1.0 rgb(36, 31, 49));\n"
"}\n"
"\n"
"QSlider::tick:horizontal {\n"
"    height: 5px;\n"
"    width: 1px;\n"
"    background: rgb(255, 255, 255);\n"
"    margin-top: -2px;\n"
"}\n"
""));
        scale_qslider->setMinimum(-10);
        scale_qslider->setMaximum(10);
        scale_qslider->setPageStep(10);
        scale_qslider->setValue(0);
        scale_qslider->setOrientation(Qt::Horizontal);

        scale_horizontalLayout->addWidget(scale_qslider);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        scale_horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_8->addLayout(scale_horizontalLayout);

        background_color_button = new QPushButton(scene_groupBox);
        background_color_button->setObjectName(QString::fromUtf8("background_color_button"));
        sizePolicy.setHeightForWidth(background_color_button->sizePolicy().hasHeightForWidth());
        background_color_button->setSizePolicy(sizePolicy);
        background_color_button->setMaximumSize(QSize(300, 50));
        background_color_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(28, 28, 28);\n"
"	border-radius: 5px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(129, 61, 156);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color:   rgb(129, 61, 156);\n"
"}"));

        verticalLayout_8->addWidget(background_color_button);


        menu_verticalLayout->addWidget(scene_groupBox);

        reset_settings_button = new QPushButton(centralwidget);
        reset_settings_button->setObjectName(QString::fromUtf8("reset_settings_button"));
        sizePolicy.setHeightForWidth(reset_settings_button->sizePolicy().hasHeightForWidth());
        reset_settings_button->setSizePolicy(sizePolicy);
        reset_settings_button->setMaximumSize(QSize(180, 30));
        reset_settings_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(28, 28, 28);\n"
"	border-radius: 5px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(129, 61, 156);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color:   rgb(129, 61, 156);\n"
"}"));

        menu_verticalLayout->addWidget(reset_settings_button);

        capture_horizontalLayout = new QHBoxLayout();
        capture_horizontalLayout->setObjectName(QString::fromUtf8("capture_horizontalLayout"));
        screenshot_button = new QPushButton(centralwidget);
        screenshot_button->setObjectName(QString::fromUtf8("screenshot_button"));
        sizePolicy.setHeightForWidth(screenshot_button->sizePolicy().hasHeightForWidth());
        screenshot_button->setSizePolicy(sizePolicy);
        screenshot_button->setMaximumSize(QSize(180, 30));
        screenshot_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(28, 28, 28);\n"
"	border-radius: 5px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(129, 61, 156);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color:   rgb(129, 61, 156);\n"
"}"));

        capture_horizontalLayout->addWidget(screenshot_button);

        record_gif_button = new QPushButton(centralwidget);
        record_gif_button->setObjectName(QString::fromUtf8("record_gif_button"));
        sizePolicy.setHeightForWidth(record_gif_button->sizePolicy().hasHeightForWidth());
        record_gif_button->setSizePolicy(sizePolicy);
        record_gif_button->setMaximumSize(QSize(180, 30));
        record_gif_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(28, 28, 28);\n"
"	border-radius: 5px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(129, 61, 156);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color:   rgb(129, 61, 156);\n"
"}"));

        capture_horizontalLayout->addWidget(record_gif_button);


        menu_verticalLayout->addLayout(capture_horizontalLayout);


        horizontalLayout_17->addLayout(menu_verticalLayout);

        gl_widget = new s21::GLWidget(centralwidget);
        gl_widget->setObjectName(QString::fromUtf8("gl_widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gl_widget->sizePolicy().hasHeightForWidth());
        gl_widget->setSizePolicy(sizePolicy1);

        horizontalLayout_17->addWidget(gl_widget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        load_file_button->setText(QCoreApplication::translate("MainWindow", "Load File", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Model Info", nullptr));
        filename_title_label->setText(QCoreApplication::translate("MainWindow", "File:", nullptr));
        filename_label->setText(QCoreApplication::translate("MainWindow", "filename.obj", nullptr));
        edges_label->setText(QCoreApplication::translate("MainWindow", "Edges:", nullptr));
        edges_count_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        vertices_label->setText(QCoreApplication::translate("MainWindow", "Vertices:", nullptr));
        vertices_count_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        status_title_label->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        status_label->setText(QCoreApplication::translate("MainWindow", "No file", nullptr));
        rotation_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Rotation", nullptr));
        x_rotation_label->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        x_value_rotation_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        y_rotation_label->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        y_value_rotation_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        z_rotation_label->setText(QCoreApplication::translate("MainWindow", "z:", nullptr));
        z_value_rotation_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        position_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Position", nullptr));
        x_position_label->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        x_value_position_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        y_position_label->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        y_value_position_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        z_position_label->setText(QCoreApplication::translate("MainWindow", "z:", nullptr));
        z_value_position_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        vertices_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        type_label->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        vertices_type_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Square", nullptr));
        vertices_type_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Circle", nullptr));
        vertices_type_comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Blank", nullptr));

        size_label->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        vertices_color_button->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        edges_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        type_edges_label->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        edges_type_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Solid", nullptr));
        edges_type_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Dashed", nullptr));

        edges_size_label->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        edges_color_button->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        projection_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Projection", nullptr));
        type_projection_label->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        projection_type_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Parallel", nullptr));
        projection_type_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Central", nullptr));

        scene_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Scene", nullptr));
        scale_label->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        background_color_button->setText(QCoreApplication::translate("MainWindow", "Background Color", nullptr));
        reset_settings_button->setText(QCoreApplication::translate("MainWindow", "Reset Model Settings", nullptr));
        screenshot_button->setText(QCoreApplication::translate("MainWindow", "Screenshot", nullptr));
        record_gif_button->setText(QCoreApplication::translate("MainWindow", "Record GIF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S21_MAINWINDOW_H
