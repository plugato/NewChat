#ifndef CHATSERVER_H
#define CHATSERVER_H
#include "clienteconnection.h"
#include "chatsocket.h"
#include "sendmessagepackage.h"



#include <QTcpServer>


namespace Chat {


class ChatServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit ChatServer(QObject *parent = 0);



protected:
    void incomingConnection(  int descriptor );

private:

   void handleSendMessagePackage( SendMessagePackage * p );
   QList<ClientConnection *> m_connections;



signals:

public slots:
    void handlePackage( Package * p );
};
}
#endif // CHATSERVER_H
