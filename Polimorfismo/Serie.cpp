#include "Serie.h"

Serie::Serie(std::string tipo, std::string nombre, std::string genre, int calif, int año, int dur, int cantEpi)
    : Video(tipo, nombre, genre, calif, año, dur), cantEpisodios(cantEpi) {}

void Serie::muestraDatos() {
    Video::muestraDatos(); // Llama al método muestraDatos de la clase base
    std::cout << "Cantidad de Episodios: " << cantEpisodios << std::endl;
}