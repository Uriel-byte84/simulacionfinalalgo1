#include "vehiculo.h"

Vehiculo::Vehiculo(const std::string& color, const std::string& marca)
    : color(color), marca(marca) {}

Vehiculo::~Vehiculo() {}

std::string Vehiculo::getColor() const { return color; }
std::string Vehiculo::getMarca() const { return marca; }

void Vehiculo::mostrar() const {
    std::cout << "Vehiculo [Marca: " << marca << ", Color: " << color << "]" << std::endl;
}