#include "text_legend.h"
#include "ui_text_legend.h"

Text_Legend::Text_Legend(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Text_Legend)
{
    ui->setupUi(this);

    ui->Legend_label->hide();
    ui->description_1->hide();
    ui->description_2->hide();
    ui->description_3->hide();
    ui->description_4->hide();
    ui->description_5->hide();
    ui->restart_Button->hide();

    QPixmap bkgnd("./image/legend_backgr.png");
    bkgnd = bkgnd.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette p = palette();
    p.setBrush(QPalette::Background, bkgnd);
    setPalette(p);

}

//Мне нужно сгенерировать число и на его основе написать свойства
//Нужно отправить это сгенеренное число в другое окно

//В 5-ый лейбл добавлять запись из досье
//Досье нужно все таки реализовать

Text_Legend::~Text_Legend()
{
    delete ui;
}

void Text_Legend::on_Start_Button_clicked()
{
    ui->Start_Button->hide();
    ui->Legend_label->show();
    ui->description_1->show();
    ui->description_2->show();
    ui->description_3->show();
    ui->description_4->show();
    ui->description_5->show();
    ui->restart_Button->show();

    random_int = 1 + qrand() % 10;

    emit signal(random_int);

    //qDebug() << data_1;

    ui->description_1->setText(Water_Bucket(data_1,data_1_index));
    ui->description_2->setText(Water_Bucket(data_2,data_2_index));
    ui->description_3->setText(Water_Bucket(data_3,data_3_index));
    ui->description_4->setText(Water_Bucket(data_4,data_4_index));
    ui->description_5->setText(Water_Bucket_for_dossier(data_5));

    //qDebug() << random_int;
}

QString Text_Legend::Water_Bucket(QString temp_data, int int_data)
{
    switch (int_data)
    {
    case 8: //*Пол
    {
        if (temp_data == "мужской")
        {
            return "Преступником выступал <font color='yellow'>мужчина</font>.";
        }
        else if (temp_data == "женский")
        {
            return "Преступником была <font color='yellow'>женщина</font>.";
        }
    }
    case 9: //*Шрамы
    {
        if (temp_data == "есть")
        {
            return "Очевидцы говорили что-то о том, что у преступника был <font color='yellow'>один или несколько шрамов</font>.";
        }
        else if (temp_data == "нету")
        {
            return "С места преступления доложили, что скорее всего у преступника была гладкая кожа <font color='yellow'>без намека на шрамы</font>.";
        }
    }
    case 10: //*Цвет кожи
    {
        if (temp_data == "белый")
        {
            return "Экстрасенсы дали показания, что это был кто-то <font color='yellow'>белый</font>.";
        }
        else if (temp_data == "не белый")
        {
            return "Эстрасенсы увидели в своем сознании что-то <font color='yellow'>черное</font>, может это цвет кожи.";
        }
    }
    case 11: //*Цвет волос
    {
        if (temp_data == "брюнет")
        {
            return "Местный парихмахер говорил, что в районе ошиваются только <font color='yellow'>брюнеты</font>.";
        }
        else if (temp_data == "светлый")
        {
            return "Была найдена пачка <font color='yellow'>светлых волос</font>. Они не похожи на волосы с парика.";
        }
        else if (temp_data == "особеный")
        {
            return "На месте преступления было сложно разобрать цвет волос, но то что они <font color='yellow'>особенного</font> цвета - это точно.";
        }
    }
    case 12: //*Основная рука
    {
        if (temp_data == "правая")
        {
            return "По всем видимым данным можно заключить, что виновник был <font color='yellow'>правшой</font>.";
        }
        else if (temp_data == "левая")
        {
            return "Коммисия пришла к выводу, что преступление было совершено <font color='yellow'>левой рукой</font>.";
        }
    }
    case 13: //*Дата преступления
    {
        if (temp_data == "20.11.2000")
        {
            return "Таинственная записка указала на год преступления - нужно <font color='yellow'>сложить цифры</font> и получить 2.2.2...";
        }
        else if (temp_data == "11.05.1999")
        {
            return "По показаниям одного из свидетелей, все случилось в дату <font color='yellow'>11.05.1999</font>.";
        }
        else if (temp_data == "05.06.2023")
        {
            return "Преступление произошло <font color='yellow'>совсем недавно</font>. Может даже в будущем.";
        }
    }
    case 14: //*Дом преступления
    {
        if (temp_data == "20")
        {
            return "Дом преступления взял свой <font color='yellow'>второй десяток</font>.";
        }
        else if (temp_data == "36")
        {
            return "Дом преступления это <font color='yellow'>окружность</font>, поделенная на 10.";
        }
        else if (temp_data == "4")
        {
            return "Разгадать номер нужного дома, это как <font color='yellow'>дважды два</font>.";
        }
    }
    case 15: //*Улица преступления
    {
        if (temp_data == "Лопаткина")
        {
            return "Улица преступления обозначена как <font color='yellow'>Лопаткина</font>.";
        }
        else if (temp_data == "Чершина")
        {
            return "Если следовать записке из под двери, то нужная улица <font color='yellow'>Чершина</font>.";
        }
        else if (temp_data == "Сивкова")
        {
            return "<font color='yellow'>Сивкова</font>, вот что сказал тот бандит, когда его спросили, какая там улица.";
        }
    }
    case 16: //*Город преступления
    {
        if (temp_data == "Пермь")
        {
            return "Как и любое другое жестокое преступление, это было совершенно в <font color='yellow'>Перми</font>.";
        }
        else if (temp_data == "Москва")
        {
            return "Город преступления прославился своей алчностью - <font color='yellow'>Москва</font>.";
        }
        else if (temp_data == "Ростов")
        {
            return "Не думал, что в таком городе как <font color='yellow'>Ростов</font>, может произойти такое - Сказал мне очевидец.";
        }
    }
    case 17: //*Тип преступления
    {
        if (temp_data == "Убийство")
        {
            return "Это было самое зверское <font color='yellow'>убийство</font>, которое я когда либо видел.";
        }
        else if (temp_data == "Вымогательство")
        {
            return "У этого человека не было совести. Он занимался <font color='yellow'>вымогательством</font>.";
        }
        else if (temp_data == "Потусторонее")
        {
            return "Мне сложно понять, что это было за преступление. Что-то <font color='yellow'>потусторонее</font>...";
        }
    }
    default: return temp_data;
    }
}

QString Text_Legend::Water_Bucket_for_dossier(QString temp_data)
{
    if (temp_data == "Он не мыл свой нож со дня покупки")
    {
        return "На ранах жертвы были обнаружены следы жира и чужой засохшей крови";
    }
    else if (temp_data == "Она метает свой пистолет в жертв, чтобы сымитировать удар тупым предметом")
    {
        return "Убийство выглядело так, буд то жертву ударили чем-то тупым";
    }
    else if (temp_data == "Она покрасила волосы в синий, когда упала в чан с концентрированной морской водой")
    {
        return "На месте преступления пахло бризом";
    }
    else if (temp_data == "Он самый четкий парень на районе, так как торгует дурью, замаскированную под перхоть")
    {
        return "На месте смерти был рассыпан наркотик";
    }
    else if (temp_data == "Никто никогда не попросит у него листочек и ручку")
    {
        return "На месте преступления была оставленна записка, очень хорошо составленная";
    }
    else if (temp_data == "Его метод убийства - засунуть ствол поглубже и выстрелить")
    {
        return "Комната с трупом была окрашена в красный";
    }
    else if (temp_data == "Просто клоунесса. Постоянно просит что-то подписать")
    {
        return "Очевидцы говорили, что рядом с тем местом происходили какие-то подозрительные соц. опросы";
    }
    else if (temp_data == "Она заедает горе откусанными ушами")
    {
        return "В холодильнике жертвы лежало ее оторванное пожеванное ухо";
    }
    else if (temp_data == "Не стрижется, так как думает, что в его волосах скрывается древняя сила")
    {
        return "Люди говорят, что видели волосатого зверя";
    }
    else if (temp_data == "Он съел всех детей")
    {
        return "Тело жертвы было почти полностью съедено. Также, кое-где были обнаружены разводы от слез";
    }
}

void Text_Legend::on_restart_Button_clicked()
{
      on_Start_Button_clicked();
//    ui->Legend_label->hide();
//    ui->description_1->hide();
//    ui->description_2->hide();
//    ui->description_3->hide();
//    ui->description_4->hide();
//    ui->description_5->hide();
//    ui->restart_Button->hide();

//    ui->Start_Button->show();

}

