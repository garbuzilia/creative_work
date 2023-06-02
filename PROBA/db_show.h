#ifndef DB_SHOW_H
#define DB_SHOW_H

#include <QDialog>

#include <QSqlDatabase>
#include <QtDebug>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class db_show;
}

class db_show : public QDialog
{
    Q_OBJECT

public:
    explicit db_show(QWidget *parent = nullptr);
    ~db_show();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::db_show *ui;

    QSqlDatabase db;
    QSqlQuery * query;
    QSqlTableModel *model;
    int row;
};

#endif // DB_SHOW_H
