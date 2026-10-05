// Práctica 1: Playlist de música
// Programación Orientada a Objetos - Ingeniería Mecatrónica, 3er semestre
//
// Compilar (desde la raíz del repositorio):
//   g++ -Wall -Wextra -std=c++17 -Iinclude src/*.cpp -o playlist
// Ejecutar:
//   ./playlist
//
// Completa los TODO en el orden que indica la Fase 3 de PRACTICA.md.
// Compila después de terminar cada clase, no hasta el final.

#include <iostream>

#include "Playlist.h"

int main() {
    std::cout << "Practica 1: Playlist de musica" << std::endl;
    std::cout << "Plantilla lista. Completa los TODO de include/ y src/." << std::endl;

    // TODO 5.1: crea la biblioteca: al menos tres canciones y un podcast.
Cancion cancion1(
        "Believer",
        3,
        45,
        "Imagine Dragons",
        "Rock"
    );

    Cancion cancion2(
        "Numb",
        3,
        5,
        "Linkin Park",
        "Rock"
    );

    Cancion cancion3(
        "Viva la Vida",
        4,
        2,
        "Coldplay",
        "Pop Rock"
    );

    Podcast podcast1(
        "Historia de Mexico",
        45,
        30,
        "Juan Perez",
        12
    );



    // TODO 5.2: crea dos playlists y agrega pistas a cada una.
    //   Al menos una canción debe estar en las dos playlists.
 Playlist playlist1("Favoritas");
    Playlist playlist2("Para estudiar");

    playlist1.agregarCancion(&cancion1);
    playlist1.agregarCancion(&cancion2);
    playlist1.agregarPodcast(&podcast1);

    playlist2.agregarCancion(&cancion1);
    playlist2.agregarCancion(&cancion3);

    // TODO 5.3: muestra ambas playlists.

    std::cout << "\n=============================" << std::endl;
    std::cout << "PLAYLIST 1" << std::endl;
    std::cout << "=============================" << std::endl;

    playlist1.mostrar();

    std::cout << "\n=============================" << std::endl;
    std::cout << "PLAYLIST 2" << std::endl;
    std::cout << "=============================" << std::endl;

    playlist2.mostrar();


    // TODO 5.4: experimentos guiados de la Fase 3.
std::cout << "\n=============================" << std::endl;
    std::cout << "EXPERIMENTOS GUIADOS" << std::endl;
    std::cout << "=============================" << std::endl;

    // Experimento 1: orden de construcción y destrucción.
    {
        Cancion prueba1("Prueba 1", 1, 0, "Artista", "Rock");
        Podcast prueba2("Prueba 2", 2, 0, "Anfitrion", 1);

        std::cout << "Experimento 1 realizado." << std::endl;
    }

    // Experimento 2: ¿quién es dueño de quién?
    Playlist playlist3("Prueba de agregacion");
    playlist3.agregarCancion(&cancion1);

    std::cout << "Experimento 2 realizado." << std::endl;

    // Experimento 3: un objeto en dos playlists.
    std::cout << "La cancion '" << cancion1.getTitulo()
              << "' esta en playlist 1 y playlist 2." << std::endl;



    // TODO 5.5: casos de prueba de la Fase 4.
std::cout << "\n=============================" << std::endl;
    std::cout << "CASOS DE PRUEBA" << std::endl;
    std::cout << "=============================" << std::endl;

    // 1. Duracion normal.
    Duracion pruebaDuracion1(3, 45);

    std::cout << "1. Duracion normal: ";
    pruebaDuracion1.imprimir();
    std::cout << std::endl;


    // 2. Segundos mayores a 59.
    Duracion pruebaDuracion2(0, 75);

    std::cout << "2. Segundos mayores a 59: ";
    pruebaDuracion2.imprimir();
    std::cout << std::endl;


    // 3. Valores negativos.
    Duracion pruebaDuracion3(-2, 10);

    std::cout << "3. Valores negativos: ";
    pruebaDuracion3.imprimir();
    std::cout << std::endl;


    // 4. Titulo vacio.
    Cancion pruebaTitulo("", 2, 30, "Artista", "Rock");

    std::cout << "4. Titulo vacio: ";
    std::cout << pruebaTitulo.getTitulo() << std::endl;


    // 5. Playlist vacia.
    Playlist playlistVacia("Playlist vacia");

    std::cout << "5. Playlist vacia:" << std::endl;
    std::cout << "   Pistas: "
              << playlistVacia.cantidadPistas() << std::endl;
    std::cout << "   Duracion: ";
    playlistVacia.duracionTotal().imprimir();
    std::cout << std::endl;


    // 6. Cancion duplicada.
    Playlist pruebaDuplicado("Prueba duplicados");

    bool primera = pruebaDuplicado.agregarCancion(&cancion1);
    bool segunda = pruebaDuplicado.agregarCancion(&cancion1);

    std::cout << "6. Cancion duplicada:" << std::endl;
    std::cout << "   Primera vez: " << primera << std::endl;
    std::cout << "   Segunda vez: " << segunda << std::endl;


    // 7. Puntero nulo.
    bool resultadoNulo = pruebaDuplicado.agregarCancion(nullptr);

    std::cout << "7. Puntero nulo: "
              << resultadoNulo << std::endl;

              
    // 8. Total con 2 canciones y 1 podcast.
    Playlist pruebaTotal("Prueba de duracion total");

    pruebaTotal.agregarCancion(&cancion1);
    pruebaTotal.agregarCancion(&cancion2);
    pruebaTotal.agregarPodcast(&podcast1);

    std::cout << "8. Total con 2 canciones y 1 podcast: ";
    pruebaTotal.duracionTotal().imprimir();
    std::cout << std::endl;

    return 0;
}


