#include "windowclientes.h"
#include "ui_windowclientes.h"
#include <iostream>
#include <QString>

using namespace std;

WindowClientes::WindowClientes(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WindowClientes)
{
    ui->setupUi(this);

    ui->button_salvar->setVisible(false);
}

WindowClientes::~WindowClientes()
{
    delete ui;
}

void WindowClientes::on_button_avancar_clicked()
{
    cout << "O botao avancar foi pressionado" << endl;
}


void WindowClientes::on_button_retroceder_clicked()
{
    cout << "O botao retroceder foi pressionado" << endl;
}


void WindowClientes::on_actionNovo_Cliente_triggered()
{
    cout << "O menu novo cliente foi pressionado" << endl;
    ui->button_salvar->setVisible(true);

    ui->input_nome->setText("");
    ui->input_endereco->setText("");
    ui->input_profissao->setText("");
    ui->input_salario->setValue(0);
}


void WindowClientes::on_actionRemover_Client_triggered()
{
    cout << "O menu remover cliente foi pressionado" << endl;

}


void WindowClientes::on_button_salvar_clicked()
{
    string nome = ui->input_nome->text().toStdString();
    string nome = ui->input_endereco->text().toStdString();
    string nome = ui->input_profissao->text().toStdString();
    double salario = ui->input_salario->value();

    Cliente novo(nome, endereco, profissao, salario);
    listaClientes.push_back(novo);

    ui->button_salvar->setVisible(false);
}

