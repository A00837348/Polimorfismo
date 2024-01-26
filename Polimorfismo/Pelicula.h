#ifndef PELICULA_H
#define PELICULA_H
#include "Video.h"

class Pelicula : public Video {
private:
    int nominaciones;

public:
    Pelicula(std::string tipo, std::string nombre, std::string genre, int calif, int año, int dur, int nom);
    void muestraDatos() override;
};
