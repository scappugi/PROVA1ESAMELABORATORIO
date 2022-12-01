//
// Created by simon on 01/12/2022.
//

#ifndef PROVA1ESAMELABORATORIO_COLLEZIONENOTE_H
#define PROVA1ESAMELABORATORIO_COLLEZIONENOTE_H

#include "Nota.h"
#include "list"
#include "iostream"

using namespace std;

class CollezioneNote {
private:
    list<Nota *> listaToDo;

public:
    void AddListToDo(Nota *nota);
};


#endif //PROVA1ESAMELABORATORIO_COLLEZIONENOTE_H
