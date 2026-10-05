// Interfaz de la clase Podcast.
// Relación: un Podcast ES UNA Pista (herencia).

#ifndef PODCAST_H
#define PODCAST_H

#include <string>

#include "Pista.h"

// TODO 3.2: declara la clase Podcast derivada de Pista con herencia pública.
//   Atributos privados: anfitrion, numeroEpisodio.
class Podcast:public Pista{
    private:
    int numeroEpisodio;
    std::string anfitrion;

//   Constructor, accedentes const y  void mostrar() const;
    public:
    Podcast(const std::string& titulo, int min, int seg, const std::string& anfitrion, int numeroEpisodio);
    
    std::string getAnfitrion() const;
    int getEpisodio() const;

    void mostrar() const;
};


//   Siguiendo el mismo patrón que Cancion.
//
// Pregunta: ¿qué código te ahorraste gracias a la herencia?
// Se ahorro volver a declarar y programar los atributos
// y métodos que Podcast hereda de Pista, como titulo, duracion,
// getTitulo(), getDuracion(), setTitulo() y mostrarInfo().

#endif
