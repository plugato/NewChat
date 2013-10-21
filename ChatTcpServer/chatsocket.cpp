#include "chatsocket.h"


namespace Chat {
ChatSocket::ChatSocket(QObject *parent) :
    QTcpSocket(parent)
{
}

QHostAddress ChatSocket::getAddres(){

}

}
