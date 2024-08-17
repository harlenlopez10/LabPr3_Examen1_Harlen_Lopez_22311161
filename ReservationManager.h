#ifndef RESERVATIONMANAGER_H
#define RESERVATIONMANAGER_H

#include <QList>
#include <QString>
#include "Reservation.h"
#include "Table.h"

class ReservationManager {
public:
    ReservationManager();

    QString addReservation(const Reservation &reservation);
    bool modifyReservation(const QString &ref, const Reservation &newDetails);
    bool cancelReservation(const QString &ref);
    QList<Table> getAvailableTables(const QDateTime &dateTime) const;

    void addTable(int id, int capacity);
    bool removeTable(int tableId);
    QList<Reservation> getAllReservations() const;

    /**/
private:
    QString generateUniqueReference();
    QList<Reservation> reservations;
    QList<Table> tables;
     QString lastReference;
    int referenceCounter = 0;
};
#endif // RESERVATIONMANAGER_H
