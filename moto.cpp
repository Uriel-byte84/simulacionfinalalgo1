#include "moto.h"
#include <iostream>

Moto::Moto(const std::string& color, const std::string& marca, int cilindrada)
    : Vehiculo(color, marca), cilindrada(cilindrada) {
}

Moto::~Moto() {
}

void Moto::arrancar() {
    std::cout << "Moto " << marca << " (" << color << ") de " << cilindrada
              << " cc arrancando... ¡Vruuum!" << std::endl;
}

void Moto::parar() {
    std::cout << "Moto " << marca << " detenida." << std::endl;
}

void Moto::repostar() {
    std::cout << "Moto " << marca << " repostando gasolina..." << std::endl;
}

int Moto::getCilindrada() const {
    return cilindrada;
}

void Moto::mostrar() const {
    std::cout << "Moto [Marca: " << marca << ", Color: " << color
              << ", Cilindrada: " << cilindrada << " cc]" << std::endl;
}