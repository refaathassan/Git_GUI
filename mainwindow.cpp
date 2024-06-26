#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    tabName="Basic";
    ui->setupUi(this);
    git=new GitCommand;
    connect(git,&GitCommand::Status,this,&MainWindow::Response);
    connect(ui->TW, &QTabWidget::currentChanged, this, &MainWindow::onTabChanged);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::onTabChanged(int index) {
    tabName = ui->TW->tabText(index);

}

void MainWindow::on_PbConfig_clicked()
{
    git->GitSeTUserName(ui->LeName->text(),ui->LeEmail->text());

}



void MainWindow::on_PbExexute_clicked()
{
    if(ui->CbCP->currentText()=="clone")
    {
        git->GitClone(ui->LeRepoPath->text(),ui->LeLocalPath->text());
    }
    else if(ui->CbCP->currentText()=="push")
    {
        git->GitPushAuto(ui->LeRepoPath->text(),ui->LeLocalPath->text());
    }
}

void MainWindow::on_PbShowStatus_clicked()
{
    git->GitShowStatus(ui->LeLocalPath_2->text());
}

void MainWindow::on_PbShowLogs_clicked()
{
    git->GitShowLogs(ui->LeLocalPath_2->text());
}

void MainWindow::on_PbShowRemote_clicked()
{
    git->GitShowRemote(ui->LeLocalPath_2->text());
}

void MainWindow::on_PbShowConfig_clicked()
{
    git->GitShowConfig(ui->LeLocalPath_2->text());
}

void MainWindow::on_PbShowBranches_clicked()
{
    git->GitShowBranches(ui->LeLocalPath_2->text());
}

void MainWindow::Response(QString state)
{
    if(tabName=="Basic")
            ui->LwResponse->addItem(state);
    else if(tabName=="Profesional")
          ui->LwResponse_2->addItem(state);
}


void MainWindow::on_PbInite_clicked()
{
    git->GitClone(ui->LeRepoPath_2->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbConfig_2_clicked()
{
    git->GitSeTUserName(ui->LeUsername2->text(),ui->LeUserenail2->text());
}


void MainWindow::on_PbAddRemote_clicked()
{
    git->GitAddRemote(ui->LeRemoteAliasName->text(),ui->LeRemoteUrl->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbEdiUrl_clicked()
{
    git->GitEditUrl(ui->LeRemoteAliasName->text(),ui->LeRemoteUrl->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbPush_clicked()
{
    git->GitPush(ui->LePPFRemoteName->text(),ui->LePPFBranchName->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbPull_clicked()
{
    git->GitPull(ui->LePPFRemoteName->text(),ui->LePPFBranchName->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbFetch_clicked()
{
    git->GitFetch(ui->LeFRemoteName->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbCreateCommit_clicked()
{
    git->GitAdd(ui->LeLocalPath_2->text());
    git->GitNewCommit(ui->LeNewCommit->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbRetieveCommit_clicked()
{
    git->GitRetrieveVersion(ui->LeRetrieveNewName->text(),ui->LeRetrieveHash->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbCreateBranch_clicked()
{
    git->GitNewBranch(ui->LeNewBranch->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbGoToBranch_clicked()
{
    git->GitPointToBranch(ui->LeNewBranch->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbDeleteLocally_clicked()
{
    git->GitDeleteBranchLocally(ui->LeNewBranch->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbDeleteRemotly_clicked()
{
    git->GitDeleteBranchRemotly(ui->LeDeletBranchname->text(),ui->LeDeleteBranchRemote->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbMerge_clicked()
{
    git->GitMergeBranch(ui->LeNewBranch->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbClone_clicked()
{
    git->GitClone(ui->LeRepoPath_2->text(),ui->LeLocalPath_2->text());
}


void MainWindow::on_PbShowRemoteHistory_clicked()
{
    git->GitShowRemoteHisto(ui->LeLocalPath_2->text());
}

