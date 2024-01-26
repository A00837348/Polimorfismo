#include "Pelicula.h"

Pelicula::Pelicula(std::string tipo, std::string nombre, std::string genre, int calif, int año, int dur, int nom)
    : Video(tipo, nombre, genre, calif, año, dur), nominaciones(nom) {}

void Pelicula::muestraDatos() {
    Video::muestraDatos(); // Llama al método muestraDatos de la clase base
    std::cout << "Nominaciones: " << nominaciones << std::endl;
}