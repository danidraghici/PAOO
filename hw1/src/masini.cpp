#include "masini.hpp"
#include <cstring> // strlen, strcpy, etc.

Masina::Masina(const char* marca, int an) : an(an) {
    this->marca = new char[strlen(marca) + 1];
    strcpy(this->marca, marca);
}

Masina::Masina(const Masina& masina) : an(masina.an) {
    marca = new char[strlen(masina.marca) + 1];
    strcpy(marca, masina.marca);
}

Masina& Masina::operator=(const Masina& masina) {
    if (this == &masina) {
        return *this;
    }

    delete[] marca;
    an = masina.an;
    marca = new char[strlen(masina.marca) + 1];
    strcpy(marca, masina.marca);

    return *this;
}

Masina::~Masina() {
    delete[] marca;
}

const char* Masina::GetMarca() const {
    return marca;
}

int Masina::GetAn() const {
    return an;
}