#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>

class Vehiculo {
protected:
    std::string color;
    std::string marca;

public:
    Vehiculo(const std::string& color = "", const std::string& marca = "");
    virtual ~Vehiculo();                    // Destructor virtual (imprescindible)

    // Métodos virtuales puros → clase abstracta
    virtual void arrancar() = 0;
    virtual void parar() = 0;
    virtual void repostar() = 0;

    std::string getColor() const;
    std::string getMarca() const;
    virtual void mostrar() const;
};

#endif