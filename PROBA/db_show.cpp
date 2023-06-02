#include "db_show.h"
#include "ui_db_show.h"

db_show::db_show(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::db_show)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./Criminals.db");
    if(db.open())
    {
        qDebug("open");
    }
    else
    {
        qDebug("not open");
    }

    query = new QSqlQuery(db);
    query->exec("CREATE TABLE  Criminals ("
                "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                "Имя TEXT, "
                "Фамилия TEXT, "
                "Отчество TEXT, "
                "Дом TEXT, "
                "Улица TEXT, "
                "Город TEXT, "
                "Возраст TEXT, "
                "Пол TEXT, "
                "Шрамы TEXT, "
                "'Цвет кожи' TEXT, "
                "'Цвет волос' TEXT, "
                "'Основная рука' TEXT, "
                "'Дата преступления' TEXT, "
                "'Дом преступления' TEXT, "
                "'Улица преступления' TEXT, "
                "'Город преступления' TEXT, "
                "'Тип преступления' TEXT);");

    model = new QSqlTableModel(this,db);
    model->setTable("Criminals");
    model->select();

    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0, true);
}

db_show::~db_show()
{
    delete ui;
}

void db_show::on_pushButton_clicked()
{
    model->insertRow(model->rowCount());
}


void db_show::on_pushButton_2_clicked()
{
    model->removeRow(row);
}


void db_show::on_tableView_clicked(const QModelIndex &index)
{
    qDebug() << index.column();
    row = index.row();
}

