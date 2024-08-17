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

    ui->btnRegresar->setVisible(false);
    ui->btnRegresar2->setVisible(false);
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

    ui->btnRegresar2->setVisible(false);
    ui->btnRegresar->setVisible(true);
    /**/


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

void cframe::on_createReservationButton3_clicked()
{
    QString name = ui->nameLineEdit3->text();
    QString contact = ui->contactLineEdit3->text();
    int guests = ui->guestsSpinBox3->value();
    QDateTime dateTime = ui->dateTimeEdit3->dateTime();

    Reservation reservation(name, contact, guests, dateTime);
    QString reference = reservationManager.addReservation(reservation);

    if (!reference.isEmpty()) {
        // Mostrar el número de referencia en un mensaje emergente
        QMessageBox::information(this, "Reserva Confirmada", "Tu número de referencia es: " + reference);
    } else {
        QMessageBox::warning(this, "Error", "No se pudo realizar la reserva. Por favor, intente nuevamente.");
    }

    ui->nameLineEdit3->clear();
    ui->contactLineEdit3->clear();
    ui->referenceLineEdit3->clear();
}


void cframe::on_viewAvailabilityButton3_clicked()
{
    QDateTime datetime = ui->dateTimeEdit3->dateTime();
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


void cframe::on_modifyReservationButton3_clicked()
{
    QString ref = ui->referenceLineEdit3->text();
    QString newName = ui->nameLineEdit3->text();
    QString newContact = ui->contactLineEdit3->text();
    int newGuests = ui->guestsSpinBox3->value();
    QDateTime newDatetime = ui->dateTimeEdit3->dateTime();

    Reservation newDetails(newName, newContact, newGuests, newDatetime);
    if (reservationManager.modifyReservation(ref, newDetails)) {
        QMessageBox::information(this, "Reserva Modificada", "La reserva ha sido modificada con éxito.");
    } else {
        QMessageBox::warning(this, "Error", "No se pudo modificar la reserva. Verifique el número de referencia.");
    }

    ui->nameLineEdit3->clear();
    ui->contactLineEdit3->clear();
    ui->referenceLineEdit3->clear();
}


void cframe::on_cancelReservationButton3_clicked()
{
    QString ref = ui->referenceLineEdit2->text();

    if (reservationManager.cancelReservation(ref)) {
        QMessageBox::information(this, "Reserva Cancelada", "La reserva ha sido cancelada con éxito.");
    } else {
        QMessageBox::warning(this, "Error", "No se pudo cancelar la reserva. Verifique el número de referencia.");
    }
}


void cframe::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);

    ui->btnRegresar->setVisible(false);
    ui->btnRegresar2->setVisible(true);
}


void cframe::on_btnCERRAR_clicked()
{
    QCoreApplication::quit();
}


void cframe::on_AddTable_clicked()
{
    int id = ui->NumberTablespinBox->value();
    int capacity = ui->CapacityspinBox->value();

    if (id > 0 && capacity > 0) {
        reservationManager.addTable(id, capacity);
        QMessageBox::information(this, "Completado", "Mesa añadida correctamente!");
    } else {
        QMessageBox::warning(this, "Error", "Ingrese datos correctamente.");
    }
}


void cframe::on_btnTABLES_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void cframe::on_RemoveTable_clicked()
{

    int id = ui->NumberTablespinBox->value();

    if (id > 0) {
        reservationManager.removeTable(id);
        QMessageBox::information(this, "Completado", "Mesa removida exitosamente!");
    } else {
        QMessageBox::warning(this, "Error", "Porfavor ingrese un ID de Mesa valido.");
    }
}


void cframe::on_btnRESER_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void cframe::on_viewAvailabilityButton4_clicked()
{
    QDateTime datetime = ui->dateTimeEdit3->dateTime();
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


void cframe::on_btnRegresar2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

