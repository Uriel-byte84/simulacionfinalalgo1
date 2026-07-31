#ifndef TALLER_H
#define TALLER_H

#include "vehiculo.h"

class Taller {
private:
    int max_vehiculos;
    int num_vehiculos;
    Vehiculo** vehiculos;   // Arreglo dinámico de punteros (agregación)

public:
    Taller(int max);
    ~Taller();              // Libera únicamente el arreglo de punteros

    bool meter(Vehiculo* v);           // Introduce coche o moto
    void arreglarVehiculos();          // Recorre y llama a arrancar()

    int getNumVehiculos() const;
    int getMaxVehiculos() const;
    void listarVehiculos() const;
};

#endif
