#ifndef DATABASE_H
#define DATABASE_H

#include <QApplication>
#include <QObject>
#include <QDir>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QVector>
#include <QString>
#include <QProcess>
#include <QTimer>

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = nullptr);
    bool check_email(QString path);
    void Write_Config(QString username,QString useremail);
signals:
private:
    QString path;
};

#endif // DATABASE_H
