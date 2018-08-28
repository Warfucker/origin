#ifndef RECIPE_H
#define RECIPE_H

#include <QStringList>
#include <QByteArray>
#include <QVector>
#include <QImage>

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
    QVector<QImage> picts;

};

#endif // RECIPE_H
