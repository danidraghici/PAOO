#pragma once
#include "ivehicul.hpp"

namespace VehiculNamespace {
    
    class Vehicul : public IVehicul {
    private:
        bool motor;
        int numarRoti;

    public:
        Vehicul(bool areMotor, int numarRoti);
        int GetNumarRoti() const override;
        void SetNumarRoti(int numarRoti);
        bool AreMotor() const;
        void SetMotor(bool areMotor);
    };
}