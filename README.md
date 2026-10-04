# Práctica 1: Playlist de música

Programación Orientada a Objetos · Ingeniería Mecatrónica · Tercer semestre

Llena cada espacio conforme avances en las fases de [PRACTICA.md](PRACTICA.md).

<br>

## Fase 1. Entender el problema

**1.1 El problema con mis propias palabras**

Tengo que realizar un codigo orientado a objetos que pueda organizar canciones y podcast dentro de una playlist. Cada cancion y podcast tiene un titulo y una duracion pero las canciones solo tienen artista y genero y para cada podcast le corresponde un anfitrion y un numero de episodios. Al final segun lo almazenado en la playlist esta podra mostrar las pistas que exixsten y la duracion total de contenido disponible dentro de la playlist.

**1.2 Sustantivos (posibles clases) y verbos (posibles métodos)**

**Sustantivos:** Cancion, pista, duracion, playlist, artista, genero, anfitrion, episodios

**Verbos:** Crear, agregar, calcular, obtener, cambiar, mostrar, imprimir, contar

**1.3 Relaciones** (completa con "es un", "tiene un" o "usa un")

*   Una canción es una pista.
*   Un podcast es una pista.
*   Una pista tiene una duración.
*   Una playlist tiene usa una canción (podcast).

<br>

## Fase 2. Diseñar la solución

**2.1 Diagrama de clases**

![Diagrama de clases](./img/DiagramaClases.png)

**2.2 Justificación de cada relación**

| Relación | Tipo | ¿Por qué? |
| --- | --- | --- |
| Cancion - Pista | Herencia | Una cancion es una pista por que comparte los datos de la pista (titulo y duracion).|
| Podcast - Pista | Herencia | Un podcast es una pista por que comparte los datos de la pista (titulo y duracion). |
| Pista - Duracion | Composicion | Toda pista tiene una duracion, en este caso una cancion y un podcast tiene una cantidad de segundos y minutos. |
| Playlist - Cancion | Agregacion | La playlist utiliza canciones para crearse o formarse.  |
| Playlist - Podcast | Agreagacion | La playlist tambien utiliza podcast para crearse y formarse. |

<br>

## Fase 3. Implementar

**3.1 Bitácora de dudas**

| # | Duda | Cómo la resolví | Fuente |
| --- | --- | --- | --- |
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |
| 3 | _____ | _____ | _____ |

**3.2 Experimentos guiados**

Experimento 1, orden de construcción y destrucción: _____

Experimento 2, ¿quién es dueño de quién?: _____

Experimento 3, un objeto en dos playlists: _____

<br>

## Fase 4. Probar y mejorar

**4.1 Tabla de pruebas**

| # | Caso | Resultado esperado | Resultado obtenido | ¿Pasa? |
| --- | --- | --- | --- | --- |
| 1 | Duración normal `Duracion(3, 45)` | 3:45 | _____ | _____ |
| 2 | Segundos mayores a 59 `Duracion(0, 75)` | 1:15 | _____ | _____ |
| 3 | Valores negativos `Duracion(-2, 10)` | 0:00 | _____ | _____ |
| 4 | Título vacío | "Sin título" | _____ | _____ |
| 5 | Playlist vacía | 0:00 y 0 pistas | _____ | _____ |
| 6 | Canción duplicada | La segunda vez devuelve `false` | _____ | _____ |
| 7 | Puntero nulo | Devuelve `false` | _____ | _____ |
| 8 | Total con 2 canciones y 1 podcast | Suma correcta en m:ss | _____ | _____ |

**4.2 Bitácora de mejoras**

| # | Falla o mejora detectada | Qué cambié | Por qué |
| --- | --- | --- | --- |
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

Retos opcionales que intenté: _____

<br>

## Fase 5. Publicar en GitHub

**5.1 Enlace a mi fork**

[Inserta aquí el enlace a tu fork]

<br>

## Cierre y reflexión

**6.1 ¿Qué aprendiste en esta práctica?**

[Inserta aquí tu respuesta]

**6.2 ¿Qué cambiarías de tu proceso la próxima vez?**

[Inserta aquí tu respuesta]