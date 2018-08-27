#ifndef RECIPE_H
#define RECIPE_H

#include <QStringList>
#include <QByteArray>
#include <QVector>

class Recipe
{
public:

    Recipe();
    int id;
    QString name,
            descr;
    QStringList ingrs,
                acts,
                pictPaths;
    QVector<QByteArray> picts;

};

#endif // RECIPE_H
