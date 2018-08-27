#ifndef DATA_H
#define DATA_H

#include <QObject>
#include <QStandardItemModel>
#include <QtSql>
#include <QDebug>
#include "recipe.h"

class Data
{
public:
    Data();
    void saveModel(QString path);
    Recipe getRecipe(int _id);
    Recipe getRecipe(QString name);
    void addRecipe(Recipe rec);
    void loadModel(QString path);
    void loadPicts();
    int getRecCount();
    QSqlQueryModel* getModel();

    
private:
    QSqlQueryModel model;
    QSqlDatabase db;
    QVector<QByteArray> allPicts;
    
    bool saveBookToDatabase();
    bool saveRecipeToModel();
    void readBookFromDatabase(QString path);

};

void strToList(QStringList strl, QString *tmp);

#endif // DATA_H
