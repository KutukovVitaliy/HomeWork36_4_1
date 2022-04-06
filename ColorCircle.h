//
// Created by kutuk on 06.04.2022.
//

#ifndef UNTITLED_COLORCIRCLE_H
#define UNTITLED_COLORCIRCLE_H
#include <QWidget>
#include <QPixmap>
#include <QPaintEvent>
#include <QPainter>

class ColorCircle : public QWidget{
    Q_OBJECT
public:
    ColorCircle() = default;
    ColorCircle(QWidget *parent);
    void paintEvent (QPaintEvent *e) override;
    QSize minimumSizeHint() const override;
public slots:
    void setGreen();
    void setRed();
    void setYellow();

private:
    QPixmap mCurrentPixmap;
    QPixmap mRedPixmap;
    QPixmap mGreenPixmap;
    QPixmap mYellowPixmap;
};


#endif //UNTITLED_COLORCIRCLE_H
