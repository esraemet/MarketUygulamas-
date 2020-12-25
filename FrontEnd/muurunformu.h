#ifndef MUURUNFORMU_H
#define MUURUNFORMU_H

#include <QDialog>

namespace Ui {
class MUUrunFormu;
}

class MUUrunFormu : public QDialog
{
    Q_OBJECT

public:
    explicit MUUrunFormu(QWidget *parent = 0);
    ~MUUrunFormu();

private:
    Ui::MUUrunFormu *ui;
};

#endif // MUURUNFORMU_H
