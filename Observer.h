//
// Created by simon on 01/12/2022.
//

#ifndef PROVA1ESAMELABORATORIO_OBSERVER_H
#define PROVA1ESAMELABORATORIO_OBSERVER_H


class Observer {
public:
    virtual ~Observer(); //distruttore virtuale
    virtual void update() = 0;
    virtual void attach() = 0;
    virtual void detach() = 0;

};


#endif //PROVA1ESAMELABORATORIO_OBSERVER_H
