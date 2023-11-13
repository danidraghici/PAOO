#include <iostream>
#include <list>
#include <memory>

template <typename T>
class ManagerVehicule {
public:
    void AdaugaVehicul(std::shared_ptr<T> vehicul);

    void AfiseazaInformatiiVehicule() const {
        for (const auto& vehicul : listaVehicule) {
            std::cout << "Numar roti: " << vehicul->GetNumarRoti()
                      << ", Are motor: " << (vehicul->AreMotor() ? "Da" : "Nu")
                      << std::endl;
        }
    }

    void SorteazaDupaNumarRoti() {
        listaVehicule.sort([](const std::shared_ptr<T>& a, const std::shared_ptr<T>& b) {
            return a->GetNumarRoti() < b->GetNumarRoti();
        });
    }

    std::list<std::shared_ptr<T>>& GetListaVehicule() {
        return listaVehicule;
    }

private:
    std::list<std::shared_ptr<T>> listaVehicule;
};

template <typename T>
void ManagerVehicule<T>::AdaugaVehicul(std::shared_ptr<T> vehicul) {
    listaVehicule.push_back(vehicul);
}