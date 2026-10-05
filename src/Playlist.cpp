// Implementación de la clase Playlist.

#include "Playlist.h"

#include <iostream>

// TODO 4.1: implementa el constructor de Playlist.
Playlist::Playlist(const std::string& nombre)
    : nombre(nombre)
{
}
// TODO 4.2: implementa  bool Playlist::agregarCancion(Cancion* cancion)
//   Devuelve false si el puntero es nullptr o si la canción ya está en la
//   playlist; en otro caso la agrega y devuelve true.
bool Playlist::agregarCancion(Cancion* cancion)
{
    if (cancion == nullptr)
    {
        return false;
    }

    for (Cancion* c : canciones)
    {
        if (c == cancion)
        {
            return false;
        }
    }

    canciones.push_back(cancion);
    return true;
}


// TODO 4.3: implementa  bool Playlist::agregarPodcast(Podcast* podcast)
//   Mismas reglas que agregarCancion.
bool Playlist::agregarPodcast(Podcast* podcast)
{
    if (podcast == nullptr)
    {
        return false;
    }

    for (Podcast* p : podcasts)
    {
        if (p == podcast)
        {
            return false;
        }
    }

    podcasts.push_back(podcast);
    return true;
}

// TODO 4.4: implementa  int Playlist::cantidadPistas() const
int Playlist::cantidadPistas() const
{
    return canciones.size() + podcasts.size();
}


// TODO 4.5: implementa  Duracion Playlist::duracionTotal() const
//   Suma los segundos de todas las pistas y devuelve una Duracion.
Duracion Playlist::duracionTotal() const
{
    int total = 0;

    for (Cancion* cancion : canciones)
    {
        total += cancion->getDuracion().totalSegundos();
    }

    for (Podcast* podcast : podcasts)
    {
        total += podcast->getDuracion().totalSegundos();
    }

    return Duracion(0, total);
}


// TODO 4.6: implementa  void Playlist::mostrar() const
//   Imprime el nombre, cada pista, la cantidad de pistas y la duración total.
void Playlist::mostrar() const
{
    std::cout << "Playlist: " << nombre << std::endl;

    std::cout << "\nCanciones:" << std::endl;

    for (Cancion* cancion : canciones)
    {
        cancion->mostrar();
    }

    std::cout << "\nPodcasts:" << std::endl;

    for (Podcast* podcast : podcasts)
    {
        podcast->mostrar();
    }

    std::cout << "\nCantidad de pistas: "
              << cantidadPistas() << std::endl;

    std::cout << "Duracion total: ";
    duracionTotal().imprimir();
    std::cout << std::endl;
}

// Implementación del Reto Opcional: Pista más larga y más corta
void Playlist::mostrarMasLargaYCorta() const {
    if (cantidadPistas() == 0) {
        std::cout << "La playlist esta vacia. No hay pistas para comparar." << std::endl;
        return;
    }

    Pista* masLarga = nullptr;
    int maxSegundos = -1;

    Pista* masCorta = nullptr;
    int minSegundos = 999999;

    // Buscar en canciones
    for (Cancion* cancion : canciones) {
        int segs = cancion->getDuracion().totalSegundos();
        if (segs > maxSegundos) {
            maxSegundos = segs;
            masLarga = cancion;
        }
        if (segs < minSegundos) {
            minSegundos = segs;
            masCorta = cancion;
        }
    }

    // Buscar en podcasts
    for (Podcast* podcast : podcasts) {
        int segs = podcast->getDuracion().totalSegundos();
        if (segs > maxSegundos) {
            maxSegundos = segs;
            masLarga = podcast;
        }
        if (segs < minSegundos) {
            minSegundos = segs;
            masCorta = podcast;
        }
    }

    std::cout << "--- Estadisticas de duracion ---" << std::endl;
    std::cout << "Pista mas larga: " << std::endl;
    if (masLarga != nullptr) masLarga->mostrarInfo();

    std::cout << "Pista mas corta: " << std::endl;
    if (masCorta != nullptr) masCorta->mostrarInfo();
}