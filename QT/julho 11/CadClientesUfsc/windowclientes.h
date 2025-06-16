#ifndef WINDOWCLIENTES_H
#define WINDOWCLIENTES_H

#include <QMainWindow>
#include "cliente.hpp"

QT_BEGIN_NAMESPACE
namespace Ui {
class WindowClientes;
}
QT_END_NAMESPACE

class WindowClientes : public QMainWindow
{
    Q_OBJECT

public:
    WindowClientes(QWidget *parent = nullptr);
    ~WindowClientes();

private slots:
    void on_button_avancar_clicked();

    void on_button_retroceder_clicked();

    void on_actionNovo_Cliente_triggered();

    void on_actionRemover_Client_triggered();

    void on_button_salvar_clicked();

private:
    Ui::WindowClientes *ui;
    vector<Cliente> listaClientes;
};
#endif // WINDOWCLIENTES_H
