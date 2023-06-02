#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//#include <list>
#include <QList>

#include <QMainWindow>
#include <text_legend.h>

#include <QSqlDatabase>
#include <QtDebug>
#include <QSqlQuery>
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Database_Edit_triggered();

    void on_Exit_triggered();

    void on_target_button_clicked();

    void on_comboBox_sex_currentIndexChanged(int index);

    void on_Filter_Button_clicked();

    void on_comboBox_scars_currentIndexChanged(int index);

    void on_comboBox_skin_color_currentIndexChanged(int index);

    void on_comboBox_hair_color_currentIndexChanged(int index);

    void on_comboBox_main_hand_currentIndexChanged(int index);

    void on_comboBox_crime_date_currentIndexChanged(int index);

    void on_comboBox_crime_house_currentIndexChanged(int index);

    void on_comboBox_crime_street_currentIndexChanged(int index);

    void on_comboBox_crime_city_currentIndexChanged(int index);

    void on_comboBox_crime_type_currentIndexChanged(int index);

    void on_person_navigate_right_clicked();

    void on_person_navigate_left_clicked();

    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;

    int index;
    int temp;
    int new_temp;
    int count = 0;

    QString pers_index = "_";
    QString second_window_rand;

    std::list<QSqlQuery> DATA;
    int all_indexes[10] = {};

    QString sql_query_command;

    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;

    Text_Legend * window_legend;

    QString Dossier_Installer(QString);

    void sex_filter();

public slots:
    void slot(int random_int);

};
#endif // MAINWINDOW_H
