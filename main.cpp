#include <QApplication>
#include "ColorCircle.h"
#include<QVBoxLayout>
#include<QSlider>


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QWidget *mainWindow = new QWidget(nullptr);
    ColorCircle circle(mainWindow);
    auto *slider = new QSlider(Qt::Horizontal,mainWindow);
    QObject::connect(slider,&QSlider::valueChanged,[slider, &circle](int newValue){if(newValue < 33) circle.setGreen();
                                                                        else if(newValue >= 33 && newValue < 66) circle.setYellow();
                                                                        else circle.setRed();});
    slider->setMinimum(0);
    slider->setMaximum(100);
    slider->resize(200,20);
    auto* layout = new QVBoxLayout(mainWindow);
    layout->addWidget(&circle);
    layout->addWidget(slider);
    circle.setFixedSize(200,200);
    mainWindow->resize(250,250);
    mainWindow->move(500,200);
    //circle.show();
    mainWindow->show();
    return QApplication::exec();
}
