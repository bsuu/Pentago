#ifndef PENTAGO_H
#define PENTAGO_H

#include <QMainWindow>

namespace Ui {
class Pentago;
}

class Pentago : public QMainWindow
{
    Q_OBJECT

public:
    explicit Pentago(QWidget *parent = 0);
    ~Pentago();

private:
    Ui::Pentago *ui;
};

#endif // PENTAGO_H
