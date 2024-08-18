#include "ReservationManager.h"

ReservationManager::ReservationManager() {
    // Inicializar las mesas
    tables.append(Table(1, 4));
    tables.append(Table(2, 2));
    tables.append(Table(3, 6));
}

QString ReservationManager::generateUniqueReference() {
    // Incrementa el contador y convierte a QString
    return QString::number(++referenceCounter);
}

QString ReservationManager::addReservation(const Reservation &reservation) {
    // Crear una copia de la reserva con una referencia única
    Reservation newReservation = reservation;
    QString reference = generateUniqueReference();
    newReservation.setReference(reference);

    // Buscar una mesa disponible
    for (int i = 0; i < tables.size(); ++i) {
        Table &table = tables[i];  // Obtén la referencia a la mesa
        if (table.isAvailable(newReservation.getDateTime())) {
            table.reserve(newReservation.getDateTime());
            reservations.append(newReservation);
            lastReference = reference;  // Guarda la referencia
            return reference;  // Devuelve el número de referencia
        }
    }
    return QString();// No hay mesas disponibles
}

bool ReservationManager::modifyReservation(const QString &ref, const Reservation &newDetails) {
    // Buscar la reserva a modificar
    for (int i = 0; i < reservations.size(); ++i) {
        if (reservations[i].getReference() == ref) {
            // Cancelar la reserva original
            bool reservationCancelled = false;
            for (int j = 0; j < tables.size(); ++j) {
                Table &table = tables[j];  // Obtén la referencia a la mesa
                if (!table.isAvailable(reservations[i].getDateTime())) {  // Verifica si la mesa está ocupada
                    table.cancelReservation(reservations[i].getDateTime());
                    reservationCancelled = true;
                    break;
                }
            }

            if (!reservationCancelled) {
                return false;
            }

            // Actualizar la reserva
            reservations[i] = newDetails;
            reservations[i].setReference(ref);  // Mantener el mismo número de referencia

            // Intentar reservar la nueva fecha/hora
            for (int j = 0; j < tables.size(); ++j) {
                Table &table = tables[j];  // Obtén la referencia a la mesa
                if (table.isAvailable(newDetails.getDateTime())) {
                    table.reserve(newDetails.getDateTime());
                    return true;
                }
            }
            return false;  // No se pudo reservar la nueva fecha/hora
        }
    }
    return false; // No se encontró la reserva
}

bool ReservationManager::cancelReservation(const QString &ref) {
    // Buscar la reserva a cancelar
    for (int i = 0; i < reservations.size(); ++i) {
        if (reservations[i].getReference() == ref) {
            // Cancelar la reserva
            for (int j = 0; j < tables.size(); ++j) {
                Table &table = tables[j];  // Obtén la referencia a la mesa
                if (!table.isAvailable(reservations[i].getDateTime())) {  // Verifica si la mesa está ocupada
                    table.cancelReservation(reservations[i].getDateTime());
                    reservations.removeAt(i);
                    return true;
                }
            }
            // Si no se encontró la mesa ocupada, eliminar la reserva en la lista
            reservations.removeAt(i);
            return false;  // La reserva no pudo ser cancelada
        }
    }
    return false;  // No se encontró la reserva
}

QList<Table> ReservationManager::getAvailableTables(const QDateTime &datetime) const {
    QList<Table> availableTables;
    foreach (const Table &table, tables) {
        if (table.isAvailable(datetime)) {
            availableTables.append(table);
        }
    }
    return availableTables;
}


void ReservationManager::addTable(int id, int capacity) {
    Table newTable(id, capacity);  // Crear una nueva mesa con ID y capacidad
    tables.append(newTable);
}

bool ReservationManager::removeTable(int tableId) {
    for (int i = 0; i < tables.size(); ++i) {
        if (tables[i].getId() == tableId) {
            tables.removeAt(i);
            return true;
        }
    }
    return false;
}

QList<Reservation> ReservationManager::getAllReservations() const {
    return reservations;
}
