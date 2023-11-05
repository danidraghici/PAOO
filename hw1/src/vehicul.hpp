#pragma once
#include "ivehicul.hpp"

namespace VehiculNamespace {
    
    class Vehicul : public IVehicul {
    private:
        bool motor;

    public:
        Vehicul(bool areMotor);
        virtual int GetNumarRoti() const = 0; // metoda pur virtuala (nu are implementare concreta)
        bool AreMotor() const;
        void SetMotor(bool areMotor);
    };
}