#include <stdio.h>
#include <string.h>
#include "equipos.h"
#include "jugadores.h"

struct playerStruct{
    char nombre[20];
    char apellido[20];
    int codeTeam;
};

Player CrearPlayer(){
    FILE *archivo1=fopen("jugadores.txt","a+");
    char name[20];
    char sName[20];
    Player j=malloc(sizeof(struct playerStruct));
    printf("Ingresar nombre del jugador: ");
    scanf("%s",&name);
    strcpy(j->nombre,name);
    printf("Ingresar apellido del jugador: ");
    scanf("%s",&sName);
    strcpy(j->apellido,sName);
    printf("Ingresar codigo de equipo: ");
    scanf("%d",&j->codeTeam);
    fprintf(archivo1,"---------------\nNombre :%s\nApellido: %s\nCodigo de su equipo: %d\n",j->nombre,j->apellido,j->codeTeam);
    //printf("Ingresar codigo de su equipo: ");
    //scanf("%d",&j->codeTeam);
    return j;
}

void MostrarPlayer(Player j)
{
    printf("Nombre: %s\nApellido: %s\nCodigo equipo: %d\n",j->nombre,j->apellido,j->codeTeam);
}
