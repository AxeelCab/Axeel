#include <stdio.h>
#include <string.h>
#include "equipos.h"
#include "jugadores.h"

struct equipoEstructura
{
    char nombre[20];
    int code;
    int cHinchas;
    Player jugadores[50];
    int cJugadores;
}equipo[10];

Equipo CrearEquipo()
{
    system("cls");
    FILE *archivo2=fopen("equipos.txt","a+");
    Equipo e=malloc(sizeof(struct equipoEstructura));
    char name[20];
    printf("-------Menu crear nuevo equipo-------\n");
    printf("Ingrese nombre del equipo: ");
    scanf("%s",&name);
    strcpy(e->nombre,name);
    printf("Ingresar codigo de equipo: ");
    scanf("%d",&e->code);
    printf("Ingresar cantidad de hinchas: ");
    scanf("%d",&e->cHinchas);
    fprintf(archivo2,"Nombre: %s\nCodigo: %d\nSocios: %d\n",e->nombre,e->code,e->cHinchas);
    fclose(archivo2);
    e->cJugadores=0;
    return e;
}

void MostrarEquipo(Equipo e)
{
    int i;
    printf("-----Equipo %s-----\n",e->nombre);
    if(e->cJugadores==0)
    {
        printf("Sin jugadores registrados\n");
    }
    for(i=0;i<e->cJugadores;i++)
    {
        printf("-Jugador %d:-\n",i+1);
        MostrarPlayer(e->jugadores[i]);
        //printf("-----\nNombre: %s\nCodigo: %d\nHinchas: %d\n",e->nombre,e->code,e->cHinchas);
    }
    printf("-------------------------\n");
}

void GetNombre(Equipo e)
{
    return e->nombre;
}

void AgregarPlayer(Equipo e)
{
    e->jugadores[e->cJugadores]=CrearPlayer();
    e->cJugadores++;
}
