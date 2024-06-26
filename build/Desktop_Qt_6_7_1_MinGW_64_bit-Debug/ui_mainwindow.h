/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *TW;
    QWidget *tab;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *LeName;
    QLineEdit *LeEmail;
    QPushButton *PbConfig;
    QLineEdit *LeRepoPath;
    QPushButton *PbExexute;
    QLabel *label_5;
    QListWidget *LwResponse;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *CbCP;
    QPushButton *PbExexute_2;
    QLabel *label_8;
    QLineEdit *LeLocalPath;
    QWidget *widget;
    QListWidget *LwResponse_2;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *LeLocalPath_2;
    QPushButton *PbCreateBranch;
    QLabel *label_12;
    QLineEdit *LeRepoPath_2;
    QLabel *label_20;
    QLineEdit *LeNewBranch;
    QLabel *label_22;
    QPushButton *PbGoToBranch;
    QLineEdit *LeNewCommit;
    QPushButton *PbCreateCommit;
    QPushButton *PbInite;
    QPushButton *PbShowLogs;
    QPushButton *PbRetieveCommit;
    QLabel *label_23;
    QLineEdit *LeRetrieveNewName;
    QPushButton *PbDeleteLocally;
    QPushButton *PbAddRemote;
    QLabel *label_34;
    QLineEdit *LeRemoteUrl;
    QPushButton *PbConfig_2;
    QLineEdit *LeUserenail2;
    QLabel *label_35;
    QLineEdit *LeUsername2;
    QLabel *label_36;
    QLabel *label_37;
    QLineEdit *LeRemoteAliasName;
    QPushButton *PbEdiUrl;
    QLabel *label_38;
    QLineEdit *LePPFBranchName;
    QPushButton *PbPush;
    QLabel *label_39;
    QLineEdit *LePPFRemoteName;
    QPushButton *PbPull;
    QLabel *label_76;
    QLineEdit *LeRetrieveHash;
    QPushButton *PbMerge;
    QPushButton *PbDeleteRemotly;
    QPushButton *PbShowRemote;
    QPushButton *PbShowConfig;
    QPushButton *PbFetch;
    QPushButton *PbShowStatus;
    QPushButton *PbShowBranches;
    QPushButton *PbClone;
    QPushButton *PbExexute_3;
    QPushButton *PbShowRemoteHistory;
    QLineEdit *LeFRemoteName;
    QLabel *label_40;
    QLabel *label_21;
    QLineEdit *LeDeletBranchname;
    QLineEdit *LeDeleteBranchRemote;
    QLabel *label_24;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1057, 692);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        TW = new QTabWidget(centralwidget);
        TW->setObjectName("TW");
        TW->setGeometry(QRect(10, 0, 1041, 651));
        tab = new QWidget();
        tab->setObjectName("tab");
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(460, 450, 141, 31));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(460, 500, 141, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LeName = new QLineEdit(tab);
        LeName->setObjectName("LeName");
        LeName->setGeometry(QRect(610, 450, 231, 31));
        LeName->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        LeEmail = new QLineEdit(tab);
        LeEmail->setObjectName("LeEmail");
        LeEmail->setGeometry(QRect(610, 500, 231, 31));
        LeEmail->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        PbConfig = new QPushButton(tab);
        PbConfig->setObjectName("PbConfig");
        PbConfig->setGeometry(QRect(460, 540, 381, 31));
        PbConfig->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        LeRepoPath = new QLineEdit(tab);
        LeRepoPath->setObjectName("LeRepoPath");
        LeRepoPath->setGeometry(QRect(150, 470, 241, 31));
        LeRepoPath->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        PbExexute = new QPushButton(tab);
        PbExexute->setObjectName("PbExexute");
        PbExexute->setGeometry(QRect(0, 550, 391, 31));
        PbExexute->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 470, 141, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LwResponse = new QListWidget(tab);
        LwResponse->setObjectName("LwResponse");
        LwResponse->setGeometry(QRect(170, 20, 361, 361));
        LwResponse->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 510, 141, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 30, 151, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        CbCP = new QComboBox(tab);
        CbCP->addItem(QString());
        CbCP->addItem(QString());
        CbCP->setObjectName("CbCP");
        CbCP->setGeometry(QRect(150, 510, 91, 31));
        CbCP->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        PbExexute_2 = new QPushButton(tab);
        PbExexute_2->setObjectName("PbExexute_2");
        PbExexute_2->setGeometry(QRect(280, 590, 201, 31));
        PbExexute_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 420, 141, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LeLocalPath = new QLineEdit(tab);
        LeLocalPath->setObjectName("LeLocalPath");
        LeLocalPath->setGeometry(QRect(150, 420, 241, 31));
        LeLocalPath->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        TW->addTab(tab, QString());
        widget = new QWidget();
        widget->setObjectName("widget");
        LwResponse_2 = new QListWidget(widget);
        LwResponse_2->setObjectName("LwResponse_2");
        LwResponse_2->setGeometry(QRect(0, 20, 321, 591));
        LwResponse_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 0, 321, 21));
        label_9->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(340, 0, 111, 21));
        label_10->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LeLocalPath_2 = new QLineEdit(widget);
        LeLocalPath_2->setObjectName("LeLocalPath_2");
        LeLocalPath_2->setGeometry(QRect(460, 0, 211, 21));
        LeLocalPath_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbCreateBranch = new QPushButton(widget);
        PbCreateBranch->setObjectName("PbCreateBranch");
        PbCreateBranch->setGeometry(QRect(710, 40, 321, 21));
        PbCreateBranch->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(340, 30, 111, 21));
        label_12->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LeRepoPath_2 = new QLineEdit(widget);
        LeRepoPath_2->setObjectName("LeRepoPath_2");
        LeRepoPath_2->setGeometry(QRect(460, 30, 211, 21));
        LeRepoPath_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_20 = new QLabel(widget);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(710, 10, 101, 21));
        label_20->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LeNewBranch = new QLineEdit(widget);
        LeNewBranch->setObjectName("LeNewBranch");
        LeNewBranch->setGeometry(QRect(820, 10, 211, 21));
        LeNewBranch->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_22 = new QLabel(widget);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(710, 500, 101, 21));
        label_22->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        PbGoToBranch = new QPushButton(widget);
        PbGoToBranch->setObjectName("PbGoToBranch");
        PbGoToBranch->setGeometry(QRect(710, 60, 321, 21));
        PbGoToBranch->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        LeNewCommit = new QLineEdit(widget);
        LeNewCommit->setObjectName("LeNewCommit");
        LeNewCommit->setGeometry(QRect(820, 500, 211, 21));
        LeNewCommit->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbCreateCommit = new QPushButton(widget);
        PbCreateCommit->setObjectName("PbCreateCommit");
        PbCreateCommit->setGeometry(QRect(710, 530, 321, 21));
        PbCreateCommit->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbInite = new QPushButton(widget);
        PbInite->setObjectName("PbInite");
        PbInite->setGeometry(QRect(340, 60, 331, 21));
        PbInite->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbShowLogs = new QPushButton(widget);
        PbShowLogs->setObjectName("PbShowLogs");
        PbShowLogs->setGeometry(QRect(340, 500, 321, 21));
        PbShowLogs->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbRetieveCommit = new QPushButton(widget);
        PbRetieveCommit->setObjectName("PbRetieveCommit");
        PbRetieveCommit->setGeometry(QRect(710, 460, 321, 21));
        PbRetieveCommit->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_23 = new QLabel(widget);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(710, 430, 101, 21));
        label_23->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LeRetrieveNewName = new QLineEdit(widget);
        LeRetrieveNewName->setObjectName("LeRetrieveNewName");
        LeRetrieveNewName->setGeometry(QRect(820, 430, 211, 21));
        LeRetrieveNewName->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbDeleteLocally = new QPushButton(widget);
        PbDeleteLocally->setObjectName("PbDeleteLocally");
        PbDeleteLocally->setGeometry(QRect(710, 80, 321, 21));
        PbDeleteLocally->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbAddRemote = new QPushButton(widget);
        PbAddRemote->setObjectName("PbAddRemote");
        PbAddRemote->setGeometry(QRect(340, 190, 331, 21));
        PbAddRemote->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_34 = new QLabel(widget);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(340, 130, 111, 21));
        label_34->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LeRemoteUrl = new QLineEdit(widget);
        LeRemoteUrl->setObjectName("LeRemoteUrl");
        LeRemoteUrl->setGeometry(QRect(460, 130, 211, 21));
        LeRemoteUrl->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbConfig_2 = new QPushButton(widget);
        PbConfig_2->setObjectName("PbConfig_2");
        PbConfig_2->setGeometry(QRect(710, 360, 321, 21));
        PbConfig_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        LeUserenail2 = new QLineEdit(widget);
        LeUserenail2->setObjectName("LeUserenail2");
        LeUserenail2->setGeometry(QRect(820, 330, 211, 21));
        LeUserenail2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_35 = new QLabel(widget);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(710, 330, 101, 21));
        label_35->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LeUsername2 = new QLineEdit(widget);
        LeUsername2->setObjectName("LeUsername2");
        LeUsername2->setGeometry(QRect(820, 300, 211, 21));
        LeUsername2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_36 = new QLabel(widget);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(710, 300, 101, 21));
        label_36->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        label_37 = new QLabel(widget);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(340, 160, 111, 21));
        label_37->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LeRemoteAliasName = new QLineEdit(widget);
        LeRemoteAliasName->setObjectName("LeRemoteAliasName");
        LeRemoteAliasName->setGeometry(QRect(460, 160, 211, 21));
        LeRemoteAliasName->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbEdiUrl = new QPushButton(widget);
        PbEdiUrl->setObjectName("PbEdiUrl");
        PbEdiUrl->setGeometry(QRect(340, 210, 331, 21));
        PbEdiUrl->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_38 = new QLabel(widget);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(340, 270, 111, 21));
        label_38->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LePPFBranchName = new QLineEdit(widget);
        LePPFBranchName->setObjectName("LePPFBranchName");
        LePPFBranchName->setGeometry(QRect(460, 270, 211, 21));
        LePPFBranchName->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbPush = new QPushButton(widget);
        PbPush->setObjectName("PbPush");
        PbPush->setGeometry(QRect(340, 330, 331, 21));
        PbPush->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_39 = new QLabel(widget);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(340, 300, 111, 21));
        label_39->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LePPFRemoteName = new QLineEdit(widget);
        LePPFRemoteName->setObjectName("LePPFRemoteName");
        LePPFRemoteName->setGeometry(QRect(460, 300, 211, 21));
        LePPFRemoteName->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbPull = new QPushButton(widget);
        PbPull->setObjectName("PbPull");
        PbPull->setGeometry(QRect(340, 350, 331, 21));
        PbPull->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_76 = new QLabel(widget);
        label_76->setObjectName("label_76");
        label_76->setGeometry(QRect(710, 400, 101, 21));
        label_76->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LeRetrieveHash = new QLineEdit(widget);
        LeRetrieveHash->setObjectName("LeRetrieveHash");
        LeRetrieveHash->setGeometry(QRect(820, 400, 211, 21));
        LeRetrieveHash->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbMerge = new QPushButton(widget);
        PbMerge->setObjectName("PbMerge");
        PbMerge->setGeometry(QRect(710, 100, 321, 21));
        PbMerge->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbDeleteRemotly = new QPushButton(widget);
        PbDeleteRemotly->setObjectName("PbDeleteRemotly");
        PbDeleteRemotly->setGeometry(QRect(710, 240, 321, 21));
        PbDeleteRemotly->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbShowRemote = new QPushButton(widget);
        PbShowRemote->setObjectName("PbShowRemote");
        PbShowRemote->setGeometry(QRect(340, 520, 321, 21));
        PbShowRemote->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbShowConfig = new QPushButton(widget);
        PbShowConfig->setObjectName("PbShowConfig");
        PbShowConfig->setGeometry(QRect(340, 560, 321, 21));
        PbShowConfig->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbFetch = new QPushButton(widget);
        PbFetch->setObjectName("PbFetch");
        PbFetch->setGeometry(QRect(710, 600, 321, 21));
        PbFetch->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbShowStatus = new QPushButton(widget);
        PbShowStatus->setObjectName("PbShowStatus");
        PbShowStatus->setGeometry(QRect(340, 480, 321, 21));
        PbShowStatus->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbShowBranches = new QPushButton(widget);
        PbShowBranches->setObjectName("PbShowBranches");
        PbShowBranches->setGeometry(QRect(340, 460, 321, 21));
        PbShowBranches->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbClone = new QPushButton(widget);
        PbClone->setObjectName("PbClone");
        PbClone->setGeometry(QRect(340, 80, 331, 21));
        PbClone->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbExexute_3 = new QPushButton(widget);
        PbExexute_3->setObjectName("PbExexute_3");
        PbExexute_3->setGeometry(QRect(340, 580, 321, 21));
        PbExexute_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        PbShowRemoteHistory = new QPushButton(widget);
        PbShowRemoteHistory->setObjectName("PbShowRemoteHistory");
        PbShowRemoteHistory->setGeometry(QRect(340, 540, 321, 21));
        PbShowRemoteHistory->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        LeFRemoteName = new QLineEdit(widget);
        LeFRemoteName->setObjectName("LeFRemoteName");
        LeFRemoteName->setGeometry(QRect(820, 570, 211, 21));
        LeFRemoteName->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_40 = new QLabel(widget);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(710, 570, 101, 21));
        label_40->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        label_21 = new QLabel(widget);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(710, 180, 101, 21));
        label_21->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        LeDeletBranchname = new QLineEdit(widget);
        LeDeletBranchname->setObjectName("LeDeletBranchname");
        LeDeletBranchname->setGeometry(QRect(820, 180, 211, 21));
        LeDeletBranchname->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        LeDeleteBranchRemote = new QLineEdit(widget);
        LeDeleteBranchRemote->setObjectName("LeDeleteBranchRemote");
        LeDeleteBranchRemote->setGeometry(QRect(820, 210, 211, 21));
        LeDeleteBranchRemote->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_24 = new QLabel(widget);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(710, 210, 101, 21));
        label_24->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.767, y2:0.784091, stop:0 rgba(0, 0, 0, 255), stop:0.670455 rgba(0, 26, 255, 255));"));
        TW->addTab(widget, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1057, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(PbExexute_2, &QPushButton::clicked, LeLocalPath, qOverload<>(&QLineEdit::clear));
        QObject::connect(PbExexute_2, &QPushButton::clicked, LeEmail, qOverload<>(&QLineEdit::clear));
        QObject::connect(PbExexute_2, &QPushButton::clicked, LeName, qOverload<>(&QLineEdit::clear));
        QObject::connect(PbExexute_2, &QPushButton::clicked, LeRepoPath, qOverload<>(&QLineEdit::clear));
        QObject::connect(PbExexute_2, &QPushButton::clicked, LwResponse, qOverload<>(&QListWidget::clear));
        QObject::connect(PbExexute_3, &QPushButton::clicked, LwResponse_2, qOverload<>(&QListWidget::clear));

        TW->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">user.name</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">user.email</p></body></html>", nullptr));
        PbConfig->setText(QCoreApplication::translate("MainWindow", "Config", nullptr));
        PbExexute->setText(QCoreApplication::translate("MainWindow", "Execute", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Repo Path</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">clone/push</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Response:</p></body></html>", nullptr));
        CbCP->setItemText(0, QCoreApplication::translate("MainWindow", "push", nullptr));
        CbCP->setItemText(1, QCoreApplication::translate("MainWindow", "clone", nullptr));

        PbExexute_2->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">local path</p></body></html>", nullptr));
        TW->setTabText(TW->indexOf(tab), QCoreApplication::translate("MainWindow", "Basic", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Response:</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">local path</span></p></body></html>", nullptr));
        PbCreateBranch->setText(QCoreApplication::translate("MainWindow", "Create Branch", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">repo</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">branch_name</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">commit_name</span></p></body></html>", nullptr));
        PbGoToBranch->setText(QCoreApplication::translate("MainWindow", "Point To Branch", nullptr));
        PbCreateCommit->setText(QCoreApplication::translate("MainWindow", "Create Commit", nullptr));
        PbInite->setText(QCoreApplication::translate("MainWindow", "Init ", nullptr));
        PbShowLogs->setText(QCoreApplication::translate("MainWindow", "Show Logs", nullptr));
        PbRetieveCommit->setText(QCoreApplication::translate("MainWindow", "Retrieve commit", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">new_name</span></p></body></html>", nullptr));
        PbDeleteLocally->setText(QCoreApplication::translate("MainWindow", "Delete Locally", nullptr));
        PbAddRemote->setText(QCoreApplication::translate("MainWindow", "Add Remote", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">remote_usl</span></p></body></html>", nullptr));
        PbConfig_2->setText(QCoreApplication::translate("MainWindow", "Config", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">user.email</span></p></body></html>", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">user.name</span></p></body></html>", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">alias_name</span></p></body></html>", nullptr));
        PbEdiUrl->setText(QCoreApplication::translate("MainWindow", "Edit Url", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">branch_name</span></p></body></html>", nullptr));
        PbPush->setText(QCoreApplication::translate("MainWindow", "Push", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Remote_name</span></p></body></html>", nullptr));
        PbPull->setText(QCoreApplication::translate("MainWindow", "Pull", nullptr));
        label_76->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">commit_Hash</span></p></body></html>", nullptr));
        PbMerge->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        PbDeleteRemotly->setText(QCoreApplication::translate("MainWindow", "Delete Remotely", nullptr));
        PbShowRemote->setText(QCoreApplication::translate("MainWindow", "Show Remote", nullptr));
        PbShowConfig->setText(QCoreApplication::translate("MainWindow", "Show Config", nullptr));
        PbFetch->setText(QCoreApplication::translate("MainWindow", "Fetch", nullptr));
        PbShowStatus->setText(QCoreApplication::translate("MainWindow", "Show Status", nullptr));
        PbShowBranches->setText(QCoreApplication::translate("MainWindow", "Show Branches", nullptr));
        PbClone->setText(QCoreApplication::translate("MainWindow", "Clone", nullptr));
        PbExexute_3->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        PbShowRemoteHistory->setText(QCoreApplication::translate("MainWindow", "Show Remote History", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Remote_name</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">branch_name</span></p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">branch_name</span></p></body></html>", nullptr));
        TW->setTabText(TW->indexOf(widget), QCoreApplication::translate("MainWindow", "Profesional", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
