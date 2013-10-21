#include "chatserver.h"
#include "clienteconnection.h"
#include "QTcpSocket"
#include "QTcpServer"
#include "receivemessagepackage.h"

namespace Chat {


ChatServer::ChatServer(QObject *parent) :
    QTcpServer(parent)
{

}

void ChatServer::incomingConnection( int descriptor )
{
   ClientConnection *p;

   p = new ClientConnection( descriptor );

   connect( p->getSocket(), &ChatSocket::newPackage, this, &ChatServer::handlePackage );

   m_connections.append( p );
}

void ChatServer::handlePackage( Package * p )
{
    if( p->type() == Package::Message )
      handleSendMessagePackage( static_cast< SendMessagePackage * >( p ) );
}

void ChatServer::handleSendMessagePackage( SendMessagePackage * p )
{
   QHostAddress addr = p->receiverAddress();

   for( int n = 0; n < m_connections.size(); ++n )
   {
      if( m_connections[ n ]->getSocket()->getAddres() == addr )
         sendMessageToClient( m_connections[ n ], p->senderAddress(), p->message() );
   }
}

void ChatServer::sendMessageToClient( ClientConnection * c, const QHostAddress & senderAddress, const QString & message )
{
   ReceiveMessagePackage p;

   /* inf obj p */

   c->sendPackage( &p );
}
}
