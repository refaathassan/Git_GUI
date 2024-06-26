#ifndef GITCOMMAND_H
#define GITCOMMAND_H

#include <QObject>
#include "database.h"
class GitCommand : public QObject
{
    Q_OBJECT
public:
    explicit GitCommand(QObject *parent = nullptr);

    void GitInit(QString Local_path);
    void GitSeTUserName(QString name,QString email);
    void GitAdd(QString Local_path);
    void GitPushAuto(QString repo, QString Local_path);
    void GitNewCommit(QString name,QString Local_path);
    void GitNewBranch(QString name, QString Local_path);
    void GitMergeBranch(QString name, QString Local_path);
    void GitPointToBranch(QString name, QString Local_path);
    void GitDeleteBranchLocally(QString name, QString Local_path);
    void GitDeleteBranchRemotly(QString name,QString Remot_name, QString Local_path);
    void GitAddRemote(QString name,QString Repo_path, QString Local_path);
    void GitClone(QString repo,QString Local_path);
    void GitPush( QString RemoteName,QString BranchName, QString Local_path);
    void GitPull( QString RemoteName,QString BranchName, QString Local_path);
    void GitFetch( QString RemoteName, QString Local_path);
    void GitShowStatus(QString Local_path);
    void GitShowLogs(QString Local_path);
    void GitShowRemote(QString Local_path);
    void GitShowRemoteHisto(QString Local_path);
    void GitShowBranches(QString Local_path);
    void GitShowConfig(QString Local_path);
    void GitEditUrl(QString name,QString url,QString Local_path);
    void GitRetrieveVersion(QString name,QString Hash, QString Local_path);



signals:
    void Status(QString state);
public slots:
    void processFinished(int exitCode, QProcess::ExitStatus exitStatus);
    void onReadyReadStandardOutput(void);
    void onReadyReadStandardError(void);
    void emitWarning(void);
private:
    QProcess *process;
    DataBase* base;
};

#endif // GITCOMMAND_H
