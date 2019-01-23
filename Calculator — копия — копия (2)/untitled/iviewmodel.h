#ifndef IVIEWMODEL_H
#define IVIEWMODEL_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QString>
//#include "iviewmodeldelegate.h"
class IViewModelDelegate;
class IViewModel:public QMainWindow
{
 struct State{virtual void response() = 0;};
 struct onNumberSelected:public State{ void response();};
 struct onOperationSelected:public State{void response();};
 struct onEqSelected:public State {void response();};
public:

 IViewModel() : state(new onNumberSelected()) {}
    virtual ~IViewModel(){}
/*---------------------------*/
 void onNumberSelected1(){return state->response();}//Context
 void onOperationSelected1(){//Context
   delete state;
   state=new onOperationSelected;
 }
void onEqSelected1(){//Context
 delete state;
 state=new onEqSelected;
}
virtual void setDelegate(IViewModelDelegate* delegate) = 0;
/*-------------------------------------*/

private:
State *state;
static double first,second;
static QString operations;
IViewModelDelegate* delegate;
};

#endif // IVIEWMODEL_H
