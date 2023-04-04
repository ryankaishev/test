#include <iostream>
#include "account.h"
#include "entry.h"
#include "wire.h"

int main() {
    Account account1;
    Account account2;

    Entry incoming_entry(100, true);
    account1.add_transaction(incoming_entry);

 
    std::cout << "Account 1: " << account1.calculate_balance() << std::endl;
    std::cout << "Account 2: " << account2.calculate_balance() << std::endl;

 
    WireTransfer successful_transfer(50);
    if (successful_transfer.perform_transfer(account1, account2)) {
        std::cout << "Transfer successful." << std::endl;
    } else {
        std::cout << "Transfer unsuccessful." << std::endl;
    }
    
    std::cout << "Account 1: " << account1.calculate_balance() << std::endl;
    std::cout << "Account 2: " << account2.calculate_balance() << std::endl;

    return 0;
}