//
// Created by simon on 01/12/2022.
//

#ifndef PROVA1ESAMELABORATORIO_COLLEZIONENOTEIMPORTANTI_H
#define PROVA1ESAMELABORATORIO_COLLEZIONENOTEIMPORTANTI_H


#include "Nota.h"
#include "list"

class CollezioneNoteImportanti {
private:
    list<Nota *> listaToDoImportanti;

public:
    void AddListToDoImportanti(Nota *nota);
};


#endif //PROVA1ESAMELABORATORIO_COLLEZIONENOTEIMPORTANTI_H
