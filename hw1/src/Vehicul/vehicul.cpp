#include "vehicul.hpp"
using namespace VehiculNamespace;

Vehicul::Vehicul(bool areMotor) : motor(areMotor) {
    }

    bool Vehicul::AreMotor() const {
        return motor;
    }

    void  Vehicul::SetMotor(bool areMotor) {
        motor = areMotor;
    }