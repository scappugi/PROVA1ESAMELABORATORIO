//
// Created by simon on 01/12/2022.
//

#ifndef PROVA1ESAMELABORATORIO_NOTA_H
#define PROVA1ESAMELABORATORIO_NOTA_H
#include <string>
using namespace  std;

class Nota {
private:
    string nomeNota;
    string descrizioneNota;
    bool bloccoModificaCancellazione;
    bool priorita;
    bool inseritoInUnaLista;
    bool inseritoInUnaListaHpriorita;
public:
    const string &getNomeNota() const;

    void setNomeNota(const string &nomeNota);

    const string &getDescrizioneNota() const;

    void setDescrizioneNota(const string &descrizioneNota);

    bool isBloccoModificaCancellazione() const;

    void setBloccoModificaCancellazione(bool bloccoModificaCancellazione);

    bool isPriorita() const;

    void setPriorita(bool priorita);

    bool isInseritoInUnaLista() const;

    void setInseritoInUnaLista(bool inseritoInUnaLista);

    bool isInseritoInUnaListaHpriorita() const;

    void setInseritoInUnaListaHpriorita(bool inseritoInUnaListaHpriorita);

};


#endif //PROVA1ESAMELABORATORIO_NOTA_H
