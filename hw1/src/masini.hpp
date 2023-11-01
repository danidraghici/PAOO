#pragma once
#include <string>

class Masina {
private:
    char* marca;
    int an;

public:
    Masina(const char* marca, int an);
    Masina(const Masina& masina);
    Masina& operator=(const Masina& masina);
    ~Masina();

    const char* GetMarca() const;
    int GetAn() const;
};