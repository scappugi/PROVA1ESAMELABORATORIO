//
// Created by simon on 01/12/2022.
//

#include "CollezioneNote.h"


void CollezioneNote::AddListToDo(Nota *nota) {
    if (nota->isInseritoInUnaLista() == 0) { //controllo che non sia già stato inserito in un altra lista
            nota->setInseritoInUnaLista(1);
            listaToDo.push_back(nota); //inserisco in una lista
    }
    else cout << "la seguente nota è gia stata inserita in un altra lista, non puoi riserirla anche qua"; //stampare i dettagli della lista
}
