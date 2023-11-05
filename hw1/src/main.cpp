#include "masini.hpp"
#include <iostream>

int main() {
    MasinaNamespace::Masina masina("Masina1", 2020, 4, true);

    MasinaNamespace::Masina masina2 = masina; // Copy constructor

    MasinaNamespace::Masina masina3("Masina2", 2019, 4, true);
    masina3 = masina; // Assignment operator


    std::cout << "Masina: " << masina.GetMarca() << ", An: " << masina.GetAn() << ", Numar roti: " << masina.GetNumarRoti() << ", are motor: " << masina.AreMotor() << std::endl;
    
    MasinaNamespace::Masina masina4 = std::move(masina);
    std::cout << "Masina: " << masina4.GetMarca() << ", An: " << masina4.GetAn() << ", Numar roti: " << masina4.GetNumarRoti() << ", are motor: " << masina4.AreMotor() << std::endl;

    return 0;
}