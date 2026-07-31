#include "taller.h"
#include <iostream>

Taller::Taller(int max) : max_vehiculos(max), num_vehiculos(0) {
    vehiculos = new Vehiculo*[max_vehiculos];
    for (int i = 0; i < max_vehiculos; ++i)
        vehiculos[i] = nullptr;
    std::cout << "Taller creado con capacidad para " << max_vehiculos << " vehiculos." << std::endl;
}

Taller::~Taller() {
    // En Agregación, el Taller NO destruye los vehículos (delete vehiculos[i]),
    // solo libera su propio arreglo dinámico de punteros.
    delete[] vehiculos;               
    vehiculos = nullptr;
    std::cout << "Taller destruido. Los vehículos siguen existiendo fuera del taller." << std::endl;
}

bool Taller::meter(Vehiculo* v) {
    if (v == nullptr) return false;
    if (num_vehiculos >= max_vehiculos) {
        std::cout << "Taller lleno. No se puede meter mas vehiculos." << std::endl;
        return false;
    }
    vehiculos[num_vehiculos] = v;
    num_vehiculos++;
    std::cout << "Vehiculo metido en el taller. Total actual: " << num_vehiculos << std::endl;
    return true;
}

void Taller::arreglarVehiculos() {
    if (num_vehiculos == 0) {
        std::cout << "No hay vehiculos en el taller para arreglar." << std::endl;
        return;
    }
    std::cout << "\n=== Arreglando vehiculos (arrancando todos) ===" << std::endl;
    for (int i = 0; i < num_vehiculos; ++i) {
        if (vehiculos[i] != nullptr) {
            std::cout << "Arreglando vehiculo " << (i + 1) << ": ";
            vehiculos[i]->arrancar();   // Polimorfismo
        }
    }
    std::cout << "=== Fin del arreglo ===\n" << std::endl;
}

int Taller::getNumVehiculos() const { return num_vehiculos; }
int Taller::getMaxVehiculos() const { return max_vehiculos; }

void Taller::listarVehiculos() const {
    std::cout << "\n--- Vehiculos en el taller (" << num_vehiculos << "/" << max_vehiculos << ") ---" << std::endl;
    for (int i = 0; i < num_vehiculos; ++i) {
        if (vehiculos[i] != nullptr) {
            std::cout << (i + 1) << ". ";
            vehiculos[i]->mostrar();
        }
    }
    std::cout << "--------------------------------------------\n" << std::endl;
}
