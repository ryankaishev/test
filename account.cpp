#include "account.h"

bool Account::add_transaction(const Entry& entry) {
    if (entry.is_valid()) {
        if (entry.is_incoming()) {
            incoming_transactions.push_back(entry);
        } else {
            outgoing_transactions.push_back(entry);
        }
        return true;
    }
    return false;
}

double Account::calculate_balance() const {
    double balance = 0;
    for (const auto& entry : incoming_transactions) {
        balance += entry.get_amount();
    }
    for (const auto& entry : outgoing_transactions) {
        balance -= entry.get_amount();
    }
    return balance;
}