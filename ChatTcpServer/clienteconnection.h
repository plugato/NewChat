#ifndef CLIENTECONNECTION_H
#define CLIENTECONNECTION_H
#include "chatserver.h"
#include <QObject>
#include "package.h"
#include "chatsocket.h"


namespace Chat
{

class ClientConnection : public QObject
{
public:
   ClientConnection( int descriptor );


   const ChatSocket * getSocket() const;


   void senderAddress() ;
   void sendPackage( Package * p );




private:
   ChatSocket * m_socket;
   QThread * m_thread;

};

}
#endif // CLIENTECONNECTION_H
