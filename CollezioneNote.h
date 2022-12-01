//
// Created by simon on 01/12/2022.
//

#ifndef PROVA1ESAMELABORATORIO_COLLEZIONENOTE_H
#define PROVA1ESAMELABORATORIO_COLLEZIONENOTE_H

#include "Nota.h"
#include "list"


using namespace std;

class CollezioneNote{
private:
    list<Nota *> listaToDo;

public: void AddListToDo(Nota *nota){
        if (nota->isInseritoInUnaLista()==0)
        {
            nota->setInseritoInUnaLista(1); //controllo che non sia già stato inserito in un altra lista

        }
    }
};


#endif //PROVA1ESAMELABORATORIO_COLLEZIONENOTE_H
