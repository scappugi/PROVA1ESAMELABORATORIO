//
// Created by simon on 01/12/2022.
//

#ifndef PROVA1ESAMELABORATORIO_COLLEZIONENOTE_H
#define PROVA1ESAMELABORATORIO_COLLEZIONENOTE_H

#include "Nota.h"
#include "list"
#include "iostream"
#include "Subject.h"

using namespace std;

class CollezioneNote: public Subject {
public:
    CollezioneNote(string nomeLista){ //costruttore che assegna un nome alla lista
        this->nomeLista=nomeLista;}

    void AddListToDo(Nota *nota);
    void removeToList(Nota *nota);
    void removeAndDestroyNote(Nota *nota);
    virtual void subscribe(Observer *o);
    virtual void unsubscribe(Observer *o);
    virtual void notify();
    virtual ~CollezioneNote();

private:
    list<Nota *> listaToDo;
    Observer *observer;
    string nomeLista;
};


#endif //PROVA1ESAMELABORATORIO_COLLEZIONENOTE_H
