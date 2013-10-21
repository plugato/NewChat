#ifndef CHATSOCKET_H
#define CHATSOCKET_H

#include <QTcpSocket>

namespace Chat {
class ChatSocket : public QTcpSocket
{
    Q_OBJECT
public:
    explicit ChatSocket(QObject *parent = 0);

    QHostAddress getAddres() ;
signals:
    void newPackage();
public slots:

};
}
#endif // CHATSOCKET_H
