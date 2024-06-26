#include "gitcommand.h"

GitCommand::GitCommand(QObject *parent)
    : QObject{parent}
{
    process = new QProcess(this);
    connect(process, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(processFinished(int, QProcess::ExitStatus)));
    connect(process,&QProcess::readyReadStandardOutput,this,&GitCommand::onReadyReadStandardOutput);
    connect(process,&QProcess::readyReadStandardError,this,&GitCommand::onReadyReadStandardError);
    base=new DataBase;
    QDir dir(QCoreApplication::applicationDirPath());
    QString filePath = dir.filePath("Base.json");
    bool flag=base->check_email(filePath);
    if(!flag)
    {
        QTimer::singleShot(1, this, &GitCommand::emitWarning);

    }
}

void GitCommand::GitInit( QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "init";
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git init command: " +process->errorString());
    }
}

void GitCommand::GitSeTUserName(QString name,QString email)
{
    QString command = "git";
    QStringList args1;
    args1 << "config" << "--global" << "user.name" <<name;
    QStringList args2;
    args2 << "config" << "--global" << "user.email" <<email;
    process->start(command,args1);
    if (!process->waitForFinished(-1))
    {
        emit Status( "Failed to execute git config command:\n" +process->errorString());
    }
    else
    {
        process->start(command,args2);
        if (!process->waitForFinished(-1))
        {
            emit Status("Failed to execute git config command:\n"+process->errorString());
        }
        else
        {
            base->Write_Config(name,email);

        }

    }

}
void GitCommand::processFinished(int exitCode, QProcess::ExitStatus exitStatus)
{
    emit Status(QString("exit code from QT:  %1\nexit code from Terminal :  %2").arg(exitStatus).arg(exitCode));
}

void GitCommand::GitAdd(QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "add"<<".";
    process->start("git",args1);

    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git config command: " +process->errorString());
    }
}

void GitCommand::GitPushAuto(QString repo, QString Local_path)
{
        process->setWorkingDirectory(Local_path);
        GitInit(Local_path);
        GitAdd(Local_path);
        GitNewCommit("first", Local_path);
        GitAddRemote("origin",repo,Local_path);
        GitPush("origin","master",Local_path);
}

void GitCommand::GitNewCommit(QString name, QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "commit"<<"-m"<<"\""+name+"\"";
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git create commit command: " +process->errorString());
    }

}

void GitCommand::GitNewBranch(QString name, QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "branch"<<name;
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git create commit command: " +process->errorString());
    }
}

void GitCommand::GitMergeBranch(QString name, QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "merge"<<name;
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git merge command: " +process->errorString());
    }
}

void GitCommand::GitPointToBranch(QString name, QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "checkout"<<name;
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git create commit command: " +process->errorString());
    }
}

void GitCommand::GitDeleteBranchLocally(QString name, QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "branch"<<"-D"<<name;
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git create commit command: " +process->errorString());
    }
}

void GitCommand::GitDeleteBranchRemotly(QString name, QString Remot_name, QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "push"<<Remot_name<<"--delete"<<name;
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git create commit command: " +process->errorString());
    }
}

void GitCommand::GitAddRemote(QString name,QString Repo_path, QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "remote"<<"add"<<name<<Repo_path;
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git AddRemote command: " +process->errorString());
    }
}

void GitCommand::GitClone(QString repo, QString Local_path)
{
        process->setWorkingDirectory(Local_path);
        QStringList args1;
        args1 << "clone" <<repo;
        process->start("git",args1);
        if (!process->waitForFinished(-1))
        {
           emit Status("Failed to execute git config command: \n" +process->errorString());
        }
}

void GitCommand::GitPush( QString RemoteName,QString BranchName,QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "push"<<RemoteName<<BranchName;
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git Push command:\n " +process->errorString());
    }
}

void GitCommand::GitPull(QString RemoteName, QString BranchName, QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "pull"<<RemoteName<<BranchName;
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git Pull command:\n " +process->errorString());
    }
}

void GitCommand::GitFetch(QString RemoteName, QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "fetch"<<RemoteName;
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git fetch command:\n " +process->errorString());
    }
}

void GitCommand::GitShowStatus(QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "status";
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git status command:\n " +process->errorString());
    }
}

void GitCommand::GitShowLogs(QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "log";
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git log command:\n " +process->errorString());
    }

}

void GitCommand::GitShowRemote(QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "remote";
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git log command:\n " +process->errorString());
    }

}

void GitCommand::GitShowRemoteHisto(QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "remote"<<"-v";
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git log command:\n " +process->errorString());
    }
}

void GitCommand::GitShowBranches(QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "branch";
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git log command:\n " +process->errorString());
    }
}

void GitCommand::GitShowConfig(QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "config"<<"--list";
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute git log command:\n " +process->errorString());
    }

}

void GitCommand::GitEditUrl(QString name,QString url,QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "remote"<<"set-url"<<name<<url;
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute Edit Remote log command:\n " +process->errorString());
    }
}

void GitCommand::GitRetrieveVersion(QString name,QString Hash, QString Local_path)
{
    process->setWorkingDirectory(Local_path);
    QStringList args1;
    args1 << "cherry-pick"<<Hash;
    process->start("git",args1);
    if (!process->waitForFinished(-1))
    {
        emit Status("Failed to execute Edit retrieve command:\n " +process->errorString());
    }
    GitNewCommit(name,Local_path);

}

void GitCommand::onReadyReadStandardOutput()
{
    emit Status(QString(process->readAllStandardOutput()));
}
void GitCommand::onReadyReadStandardError()
{
    emit Status(QString(process->readAllStandardError()));
}

void GitCommand::emitWarning()
{
  emit Status("warning : you do not has a user.name and email .");
}
