#ifndef IVIEWMODELDELEGATE_H
#define IVIEWMODELDELEGATE_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "iviewmodel.h"
//class IViewModel;
class IViewModelDelegate
{
   std::string labelText1;//для сеттера
public:
    IViewModelDelegate();
    virtual ~IViewModelDelegate() {}
    virtual void setTextLabel(const std::string &labelText) = 0;
};

#endif // IVIEWMODELDELEGATE_H
