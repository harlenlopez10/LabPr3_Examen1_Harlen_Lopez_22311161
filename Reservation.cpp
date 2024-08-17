#include "Reservation.h"

Reservation::Reservation(const QString &name, const QString &contact, int guests, const QDateTime &dateTime)
    : name(name), contact(contact), guests(guests), dateTime(dateTime) {}

QString Reservation::getName() const { return name; }
void Reservation::setName(const QString &name) { this->name = name; }

QString Reservation::getContact() const { return contact; }
void Reservation::setContact(const QString &contact) { this->contact = contact; }

int Reservation::getGuests() const { return guests; }
void Reservation::setGuests(int guests) { this->guests = guests; }

QDateTime Reservation::getDateTime() const { return dateTime; }
void Reservation::setDateTime(const QDateTime &dateTime) { this->dateTime = dateTime; }

QString Reservation::getReference() const { return reference; }
void Reservation::setReference(const QString &reference) { this->reference = reference; }
/**/
