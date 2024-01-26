#include "Pelicula.h"
#include "Serie.h"

int main() {
    Pelicula pelicula1("Película", "El Origen", "Ciencia Ficción", 0, 2010, 148, 3);
    Pelicula pelicula2("Película", "Titanic", "Romance", 0, 1997, 195, 11);
    Pelicula pelicula3("Película", "El Señor de los Anillos", "Fantasía", 0, 2001, 178, 17);

    Serie serie1("Serie", "Stranger Things", "Drama", 0, 2016, 50, 25);
    Serie serie2("Serie", "Breaking Bad", "Drama", 0, 2008, 49, 62);

    std::cout << "Reporte de Películas:" << std::endl;
    pelicula1.muestraDatos();
    pelicula2.muestraDatos();
    pelicula3.muestraDatos();

    std::cout << "Reporte de Series:" << std::endl;
    serie1.muestraDatos();
    serie2.muestraDatos();

    return 0;
}