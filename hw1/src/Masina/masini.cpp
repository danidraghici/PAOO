#include "masini.hpp"
#include <iostream>
#include <cstring> // strlen, strcpy, etc.
using namespace MasinaNamespace;

Masina::Masina(const char* marca, int an, int numarRoti, bool areMotor) : VehiculNamespace::Vehicul(areMotor, numarRoti), an(an) {
    this->marca = new char[strlen(marca) + 1];
    strcpy(this->marca, marca);
}

Masina::Masina(const Masina& masina) : VehiculNamespace::Vehicul(masina.AreMotor(), masina.GetNumarRoti()), an(masina.an) {
    std::cout << "Copy constructor called" << std::endl;
    marca = new char[strlen(masina.marca) + 1];
    strcpy(marca, masina.marca);
}

Masina& Masina::operator=(const Masina& masina) {
    std::cout << "Assignment operator called" << std::endl;
    if (this == &masina) {
        return *this;
    }

    delete[] marca;         
    an = masina.an;
    this->SetNumarRoti(masina.GetNumarRoti());
    this->SetMotor(masina.AreMotor());
    marca = new char[strlen(masina.marca) + 1];
    strcpy(marca, masina.marca);

    return *this;
}

Masina::Masina(Masina&& masina) noexcept : VehiculNamespace::Vehicul(masina.AreMotor(), masina.GetNumarRoti()), an(masina.an) {
    this->marca = std::move(masina.marca);
    masina.marca = nullptr;  
    std::cout << "Move constructor called" << std::endl;
}

Masina::~Masina() {
    delete[] marca;
    std::cout << "Masina distrusa " << std::endl;

}

const char* Masina::GetMarca() const {
    return marca;
}

int Masina::GetAn() const {
    return an;
}

int Masina::GetNumarRoti() const {
    return VehiculNamespace::Vehicul::GetNumarRoti();
}