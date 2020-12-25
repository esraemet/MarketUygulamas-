#ifndef MARKETUYGULAMASI_H
#define MARKETUYGULAMASI_H

#include <QMainWindow>



namespace Ui {
class MarketUygulamasi;
}

class MarketUygulamasi : public QMainWindow
{
    Q_OBJECT

public:
    explicit MarketUygulamasi(QWidget *parent = 0);
    ~MarketUygulamasi();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_actionG_ncelle_triggered();

private:
    Ui::MarketUygulamasi *ui;


};

#endif // MARKETUYGULAMASI_H
