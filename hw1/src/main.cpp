#include "masini.hpp"
#include <iostream>

int main() {
    Masina masina("Masina1", 2020);

    Masina masina2 = masina; // Copy constructor

    Masina masina3("Masina2", 2019);
    masina3 = masina; // Assignment operator


    std::cout << "Masina: " << masina.GetMarca() << ", An: " << masina.GetAn() << std::endl;

    return 0;
}