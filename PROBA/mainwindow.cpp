#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QPixmap>
#include <QPushButton>
#include <QComboBox>

#include <QSqlError>

#include "db_show.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
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

    model = new QSqlTableModel(this,db);
    model->setTable("Criminals");
    model->select();


    window_legend = new Text_Legend;
    window_legend->show();

    //qDebug() << window_legend->x() << window_legend->y();

    window_legend->move(1211,204);

    connect(window_legend,&Text_Legend::signal,this,&MainWindow::slot);

    //qDebug() << window_legend->random_int;
    //void*a = window_legend->a;


    QPixmap bkgnd("./image/layer.png");
    bkgnd = bkgnd.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette p = palette();
    p.setBrush(QPalette::Background, bkgnd);
    setPalette(p);

    ui->Person_File->setText("<В разработке>");
//    ui->Person_File->setMaximumWidth(527);
//    ui->Person_File->setMinimumSize(ui->Person_File->sizeHint());


    ui->verticalScrollBar->hide();
//    ui->verticalScrollBar->setValue(0);
//    QObject::connect(ui->verticalScrollBar, &QScrollBar::valueChanged, [=]() {
//            int value = ui->verticalScrollBar->value();
//            ui->Person_File->move(ui->Person_File->pos().x(), -value);
//        });


    ui->person_navigate_right->setEnabled(0);
    ui->person_navigate_left->setEnabled(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot(int a)
{
    qDebug() << a;
    second_window_rand = QString::number(a);

    QSqlQuery query;
    query.prepare("SELECT * FROM Criminals");
    if (!query.exec())
    {
        qDebug() << query.lastError();
    }

    int mas[10] {8,9,10,11,12,13,14,15,16,17};
//    for (int i = 0; i < 10; ++i)
//    {
//            mas[i] = i + 1;
//    }
    std::random_shuffle(mas, mas + 10);
//    for (int i = 0; i < 10; i++)
//    {
//        qDebug() << mas[i];
//    }

    if (query.seek(a-1))
    {
        window_legend->data_1 = query.value(mas[0]).toString();
        window_legend->data_1_index = mas[0];
        window_legend->data_2 = query.value(mas[1]).toString();
        window_legend->data_2_index = mas[1];
        window_legend->data_3 = query.value(mas[2]).toString();
        window_legend->data_3_index = mas[2];
        window_legend->data_4 = query.value(mas[3]).toString();
        window_legend->data_4_index = mas[3];

        window_legend->data_5 = query.value(7).toString();
    }

    ui->try_counter->setText("");

    ui->comboBox_sex->setCurrentIndex(0);
    ui->comboBox_crime_city->setCurrentIndex(0);
    ui->comboBox_crime_date->setCurrentIndex(0);
    ui->comboBox_crime_house->setCurrentIndex(0);
    ui->comboBox_crime_street->setCurrentIndex(0);
    ui->comboBox_crime_type->setCurrentIndex(0);
    ui->comboBox_hair_color->setCurrentIndex(0);
    ui->comboBox_main_hand->setCurrentIndex(0);
    ui->comboBox_scars->setCurrentIndex(0);
    ui->comboBox_skin_color->setCurrentIndex(0);

    //second_window_rand = a.toString();
}

void MainWindow::on_Database_Edit_triggered()
{
    db_show table;
    table.setModal(true);
    table.exec();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    event->accept();

    qApp->closeAllWindows();
    qApp->quit();
}

void MainWindow::on_Exit_triggered()
{
    qApp->closeAllWindows();
}

void MainWindow::on_target_button_clicked()
{
    // Выполнение запроса к базе данных
        QSqlQuery query;
        query.prepare("SELECT * FROM Criminals"); // WHERE {без кавычек}Название_колонки = {с кавычками если строка}
        //query.addBindValue(1); // Значение индекса строки
        if (!query.exec())
        {
            qDebug() << query.lastError();
        }

        // Получение данных из запроса
        QString data;

        if (pers_index == second_window_rand)
        {
            ui->try_counter->setText("<font color='green'>НАШЕЛСЯ</font>");
        }
        else
        {
            ui->try_counter->setText("<font color='red'>ЭТО НЕ ОН!</font>");
        }

        while (query.next()) {\
            //DATA.push_back(query);
            data = query.value(0).toString(); // Значение третьего столбца
            //qDebug() << query.value(0).toString();
        }
        //ui->try_counter->setText(data);
//    // Выполнение запроса к базе данных
//        QSqlQuery query;
//        query.prepare("SELECT * FROM Criminals WHERE Пол = 'мужской'"); // WHERE {без кавычек}Название_колонки = {с кавычками если строка}
//        //query.addBindValue(1); // Значение индекса строки
//        if (!query.exec())
//        {
//            qDebug() << query.lastError();
//        }

//        // Получение данных из запроса
//        QString data;

//        while (query.next())
//        {
//            DATA.push_back(query);
//            data = query.value(3).toString(); // Значение третьего столбца
//            qDebug() << query.value(4).toString();
//        }
//        ui->try_counter->setText(data);
}

void MainWindow::sex_filter()
{
   DATA.clear();
   QSqlQuery query;
   qDebug() << index;
   switch (index)
   {
   case 1:
          query.prepare("SELECT * FROM Criminals WHERE Пол = 'мужской'"); // WHERE {без кавычек}Название_колонки = {с кавычками если строка
          if (query.exec())
          {
              while (query.next()){
                  DATA.push_back(query); // в DATA должны быть указатели
                  //qDebug() << query.value(1).toString();
                  //qDebug() <<DATA.front().value(2).toString();
              }
              qDebug() <<DATA.front().value(2).toString();
          }
          break;// все
   case 2:
       query.prepare("SELECT * FROM Criminals WHERE Пол = 'женский'"); // WHERE {без кавычек}Название_колонки = {с кавычками если строка
       if (query.exec())
       {
           while (query.next())
           {
               DATA.push_back(query); // в DATA должны быть указатели
               //qDebug() << query.value(1).toString();
           }
       }
       break;// все
   } //Сделать функцию, которая будет брать индексы со всех комбобоксов и формировать на их основе SQL запрос
}



void MainWindow::on_Filter_Button_clicked()
{
//    for (int i = 0; i < 10; i++)
//    {
//        qDebug() << all_indexes[i];
//    }
    //if (all_indexes[0] == 1)

    sql_query_command = "SELECT * FROM Criminals WHERE ";
    bool first_one = 1;
    for (int i = 0; i < 10; i++)
    {
        if (all_indexes[i] > 0)
        {
            if (i < 10  && first_one == 0)
            {
                sql_query_command += " AND ";
            }
            switch (i)
            {
            case 0:
                if (all_indexes[i] == 1)
                {
                    sql_query_command += "Пол = 'мужской'";
                }
                else if(all_indexes[i] == 2)
                {
                    sql_query_command += "Пол = 'женский'";
                }
                first_one = 0;
                break;
            case 1:
                if (all_indexes[i] == 1)
                {
                    sql_query_command += "Шрамы = 'есть'";
                }
                else if(all_indexes[i] == 2)
                {
                    sql_query_command += "Шрамы = 'нету'";
                }
                first_one = 0;
                break;
            case 2:
                if (all_indexes[i] == 1)
                {
                    sql_query_command += "\"Цвет кожи\" = 'белый'";
                }
                else if(all_indexes[i] == 2)
                {
                    sql_query_command += "\"Цвет кожи\" = 'не белый'";
                }
                first_one = 0;
                break;
            case 3:
                if (all_indexes[i] == 1)
                {
                    sql_query_command += "\"Цвет волос\" = 'брюнет'";
                }
                else if(all_indexes[i] == 2)
                {
                    sql_query_command += "\"Цвет волос\" = 'светлый'";
                }
                else if(all_indexes[i] == 3)
                {
                    sql_query_command += "\"Цвет волос\" = 'особеный'";
                }
                first_one = 0;
                break;
            case 4:
                if (all_indexes[i] == 1)
                {
                    sql_query_command += "\"Основная рука\" = 'правая'";
                }
                else if(all_indexes[i] == 2)
                {
                    sql_query_command += "\"Основная рука\" = 'левая'";
                }
                first_one = 0;
                break;
            case 5:
                if (all_indexes[i] == 1)
                {
                    sql_query_command += "\"Дата преступления\" = '20.11.2000'";
                }
                else if(all_indexes[i] == 2)
                {
                    sql_query_command += "\"Дата преступления\" = '11.05.1999'";
                }
                else if(all_indexes[i] == 3)
                {
                    sql_query_command += "\"Дата преступления\" = '05.06.2023'";
                }
                first_one = 0;
                break;
            case 6:
                if (all_indexes[i] == 1)
                {
                    sql_query_command += "\"Дом преступления\" = '20'";
                }
                else if(all_indexes[i] == 2)
                {
                    sql_query_command += "\"Дом преступления\" = '36'";
                }
                else if(all_indexes[i] == 3)
                {
                    sql_query_command += "\"Дом преступления\" = '4'";
                }
                first_one = 0;
                break;
            case 7:
                if (all_indexes[i] == 1)
                {
                    sql_query_command += "\"Улица преступления\" = 'Лопаткина'";
                }
                else if(all_indexes[i] == 2)
                {
                    sql_query_command += "\"Улица преступления\" = 'Чершина'";
                }
                else if(all_indexes[i] == 3)
                {
                    sql_query_command += "\"Улица преступления\" = 'Сивкова'";
                }
                first_one = 0;
                break;
            case 8:
                if (all_indexes[i] == 1)
                {
                    sql_query_command += "\"Город преступления\" = 'Пермь'";
                }
                else if(all_indexes[i] == 2)
                {
                    sql_query_command += "\"Город преступления\" = 'Москва'";
                }
                else if(all_indexes[i] == 3)
                {
                    sql_query_command += "\"Город преступления\" = 'Ростов'";
                }
                first_one = 0;
                break;
            case 9:
                if (all_indexes[i] == 1)
                {
                    sql_query_command += "\"Тип преступления\" = 'Убийство'";
                }
                else if(all_indexes[i] == 2)
                {
                    sql_query_command += "\"Тип преступления\" = 'Вымогательство'";
                }
                else if(all_indexes[i] == 2)
                {
                    sql_query_command += "\"Тип преступления\" = 'Потусторонее'";
                }
                first_one = 0;
                break;
            }
        }

        //first_one = 0;
    }
    qDebug() << sql_query_command;

    QSqlQuery query;
    query.prepare(sql_query_command);
    temp = 0;
    if (query.exec())
    {


        //qDebug() << query.seek(0);
//        if (query.seek(2))
//        {
//        qDebug() << query.value(1).toString();
//        }
        while (query.next())
        {
          //qDebug() << query.value(1).toString();
          temp ++;
//            ui->Full_Name->setText(query.value(1).toString());
//            qDebug() << query.value(1).toString();
//            //DATA.push_back(query); // в DATA должны быть указатели
//            //qDebug() << query.value(1).toString();
//            //qDebug() <<DATA.front().value(2).toString();
        }
        //qDebug() <<DATA.front().value(2).toString();
    }
    if (temp == 0)
    {
        ui->Not_Exist->setText("НЕТ СОВПАДЕНИЙ");
        ui->person_navigate_right->setEnabled(0);
        ui->person_navigate_left->setEnabled(0);

        ui->person_index->setText("(0/0)");
    }
    else
    {
        ui->Not_Exist->setText("");
        ui->person_navigate_right->setEnabled(1);
        ui->person_navigate_left->setEnabled(1);

        ui->person_index->setText(QString("(%1/%2)").arg(1).arg(temp));
    }

    if (query.seek(0))
        {
        ui->Full_Name->setText(query.value(2).toString() + " " + query.value(1).toString() + " " + query.value(3).toString());
        ui->Full_Address->setText("ул. " + query.value(5).toString() + ", д. " + query.value(4).toString() + ", г. " + query.value(6).toString());
        ui->Crime_Location->setText("ул. " + query.value(15).toString() + ", д. " + query.value(14).toString() + ", г. " + query.value(16).toString() + " дата. " + query.value(13).toString());
        ui->Crime_Type->setText(query.value(17).toString());

        ui->person_portret->setStyleSheet(QString("image: url(./image/profile/%1.png)").arg(query.value(0).toString()));

        ui->Person_File->setText(query.value(7).toString());
        //ui->person_portret->setStyleSheet(("image: url(:./image/profile/%1.png)").arg(1));

        pers_index = query.value(0).toString();
        qDebug() << pers_index;
        //qDebug() << query.value(1).toString() << query.value(2).toString() << query.value(3).toString();
        }
    //qDebug() << temp;
//    for (int i = 0; i < temp; i++)
//    {
//        if (query.seek(i))
//            {
//            qDebug() << query.value(1).toString() << query.value(2).toString() << query.value(3).toString();
//            }
//    }
    //ui->person_navigate_right->setEnabled(1);
    //ui->person_navigate_left->setEnabled(1);
}

//QString MainWindow::Dossier_Installer(QString first_tabl_index)
//{

//    switch (first_tabl_index.toInt())
//    {
//    case 1:
//        return "Он не мыл свой нож со дня покупки";
//    case 2:
//        return "Она метает свой пистолет в жертв, чтобы сымитировать удар тупым предметом";
//    case 3:
//        return "Она покрасила волосы в синий, когда упала в чан с концентрированной морской водой";
//    case 4:
//        return "Он самый четкий парень на районе";
//    case 5:
//        return "Никто никогда не попросит у него листочек и ручку";
//    case 6:
//        return "Его метод убийства - засунуть ствол поглубже и выстрелить";
//    case 7:
//        return "Просто клоунесса. Но намного опаснее";
//    case 8:
//        return "Она заедает горе откусанными ушами";
//    case 9:
//        return "Не стрижется, так как думает, что в его волосах скрывается сила";
//    case 10:
//        return "Он съел всех детей";
//    }
//    return "0";
//}

void MainWindow::on_comboBox_sex_currentIndexChanged(int)
{
    this->index = ui->comboBox_sex->currentIndex();
    all_indexes[0] = index;
    //sex_filter();
}


void MainWindow::on_comboBox_scars_currentIndexChanged(int)
{
    this->index = ui->comboBox_scars->currentIndex();
    all_indexes[1] = index;
}


void MainWindow::on_comboBox_skin_color_currentIndexChanged(int)
{
    this->index = ui->comboBox_skin_color->currentIndex();
    all_indexes[2] = index;
}


void MainWindow::on_comboBox_hair_color_currentIndexChanged(int)
{
    this->index = ui->comboBox_hair_color->currentIndex();
    all_indexes[3] = index;
}


void MainWindow::on_comboBox_main_hand_currentIndexChanged(int)
{
    this->index = ui->comboBox_main_hand->currentIndex();
    all_indexes[4] = index;
}


void MainWindow::on_comboBox_crime_date_currentIndexChanged(int)
{
    this->index = ui->comboBox_crime_date->currentIndex();
    all_indexes[5] = index;
}


void MainWindow::on_comboBox_crime_house_currentIndexChanged(int)
{
    this->index = ui->comboBox_crime_house->currentIndex();
    all_indexes[6] = index;
}


void MainWindow::on_comboBox_crime_street_currentIndexChanged(int)
{
    this->index = ui->comboBox_crime_street->currentIndex();
    all_indexes[7] = index;
}


void MainWindow::on_comboBox_crime_city_currentIndexChanged(int)
{
    this->index = ui->comboBox_crime_city->currentIndex();
    all_indexes[8] = index;
}


void MainWindow::on_comboBox_crime_type_currentIndexChanged(int)
{
    this->index = ui->comboBox_crime_type->currentIndex();
    all_indexes[9] = index;
}


void MainWindow::on_person_navigate_right_clicked()
{
    //qDebug() << temp;
    count++;
    ui->person_index->setText(QString("(%1/%2)").arg(count % temp+1).arg(temp));
    count = count % temp;
    //if (new_temp != temp || count == temp) count = 0;
    //if (count == temp) count = 0;
    QSqlQuery query;
    query.prepare(sql_query_command);
    if (query.exec())
    {
        if (query.seek(count))
            {
            ui->Full_Name->setText(query.value(2).toString() + " " + query.value(1).toString() + " " + query.value(3).toString());
            ui->Full_Address->setText("ул. " + query.value(5).toString() + ", д. " + query.value(4).toString() + ", г. " + query.value(6).toString());
            ui->Crime_Location->setText("ул. " + query.value(15).toString() + ", д. " + query.value(14).toString() + ", г. " + query.value(16).toString() + " дата. " + query.value(13).toString());
            ui->Crime_Type->setText(query.value(17).toString());
            pers_index = query.value(0).toString();

            ui->person_portret->setStyleSheet(QString("image: url(./image/profile/%1.png)").arg(query.value(0).toString()));

            ui->Person_File->setText(query.value(7).toString());

            qDebug() << pers_index;
            //qDebug() << query.value(1).toString() << query.value(2).toString() << query.value(3).toString();
            }
    }

    new_temp = temp;
}


void MainWindow::on_person_navigate_left_clicked()
{
    if (count == 0) count = temp;
    count--;
    ui->person_index->setText(QString("(%1/%2)").arg(count % temp+1).arg(temp));
    //count = abs(count) % temp;
    QSqlQuery query;
    query.prepare(sql_query_command);
    if (query.exec())
    {
        if (query.seek(count))
            {
            ui->Full_Name->setText(query.value(2).toString() + " " + query.value(1).toString() + " " + query.value(3).toString());
            ui->Full_Address->setText("ул. " + query.value(5).toString() + ", д. " + query.value(4).toString() + ", г. " + query.value(6).toString());
            ui->Crime_Location->setText("ул. " + query.value(15).toString() + ", д. " + query.value(14).toString() + ", г. " + query.value(16).toString() + " дата. " + query.value(13).toString());
            ui->Crime_Type->setText(query.value(17).toString());
            pers_index = query.value(0).toString();

            ui->person_portret->setStyleSheet(QString("image: url(./image/profile/%1.png)").arg(query.value(0).toString()));

            ui->Person_File->setText(query.value(7).toString());

            qDebug() << pers_index;
            }
    }
}

