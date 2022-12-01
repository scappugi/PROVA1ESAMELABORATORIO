//
// Created by simon on 01/12/2022.
//

#ifndef PROVA1ESAMELABORATORIO_SUBJECT_H
#define PROVA1ESAMELABORATORIO_SUBJECT_H


#include "Observer.h"

class Subject {
    virtual void subscribe(Observer *o) = 0;
    virtual void unsubscribe(Observer *o) = 0;
    virtual void notify() = 0;
    virtual ~Subject();
};


#endif //PROVA1ESAMELABORATORIO_SUBJECT_H
