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

    void on_btnSalir_clicked();

    /**/

    void on_createReservationButton3_clicked();

    void on_viewAvailabilityButton3_clicked();

    void on_modifyReservationButton3_clicked();

    void on_cancelReservationButton3_clicked();

    void on_pushButton_2_clicked();

    void on_btnCERRAR_clicked();

    void on_AddTable_clicked();


    void on_btnTABLES_clicked();

    void on_RemoveTable_clicked();

    void on_btnRESER_clicked();

    void on_viewAvailabilityButton4_clicked();

    void on_btnRegresar2_clicked();

    /**/

private:
    Ui::cframe *ui;
    ReservationManager reservationManager;
};
#endif // CFRAME_H
