#ifndef BOARD_H
#define BOARD_H

#include <QLabel>
#include <QLayout>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QSignalMapper>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QHBoxLayout>
#include <QPixmap>

QT_BEGIN_NAMESPACE
namespace Ui { class Board; }
QT_END_NAMESPACE

class Board : public QWidget
{
    Q_OBJECT

    QPushButton *buttons[24];

public:
    Board(QWidget *parent = nullptr);
    ~Board();


private slots:


private:
    Ui::Board *ui;

};
#endif // BOARD_H
