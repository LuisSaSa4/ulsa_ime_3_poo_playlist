// Interfaz de la clase Playlist.
// Relación: una Playlist USA canciones y podcasts que ya existen (agregación).

#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <string>
#include <vector>

#include "Cancion.h"
#include "Duracion.h"
#include "Podcast.h"

// TODO 4.1: declara la clase Playlist.
class Playlist{
//   Atributos privados: 
    private:
    std::string nombre;
    std::vector<Cancion*> canciones;
    std::vector<Podcast*> podcasts;

//   Constructor: recibe el nombre.
    public:
    Playlist(const std::string& nombre);

    bool agregarCancion(Cancion* cancion);
    bool agregarPodcast(Podcast* podcast);

    int cantidadPistas() const;
    Duracion duracionTotal() const;
    void mostrar() const;
};

//

// Pregunta: la Playlist no tiene destructor que haga delete de las pistas.
// ¿Por qué eso es lo correcto en una agregación?
// Porque la Playlist no es dueña de las canciones ni de los
// podcasts. Solo guarda punteros a objetos que existen fuera de ella.
// Por eso no debe hacer delete de esas pistas.

#endif
