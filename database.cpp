#include "database.h"

DataBase::DataBase(QObject *parent)
    : QObject{parent}
{}

bool DataBase::check_email(QString path)
{
    bool flag=false;
    this->path=path;
    QFile file(path);
    if(file.open(QIODevice::ReadWrite|QIODevice::Text))
    {
        QByteArray Barray=file.readAll();
        QJsonDocument Jdocument=QJsonDocument::fromJson(Barray);
        QJsonObject js=Jdocument.object();
        if(js["user.name"]!="none"&&js["user.email"]!="none")
        {
           flag=true;
        }
        file.close();
    }
    else
    {
        qDebug()<<" i can not oppen this file"<<Qt::endl;
    }
    return flag;
}

void DataBase::Write_Config(QString username, QString useremail)
{
    QJsonObject newobj;
    newobj["user.name"]=username;
    newobj["user.email"]=useremail;

    QFile file(path);
    if(file.open(QIODevice::ReadWrite|QIODevice::Text))
    {
        file.write(QJsonDocument(newobj).toJson());
    }
}
