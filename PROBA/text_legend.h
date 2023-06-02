#ifndef TEXT_LEGEND_H
#define TEXT_LEGEND_H

#include <QWidget>
#include <QtDebug>

namespace Ui {
class Text_Legend;
}

class Text_Legend : public QWidget
{
    Q_OBJECT

public:
    explicit Text_Legend(QWidget *parent = nullptr);
    ~Text_Legend();

    int random_int;

    QString data_1;
    int data_1_index;

    QString data_2;
    int data_2_index;

    QString data_3;
    int data_3_index;

    QString data_4;
    int data_4_index;

    QString data_5;

private slots:
    void on_Start_Button_clicked();

    void on_restart_Button_clicked();

private:
    Ui::Text_Legend *ui;

    //int random_int;

    QString Water_Bucket(QString,int);
    QString Water_Bucket_for_dossier(QString);

signals:
    void signal(int random_int);
};

#endif // TEXT_LEGEND_H
