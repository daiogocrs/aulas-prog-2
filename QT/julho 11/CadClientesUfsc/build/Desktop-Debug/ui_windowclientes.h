/********************************************************************************
** Form generated from reading UI file 'windowclientes.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWCLIENTES_H
#define UI_WINDOWCLIENTES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowClientes
{
public:
    QAction *actionNovo_Cliente;
    QAction *actionRemover_Client;
    QAction *actionVersao;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *input_nome;
    QLineEdit *input_endereco;
    QLineEdit *input_profissao;
    QDoubleSpinBox *input_salario;
    QPushButton *button_retroceder;
    QPushButton *button_avancar;
    QMenuBar *menubar;
    QMenu *menuCadastros;
    QMenu *menuSobre;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowClientes)
    {
        if (WindowClientes->objectName().isEmpty())
            WindowClientes->setObjectName("WindowClientes");
        WindowClientes->resize(479, 269);
        actionNovo_Cliente = new QAction(WindowClientes);
        actionNovo_Cliente->setObjectName("actionNovo_Cliente");
        actionRemover_Client = new QAction(WindowClientes);
        actionRemover_Client->setObjectName("actionRemover_Client");
        actionVersao = new QAction(WindowClientes);
        actionVersao->setObjectName("actionVersao");
        centralwidget = new QWidget(WindowClientes);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 58, 18));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 61, 18));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 100, 58, 18));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 140, 58, 18));
        input_nome = new QLineEdit(centralwidget);
        input_nome->setObjectName("input_nome");
        input_nome->setGeometry(QRect(70, 10, 221, 32));
        input_endereco = new QLineEdit(centralwidget);
        input_endereco->setObjectName("input_endereco");
        input_endereco->setGeometry(QRect(70, 50, 351, 32));
        input_profissao = new QLineEdit(centralwidget);
        input_profissao->setObjectName("input_profissao");
        input_profissao->setGeometry(QRect(70, 90, 231, 32));
        input_salario = new QDoubleSpinBox(centralwidget);
        input_salario->setObjectName("input_salario");
        input_salario->setGeometry(QRect(70, 130, 131, 32));
        button_retroceder = new QPushButton(centralwidget);
        button_retroceder->setObjectName("button_retroceder");
        button_retroceder->setGeometry(QRect(160, 170, 88, 34));
        button_avancar = new QPushButton(centralwidget);
        button_avancar->setObjectName("button_avancar");
        button_avancar->setGeometry(QRect(250, 170, 88, 34));
        WindowClientes->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowClientes);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 479, 30));
        menuCadastros = new QMenu(menubar);
        menuCadastros->setObjectName("menuCadastros");
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName("menuSobre");
        WindowClientes->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowClientes);
        statusbar->setObjectName("statusbar");
        WindowClientes->setStatusBar(statusbar);

        menubar->addAction(menuCadastros->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuCadastros->addAction(actionNovo_Cliente);
        menuCadastros->addAction(actionRemover_Client);
        menuSobre->addAction(actionVersao);

        retranslateUi(WindowClientes);

        QMetaObject::connectSlotsByName(WindowClientes);
    } // setupUi

    void retranslateUi(QMainWindow *WindowClientes)
    {
        WindowClientes->setWindowTitle(QCoreApplication::translate("WindowClientes", "Cadastro de Clientes", nullptr));
        actionNovo_Cliente->setText(QCoreApplication::translate("WindowClientes", "Novo Cliente", nullptr));
        actionRemover_Client->setText(QCoreApplication::translate("WindowClientes", "Remover Client", nullptr));
        actionVersao->setText(QCoreApplication::translate("WindowClientes", "Versao", nullptr));
        label->setText(QCoreApplication::translate("WindowClientes", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("WindowClientes", "Endereco", nullptr));
        label_3->setText(QCoreApplication::translate("WindowClientes", "Profissao", nullptr));
        label_4->setText(QCoreApplication::translate("WindowClientes", "Salario", nullptr));
        button_retroceder->setText(QCoreApplication::translate("WindowClientes", "<", nullptr));
        button_avancar->setText(QCoreApplication::translate("WindowClientes", ">", nullptr));
        menuCadastros->setTitle(QCoreApplication::translate("WindowClientes", "Cadastros", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("WindowClientes", "Sobre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowClientes: public Ui_WindowClientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWCLIENTES_H
