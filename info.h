#ifndef INFO_H
#define INFO_H

#include <QDialog>
#include <classes.h>
namespace Ui {
class Info;
}

class Info : public QDialog
{
    Q_OBJECT

public:
    explicit Info(QWidget *parent = nullptr);
    ~Info();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Info *ui;
};

#endif // INFO_H
