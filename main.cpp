#include <iostream>
#include "taller.h"
#include "coche.h"
#include "moto.h"

int main() {
    Taller miTaller(5);

    Coche* c1 = new Coche("Rojo", "Toyota", 1600);
    Coche* c2 = new Coche("Azul", "Ford", 2000);
    Moto*  m1 = new Moto("Negra", "Yamaha", 250);
    Moto*  m2 = new Moto("Blanca", "Honda", 125);

    miTaller.meter(c1);
    miTaller.meter(c2);
    miTaller.meter(m1);
    miTaller.meter(m2);

    miTaller.listarVehiculos();
    miTaller.arreglarVehiculos();   // Arranca todos polimórficamente

    Coche* c3 = new Coche("Verde", "Renault", 1400);
    miTaller.meter(c3);

    miTaller.listarVehiculos();

    // Intento de meter cuando está lleno
    Moto* m3 = new Moto("Roja", "Kawasaki", 600);
    if (!miTaller.meter(m3))
        delete m3;   // No se metió → liberamos nosotros

    // Al salir, el destructor de Taller libera automáticamente
    // c1, c2, m1, m2 y c3 (composición)
    return 0;
}