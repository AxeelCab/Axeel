#ifndef EQUIPOS_H_INCLUDED
#define EQUIPOS_H_INCLUDED

struct equipoEstructura;
typedef struct equipoEstructura *Equipo;

Equipo CrearEquipo();
void MostrarEquipo(Equipo e);
void AgregarPlayer(Equipo e);

#endif // EQUIPOS_H_INCLUDED
