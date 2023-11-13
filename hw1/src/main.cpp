#include "masini.hpp"
#include "manager_vehicul.hpp"
#include <list>
#include <iostream>
#include <memory>   


int main() {

    ManagerVehicule<IVehicul> managerVehicul;

    std::unique_ptr<MasinaNamespace::Masina> masinaUnique = std::make_unique<MasinaNamespace::Masina>("Masina1", 2020, 4, true);
    managerVehicul.AdaugaVehicul(std::shared_ptr<MasinaNamespace::Masina>(std::move(masinaUnique)));

    std::unique_ptr<MasinaNamespace::Masina> masinaUnique2 = std::make_unique<MasinaNamespace::Masina>("Masina2", 2019, 4, true);
    managerVehicul.AdaugaVehicul(std::shared_ptr<MasinaNamespace::Masina>(std::move(masinaUnique2)));

    std::unique_ptr<VehiculNamespace::Vehicul> vehiculUnique = std::make_unique<VehiculNamespace::Vehicul>(false, 2);
    managerVehicul.AdaugaVehicul(std::shared_ptr<VehiculNamespace::Vehicul>(std::move(vehiculUnique)));

    managerVehicul.SorteazaDupaNumarRoti();
    managerVehicul.AfiseazaInformatiiVehicule();

    MasinaNamespace::Masina masina("Masina1", 2020, 4, true);

    MasinaNamespace::Masina masina2 = masina; // Copy constructor

    MasinaNamespace::Masina masina3("Masina2", 2019, 4, true);
    masina3 = masina; // Assignment operator

    MasinaNamespace::Masina masina4 = std::move(masina); // Move constructor
    
    return 0;
}