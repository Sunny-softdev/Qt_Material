#include <QCoreApplication>
#include <QDebug>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Hello!";


    QList<QString> stringList;

    stringList << " Mumbai " << " New York " << " Berlin ";

    qDebug() << "The first element is " << stringList[0];
    qDebug() << "The second element is " << stringList[1];
    qDebug() << "The third element is " << stringList[2];

    stringList.append(" Paris ");
    stringList.append(" Vienna ");

    qDebug() << "The fourth element is " << stringList[3];
    qDebug() << "The fifth element is " << stringList[4];

    qDebug() << "The total number of elements in the list are : "<<stringList.count();
    static int j=0;
    //Loop through the list
    //for(int i = 0; i < stringList.count(); i++)
    for(auto &i : stringList)
        //qDebug() << "The element at index << QString::Number << sringList.at(i);"
        qDebug() << "The element at index " << j++ << " is " << i;

    return a.exec();

}
