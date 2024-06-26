#ifndef GITCOMMANDS_H
#define GITCOMMANDS_H
#include "database.h"
class GitCommands
{
public:
    GitCommands();
    QString GitInit(void);
    QString GitAdd(void);
    QString GitPush(void);
    QString GitNewCommit(QString name);
    QString GitNewBranch(QString name);
    QString GitRemote(QString name);
    QString GitClone(QString repo,QString Local_path);
    QString GitPush(QString repo,QString Local_path);
};

#endif // GITCOMMANDS_H
