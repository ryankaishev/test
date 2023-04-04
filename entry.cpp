#include "entry.h"

Entry::Entry(double amount, bool incoming) : amount(amount), incoming(incoming) {}

double Entry::get_amount() const {
    return amount;
}

bool Entry::is_incoming() const {
    return incoming;
}

bool Entry::is_valid() const {
    if (incoming) {
        return true;
    }
    return amount >= 0;
}