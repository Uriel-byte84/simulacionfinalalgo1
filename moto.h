#ifndef MOTO_H
#define MOTO_H

#include "vehiculo.h"

class Moto : public Vehiculo {
private:
    int cilindrada;

public:
    Moto(const std::string& color = "", const std::string& marca = "", int cilindrada = 0);
    ~Moto() override;

    void arrancar() override;
    void parar() override;
    void repostar() override;

    int getCilindrada() const;
    void mostrar() const override;
};

#endif