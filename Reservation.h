#ifndef RESERVATION_H
#define RESERVATION_H

#include <QString>
#include <QDateTime>

class Reservation {
public:

    Reservation(const QString &name = "", const QString &contact = "", int guests = 0, const QDateTime &dateTime = QDateTime());

    QString getName() const;
    void setName(const QString &name);

    QString getContact() const;
    void setContact(const QString &contact);

    int getGuests() const;
    void setGuests(int guests);

    QDateTime getDateTime() const;
    void setDateTime(const QDateTime &dateTime);

    QString getReference() const;
    void setReference(const QString &reference);

private:
    QString name;
    QString contact;
    int guests;
    QDateTime dateTime;
    QString reference;

};
#endif // RESERVATION_H
