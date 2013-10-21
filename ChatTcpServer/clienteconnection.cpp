#include "clienteconnection.h"

Chat::ClientConnection::ClientConnection( int descriptor )
{
   m_thread = new QThread( this );

   m_socket = new Chat::ChatSocket( descriptor );
   m_socket->setDescriptor( descriptor );
   m_socket->moveToThread( m_thread );

   m_thread->start();
}

const Chat::ChatSocket * Chat::ClientConnection::getSocket() const
{
   return m_socket;
}

void Chat::ClientConnection::sendPackage( Package * p )
{
   QMetaObject::invokeMethod( m_socket, "writePackage", Qt::QueuedConnection, Q_ARG( QByteArray, Chat::PackageBuilder::buildPackage( p ) ) );
}

QHostAddress Chat::ClientConnection::getAddress(){

}
