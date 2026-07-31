#include "coche.h"
#include <iostream>

Coche::Coche(const std::string& color, const std::string& marca, int motor)
    : Vehiculo(color, marca), motor(motor) {}

Coche::~Coche() {}

void Coche::arrancar() {
    std::cout << "Coche " << marca << " (" << color << ") con motor " << motor
              << " arrancando... ¡Rrrrúm!" << std::endl;
}

void Coche::parar() {
    std::cout << "Coche " << marca << " detenido." << std::endl;
}

void Coche::repostar() {
    std::cout << "Coche " << marca << " repostando gasolina..." << std::endl;
}

int Coche::getMotor() const { return motor; }

void Coche::mostrar() const {
    std::cout << "Coche [Marca: " << marca << ", Color: " << color
              << ", Motor: " << motor << "]" << std::endl;
}