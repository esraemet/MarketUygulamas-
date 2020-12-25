#ifndef MUURUNBILGILERIFORMU_H
#define MUURUNBILGILERIFORMU_H

#include <QDialog>

namespace Ui {
class MUUrunBilgileriFormu;
}

class MUUrunBilgileriFormu : public QDialog
{
    Q_OBJECT

public:
    explicit MUUrunBilgileriFormu(QWidget *parent = 0);
    ~MUUrunBilgileriFormu();

private:
    Ui::MUUrunBilgileriFormu *ui;
};

#endif // MUURUNBILGILERIFORMU_H
