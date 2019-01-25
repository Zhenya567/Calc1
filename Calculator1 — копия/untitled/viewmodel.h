#ifndef VIEWMODEL_H
#define VIEWMODEL_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "iviewmodel.h"
class ViewModel:public IViewModel
{
private:
   // ViewModel();
    struct State {void response(){}};
    struct onNumberSelected:public State{ void response(double number);};
    struct onOperationSelected:public State{void response(QString operation);};
    struct onEqSelected:public State {void response();};
public:
    void onNumberSelected1(){return state->response();}//Context
    void onOperationSelected1(){//Context
      delete state;
      state=new onOperationSelected;
    }
   void onEqSelected1(){//Context
    delete state;
    state=new onEqSelected;
   }
 signals:
  void setText(QString);
private:
    static double first,second;
    static QString operations;
    IViewModelDelegate* delegate;
    State *state;
};

#endif // VIEWMODEL_H
