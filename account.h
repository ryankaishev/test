#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <vector>
#include "entry.h"

class Account {
private:
    std::vector<Entry> incoming_transactions;
    std::vector<Entry> outgoing_transactions;

public:
    bool add_transaction(const Entry& entry);
    double calculate_balance() const;
};

#endif