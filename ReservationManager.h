#ifndef RESERVATIONMANAGER_H
#define RESERVATIONMANAGER_H

#include <QList>
#include <QString>
#include "Reservation.h"
#include "Table.h"

class ReservationManager {
public:
    ReservationManager();

    QString addReservation(const Reservation &reservation);  // Debe ser QString
    bool modifyReservation(const QString &ref, const Reservation &newDetails);
    bool cancelReservation(const QString &ref);
    QList<Table> getAvailableTables(const QDateTime &dateTime) const;

private:
    QString generateUniqueReference();
    QList<Reservation> reservations;
    QList<Table> tables;
     QString lastReference;
    int referenceCounter = 0;
};
#endif // RESERVATIONMANAGER_H
