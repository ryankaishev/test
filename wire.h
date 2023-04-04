#ifndef WIRE_H
#define WIRE_H

#include "account.h"

class WireTransfer {
private:
    double amount;

public:
    WireTransfer(double amount);

    bool perform_transfer(Account& source, Account& destination);
};

#endif