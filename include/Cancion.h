// Interfaz de la clase Cancion.
// Relación: una Cancion ES UNA Pista (herencia).

#ifndef CANCION_H
#define CANCION_H

#include <string>

#include "Pista.h"

// TODO 3.1: declara la clase Cancion derivada de Pista con herencia pública.
//   Atributos privados: artista, genero.
class Cancion : public Pista{
    private:
    std::string artista;
    std::string genero;

    public:
//   Constructor: recibe titulo, min, seg, artista y genero.
    Cancion(const std::string& titulo, int min, int seg, const std::string& artista, const std::string& genero);

//   Accedentes const: getArtista(), getGenero().
    std::string getArtista() const;
    std::string getGenero() const;

//   void mostrar() const;
    void mostrar() const;
};

// Pregunta: ¿puede Cancion leer directamente el atributo titulo de Pista?
// ¿Por qué sí o por qué no?
// No, el atributo titulo es private en Pista, por lo que
// Cancion no puede acceder directamente a él. Debe utilizar métodos
// públicos de Pista, como getTitulo().


#endif
