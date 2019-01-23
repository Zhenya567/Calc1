#include "iviewmodel.h"
#include "mainwindow.h"
void IViewModel::onNumberSelected::response(){
    MainWindow number;//чтобы получить доступ к sender
    QPushButton *button=(QPushButton *) number.getsender();//для проверки на какое число ввел пользователь
        if(button->text()=="+" || button->text()=="-" || button->text()=="/" || button->text()=="*"){
            second=(button->text().toDouble());
        }
        else if(!(button->text()=="+" || button->text()=="-" || button->text()=="/" || button->text()=="*")){
            first=(button->text().toDouble());
        }
}
void IViewModel::onOperationSelected::response(){
    MainWindow operatorion;//чтобы получить доступ к sender
    QPushButton *button=(QPushButton *) operatorion.getsender();//для проверки на какое число ввел пользователь
        if(button->text()=="+"){
            operations=(button->text());
        }
        else if(button->text()=="-"){
            operations=(button->text());
        }
        else if(button->text()=="/"){
            operations=(button->text());
        }
        else if(button->text()=="*"){
            operations=(button->text());
        }
}
void IViewModel::onEqSelected::response(){
    MainWindow Eq;//чтобы получить доступ к sender
    QPushButton *button=(QPushButton *) Eq.getsender();//для проверки на какое число ввел пользователь
        if(button->text()=="="){
            if(operations=="+"){first=first+second;}
            if(operations=="-"){first=first-second;}
            if(operations=="/"){first=first/second;}
            if(operations=="*"){ first=first+second;}
}
}
void IViewModel::setDelegate(IViewModelDelegate* delegate){
    this->delegate=delegate;
}
