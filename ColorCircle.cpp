//
// Created by kutuk on 06.04.2022.
//

#include "ColorCircle.h"

ColorCircle::ColorCircle(QWidget *parent) {
    setParent(parent);
    setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    mRedPixmap = QPixmap("red.png");
    mGreenPixmap= QPixmap("green.png");
    mYellowPixmap = QPixmap("yellow");
    mCurrentPixmap = mGreenPixmap;//mGreenPixmap;
    setGeometry(mCurrentPixmap.rect());
}

void ColorCircle::setGreen() {
    mCurrentPixmap = mGreenPixmap;
    update();
}

void ColorCircle::setYellow() {
    mCurrentPixmap = mYellowPixmap;
    update();
}

void ColorCircle::setRed() {
    mCurrentPixmap = mRedPixmap;
    update();
}

QSize ColorCircle::minimumSizeHint() const {
    return QSize(100, 100);
}

void ColorCircle::paintEvent(QPaintEvent *e) {
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentPixmap);
}