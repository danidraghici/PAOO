#pragma once
#include "vehicul.hpp"
#include <string>

namespace MasinaNamespace {
    class Masina : public VehiculNamespace::Vehicul {
    private:
        char* marca;
        int an;
        

    public:
        Masina(const char* marca, int an, int numarRoti, bool areMotor);
        Masina(const Masina& masina);
        Masina& operator=(const Masina& masina);
        Masina(Masina&& masina) noexcept;
        ~Masina();

        const char* GetMarca() const;
        int GetAn() const;
        int GetNumarRoti() const override; // Implementarea metodei virtuale
    };
}