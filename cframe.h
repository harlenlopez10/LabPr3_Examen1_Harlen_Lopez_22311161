#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>
#include "ReservationManager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class cframe;
}
QT_END_NAMESPACE

class cframe : public QMainWindow
{
    Q_OBJECT

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();

private slots:
    void on_btnRegresar_clicked();

    void on_pushButton_clicked();

    void on_createReservationButton_clicked();

    void on_viewAvailabilityButton_clicked();

    void on_modifyReservationButton_clicked();

    void on_cancelReservationButton_clicked();



    void on_btnReservar_clicked();

    void on_btnMod_clicked();

    void on_btnCancel_clicked();



private:
    Ui::cframe *ui;
    ReservationManager reservationManager;
};
#endif // CFRAME_H
