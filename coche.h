#ifndef COCHE_H
#define COCHE_H

#include "vehiculo.h"

class Coche : public Vehiculo {
private:
    int motor;

public:
    Coche(const std::string& color = "", const std::string& marca = "", int motor = 0);
    ~Coche() override;

    void arrancar() override;
    void parar() override;
    void repostar() override;

    int getMotor() const;
    void mostrar() const override;
};

#endif