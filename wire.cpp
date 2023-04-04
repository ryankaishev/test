#include "wire.h"

WireTransfer::WireTransfer(double amount) : amount(amount) {}

bool WireTransfer::perform_transfer(Account& source, Account& destination) {
    Entry outgoing_entry(amount, false);
    Entry incoming_entry(amount, true);
    if (source.add_transaction(outgoing_entry)) {
        if (destination.add_transaction(incoming_entry)) {
            return true;
        }
        // undo source transaction if destination transaction failed
        source.add_transaction(Entry(amount, true));
    }
    return false;
}