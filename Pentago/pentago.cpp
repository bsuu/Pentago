#include "pentago.h"
#include "ui_pentago.h"

Pentago::Pentago(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pentago)
{
    ui->setupUi(this);
}

Pentago::~Pentago()
{
    delete ui;
}
