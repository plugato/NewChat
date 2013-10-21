#ifndef PACKAGE_H
#define PACKAGE_H

#include <QObject>

class Package : public QObject
{
    Q_OBJECT
public:
    explicit Package(QObject *parent = 0);



enum MessagenType{
     Message,
     Version
};


virtual MessagenType type() const = 0;

};




#endif // PACKAGE_H
