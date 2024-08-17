#ifndef TABLE_H
#define TABLE_H

#include <QDateTime>
#include <QList>

class Table {
public:
    Table(int id, int capacity);

    int getId() const;
    int getCapacity() const;
    bool isAvailable(const QDateTime &datetime) const;

    void reserve(const QDateTime &datetime);
    void cancelReservation(const QDateTime &datetime);

private:
    int id;
    int capacity;
    QList<QDateTime> reservations;
};
#endif // TABLE_H
