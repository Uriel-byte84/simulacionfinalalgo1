# simulacionfinalalgo1
# Sistema de Gestión de Taller de Vehículos (C++ / POO)

Proyecto en C++ desarrollado para la materia de Programación Orientada a Objetos. El sistema modela el funcionamiento de un **Taller** que administra, recibe y repara distintos tipos de **Vehículos** (`Coche` y `Moto`) utilizando conceptos fundamentales de POO como **Herencia**, **Polimorfismo** y **Agregación**.

---

## 📐 Diseño y Diagrama UML

```text
+--------------------------------------------------+
|                   Vehiculo                       |  <--- (Clase Abstracta)
+--------------------------------------------------+
| # color : string                                 |
| # marca : string                                 |
+--------------------------------------------------+
| + Vehiculo(color: string, marca: string)         |
| + ~Vehiculo()                                    |
| + arrancar() = 0 : void                          |
| + parar() = 0 : void                             |
| + repostar() = 0 : void                          |
| + getColor() : string                            |
| + getMarca() : string                            |
| + mostrar() : void                               |
+--------------------------------------------------+
          ^                              ^
          | (Herencia)                   | (Herencia)
          |                              |
+-------------------+          +-------------------+
|       Coche       |          |       Moto        |
+-------------------+          +-------------------+
| - motor : int     |          | - cilindrada : int|
+-------------------+          +-------------------+
| + Coche(...)      |          | + Moto(...)       |
| + ~Coche()        |          | + ~Moto()         |
| + arrancar()      |          | + arrancar()      |
| + parar()         |          | + parar()         |
| + repostar()      |          | + repostar()      |
| + getMotor() : int|          | +getCilindrada():int
| + mostrar()       |          | + mostrar()       |
+-------------------+          +-------------------+
          ^
          | 
          |  ◇ (Agregación: Rombo Blanco)
          |  1..* 
+--------------------------------------------------+
|                     Taller                       |
+--------------------------------------------------+
| - max_vehiculos : int                            |
| - num_vehiculos : int                            |
| - vehiculos : Vehiculo**                         |
+--------------------------------------------------+
| + Taller(max: int)                               |
| + ~Taller()                                      |
| + meter(v: Vehiculo*) : bool                     |
| + arreglarVehiculos() : void                     |
| + getNumVehiculos() : int                        |
| + getMaxVehiculos() : int                        |
| + listarVehiculos() : void                       |
+--------------------------------------------------+
---

## 🛠️ Estructura del Código

```text
.
├── main.cpp         # Punto de entrada de la aplicación y pruebas
├── vehiculo.h/cpp   # Clase base abstracta Vehiculo
├── coche.h/cpp      # Subclase Coche
├── moto.h/cpp       # Subclase Moto
└── taller.h/cpp     # Clase contenedora Taller (Agregación)
