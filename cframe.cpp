#include "cframe.h"
#include "ui_cframe.h"
#include <QMessageBox>

#include <QCoreApplication>
#include <QApplication>

cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);
}

cframe::~cframe()
{
    delete ui;
}

void cframe::on_btnRegresar_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void cframe::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void cframe::on_createReservationButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    QString contact = ui->contactLineEdit->text();
    int guests = ui->guestsSpinBox->value();
    QDateTime dateTime = ui->dateTimeEdit->dateTime();

    Reservation reservation(name, contact, guests, dateTime);
    QString reference = reservationManager.addReservation(reservation);

    if (!reference.isEmpty()) {
        // Mostrar el número de referencia en un mensaje emergente
        QMessageBox::information(this, "Reserva Confirmada", "Tu número de referencia es: " + reference);
    } else {
        QMessageBox::warning(this, "Error", "No se pudo realizar la reserva. Por favor, intente nuevamente.");
    }

    ui->nameLineEdit->clear();
    ui->contactLineEdit->clear();
    ui->referenceLineEdit->clear();
}


void cframe::on_viewAvailabilityButton_clicked()
{
    QDateTime datetime = ui->dateTimeEdit->dateTime();
    QList<Table> availableTables = reservationManager.getAvailableTables(datetime);

    if (availableTables.isEmpty()) {
        QMessageBox::information(this, "Disponibilidad", "No hay mesas disponibles para la fecha y hora seleccionadas.");
    } else {
        QString message = "Mesas disponibles:\n";
        foreach (const Table &table, availableTables) {
            message += QString("Mesa %1 (Capacidad: %2)\n").arg(table.getId()).arg(table.getCapacity());
        }
        QMessageBox::information(this, "Disponibilidad", message);
    }
}


void cframe::on_modifyReservationButton_clicked()
{
    QString ref = ui->referenceLineEdit->text();
    QString newName = ui->nameLineEdit2->text();
    QString newContact = ui->contactLineEdit2->text();
    int newGuests = ui->guestsSpinBox2->value();
    QDateTime newDatetime = ui->dateTimeEdit2->dateTime();

    Reservation newDetails(newName, newContact, newGuests, newDatetime);
    if (reservationManager.modifyReservation(ref, newDetails)) {
        QMessageBox::information(this, "Reserva Modificada", "La reserva ha sido modificada con éxito.");
    } else {
        QMessageBox::warning(this, "Error", "No se pudo modificar la reserva. Verifique el número de referencia.");
    }
}


void cframe::on_cancelReservationButton_clicked()
{
    QString ref = ui->referenceLineEdit2->text();

    if (reservationManager.cancelReservation(ref)) {
        QMessageBox::information(this, "Reserva Cancelada", "La reserva ha sido cancelada con éxito.");
    } else {
        QMessageBox::warning(this, "Error", "No se pudo cancelar la reserva. Verifique el número de referencia.");
    }
}




void cframe::on_btnReservar_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void cframe::on_btnMod_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void cframe::on_btnCancel_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void cframe::on_btnSalir_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

