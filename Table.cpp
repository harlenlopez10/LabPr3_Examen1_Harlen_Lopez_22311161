#include "Table.h"

Table::Table(int id, int capacity)
    : id(id), capacity(capacity) {}

int Table::getId() const {
    return id;
}

int Table::getCapacity() const {
    return capacity;
}

bool Table::isAvailable(const QDateTime &datetime) const {
    return !reservations.contains(datetime);
}

void Table::reserve(const QDateTime &datetime) {
    if (!reservations.contains(datetime)) {
        reservations.append(datetime);
    }
}

void Table::cancelReservation(const QDateTime &datetime) {
    reservations.removeOne(datetime);
}

/**/
