//
// Created by simon on 01/12/2022.
//

#include "Nota.h"

const string &Nota::getNomeNota() const {
    return nomeNota;
}

void Nota::setNomeNota(const string &nomeNota) {
    Nota::nomeNota = nomeNota;
}

const string &Nota::getDescrizioneNota() const {
    return descrizioneNota;
}

void Nota::setDescrizioneNota(const string &descrizioneNota) {
    Nota::descrizioneNota = descrizioneNota;
}

bool Nota::isBloccoModificaCancellazione() const {
    return bloccoModificaCancellazione;
}

void Nota::setBloccoModificaCancellazione(bool bloccoModificaCancellazione) {
    Nota::bloccoModificaCancellazione = bloccoModificaCancellazione;
}

bool Nota::isPriorita() const {
    return priorita;
}

void Nota::setPriorita(bool priorita) {
    Nota::priorita = priorita;
}

bool Nota::isInseritoInUnaLista() const {
    return inseritoInUnaLista;
}

void Nota::setInseritoInUnaLista(bool inseritoInUnaLista) {
    Nota::inseritoInUnaLista = inseritoInUnaLista;
}

bool Nota::isInseritoInUnaListaHpriorita() const {
    return inseritoInUnaListaHpriorita;
}

void Nota::setInseritoInUnaListaHpriorita(bool inseritoInUnaListaHpriorita) {
    Nota::inseritoInUnaListaHpriorita = inseritoInUnaListaHpriorita;
}
