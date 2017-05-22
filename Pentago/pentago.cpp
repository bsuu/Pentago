#include "pentago.h"
#include "ui_pentago.h"
#include "QPushButton.h"

#include "player.h"
#include "point.h"
#include "quarter.h"

#include <QVBoxLayout>

Pentago::Pentago(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pentago)
{
    ui->setupUi(this);

    Player p("Radek", true);
    Point pp(3,3);


    Quarter q1;

//    for(int x = 0; x < 3; x++)
//        for(int y = 0; y < 3; y++)
//        {
//            Point p = q1.pointsTab[x][y];
//            QPushButton *q = new QPushButton();

//            ui->centralWidget->layout()->addWidget(q);
//        }

    q1.rotate(true);

}


Pentago::~Pentago()
{
    delete ui;
}
