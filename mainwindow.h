#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gitcommand.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_PbConfig_clicked();
    void on_PbExexute_clicked();

    void on_PbShowStatus_clicked();

    void on_PbShowLogs_clicked();

    void on_PbShowRemote_clicked();

    void on_PbShowConfig_clicked();

    void on_PbShowBranches_clicked();

    void on_PbInite_clicked();

    void on_PbConfig_2_clicked();

    void on_PbAddRemote_clicked();

    void on_PbEdiUrl_clicked();

    void on_PbPush_clicked();

    void on_PbPull_clicked();

    void on_PbFetch_clicked();

    void on_PbCreateCommit_clicked();

    void on_PbRetieveCommit_clicked();

    void on_PbCreateBranch_clicked();

    void on_PbGoToBranch_clicked();

    void on_PbDeleteLocally_clicked();

    void on_PbDeleteRemotly_clicked();

    void on_PbMerge_clicked();

    void on_PbClone_clicked();

    void on_PbShowRemoteHistory_clicked();

public slots:
    void Response(QString state);
    void onTabChanged(int index) ;
private:
    Ui::MainWindow *ui;
    GitCommand* git;
    QString tabName;
};
#endif // MAINWINDOW_H
