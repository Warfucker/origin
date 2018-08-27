#include "data.h"

Data::Data()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
}

QSqlQueryModel* Data::getModel()
{
    return &model;
}

void Data::loadModel(QString path)
{
    if (db.isOpen())
        db.close();
    db.setDatabaseName(path);
    db.open();
    if (!db.isOpen())
        qDebug() << "DB FAIL";
    QSqlQuery q;
    q.prepare("SELECT * FROM Recipes");
    q.exec();
    model.setQuery(q);
    loadPicts();
}

void Data::saveModel(QString path)
{
    QSqlQuery q;
    q.prepare("DELETE FROM Recipes");
    q.exec();
    q.prepare("DELETE FROM Picts");
    q.exec();
    for (int i = 0; i < model.rowCount(); i++)
    {

    }
}

Recipe Data::getRecipe(int _id)
{
    Recipe res;
    QStringList pictNums;

    res.id = model.data(model.index(_id, 0, QModelIndex())).toInt();
    res.name = model.data(model.index(_id, 1, QModelIndex())).toString();
    res.descr = model.data(model.index(_id, 2, QModelIndex())).toString();
    res.ingrs = model.data(model.index(_id, 3, QModelIndex())).toString().split(", ", QString::SkipEmptyParts);
    res.acts= model.data(model.index(_id, 4, QModelIndex())).toString().split(", ", QString::SkipEmptyParts);

    pictNums = model.data(model.index(_id, 5, QModelIndex())).toString().split(", ", QString::SkipEmptyParts);

    for (int i = 0; i < pictNums.length(); i++)
        res.picts.append(allPicts[pictNums[i].toInt() - 1]);
    return res;
}

Recipe Data::getRecipe(QString name)
{
    Recipe res;
    for (int i = 0; i < model.rowCount(); i++)
    {
        res = getRecipe(i);
        if (res.name == name)
        {
            qDebug() << res.picts.count();
            return getRecipe(i);
        }
    }
    return res;
}

void Data::addRecipe(Recipe rec)
{
    int id = model.rowCount();
    model.insertRow(id);

    model.setData(model.index(id, 0, QModelIndex()), rec.name);     // Имя в модель
    model.setData(model.index(id, 1, QModelIndex()), rec.descr);    // Описание в модель

    // Ингридиенты в модель
    QString tmp;
    strToList(rec.ingrs, &tmp);
    model.setData(model.index(id, 2, QModelIndex()), tmp);
    tmp.clear();

    // Алгоритм приготовления в модель
    strToList(rec.acts, &tmp);
    model.setData(model.index(id, 3, QModelIndex()), tmp);
    tmp.clear();

    // Картинки в модель
    for (int i = 0; i < rec.pictPaths.length(); i++)
    {
        QFile pict(rec.pictPaths[i]);
        if (!pict.open(QIODevice::ReadOnly))
            return;
        allPicts.append(pict.readAll());
    }
    for (int i = allPicts.length() - rec.pictPaths.length(); i < allPicts.length(); i++)
        tmp.append(QString::number(i) + ", ");
    model.setData(model.index(id, 4, QModelIndex()), tmp);
    tmp.clear();
}

void Data::loadPicts()
{
    QSqlQuery q;
    q.prepare("SELECT * FROM Picts");
    q.exec();
    while (q.next())
    {
        allPicts.append(q.value(0).toByteArray());
    }
}

void strToList(QStringList strl, QString *tmp)
{
    for (int i = 0; i < strl.length(); i++)
        tmp->append(strl[i] + ", ");
    tmp->remove(tmp->length() - 2, 2);
}

int Data::getRecCount()
{
    return model.rowCount();
}

////            ПОКА Х3 НУЖНЫ ЛИ Ф-ЦИИ НИЖЕ


bool Data::saveBookToDatabase()
{
    return true;
}

void Data::readBookFromDatabase(QString path)
{

}

bool Data::saveRecipeToModel()
{
    return true;
}
