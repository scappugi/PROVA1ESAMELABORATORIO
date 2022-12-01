//
// Created by simon on 01/12/2022.
//

#ifndef PROVA1ESAMELABORATORIO_COLLEZIONENOTEIMPORTANTI_H
#define PROVA1ESAMELABORATORIO_COLLEZIONENOTEIMPORTANTI_H


#include "Nota.h"
#include "list"
#include "Subject.h"

class CollezioneNoteImportanti:public Subject{
public:
    CollezioneNoteImportanti(string nomeLista){
        this->nomeLista=nomeLista;
    }

    void AddListToDoImportanti(Nota *nota);
    virtual ~CollezioneNoteImportanti();

private:
    list<Nota *> listaToDoImportanti;
    string nomeLista;
};


#endif //PROVA1ESAMELABORATORIO_COLLEZIONENOTEIMPORTANTI_H
