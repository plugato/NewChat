#ifndef SENDMESSAGEPACKAGE_H
#define SENDMESSAGEPACKAGE_H

class SendMessagePackage : public Package
{
public:
    SendMessagePackage();
    QHostAddress receiverAddress();
};

#endif // SENDMESSAGEPACKAGE_H
