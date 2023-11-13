#include "vehicul.hpp"
using namespace VehiculNamespace;

Vehicul::Vehicul(bool areMotor, int numarRoti) : motor(areMotor), numarRoti(numarRoti) {
    }

    bool Vehicul::AreMotor() const {
        return motor;
    }

    void  Vehicul::SetMotor(bool areMotor) {
        motor = areMotor;
    }

    int Vehicul::GetNumarRoti() const {
    return numarRoti;
    }

     void  Vehicul::SetNumarRoti(int numarRoti) {
        numarRoti = numarRoti;
    }