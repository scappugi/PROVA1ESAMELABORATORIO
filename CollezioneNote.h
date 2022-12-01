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
    virtual ~CollezioneNote();

private:
    list<Nota *> listaToDo;
    string nomeLista;
};


#endif //PROVA1ESAMELABORATORIO_COLLEZIONENOTE_H
