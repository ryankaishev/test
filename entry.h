#ifndef ENTRY_H
#define ENTRY_H

class Entry {
private:
    double amount;
    bool incoming;

public:
    Entry(double amount, bool incoming);

    double get_amount() const;
    bool is_incoming() const;
    bool is_valid() const;
};

#endif