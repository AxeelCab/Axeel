#include <stdio.h>
#include "equipos.h"
#include "jugadores.h"
int cEquipos=1;
Equipo team[20];
int consultaPlayer()
{
    int opt;
    printf("Desea continuar agregando jugadores?\n1-Si\n2-No\nRespuesta:");
    fflush(stdin);
    scanf("%d",&opt);
    switch(opt)
    {
        case 0:break;
        case 1:return 1;
        case 2:return 2;
        default:consultaPlayer();
    }
}
void CreateEquipo()
{
    team[cEquipos]=CrearEquipo();
    cEquipos++;
}
void ConsultaTeam()
{
    int opt;
    printf("Seleccione su equipo en la Lista:\n");
    for(int i=1 ;i<cEquipos;i++)
    {
        printf("%d - %s\n",i,GetNombre(team[i]));
    }
    scanf("%d",&opt);
    system("cls");
    printf("---Jugador Banfield---\n");
    AgregarPlayer(team[opt]);
    while (consultaPlayer()==1)
    {
        system("cls");
        printf("---Jugador Banfield---\n");
        AgregarPlayer(team[opt]);
    }
        Menu();

}

void ShowEquipos()
{
    int i;
    for(i=1;i<cEquipos;i++)
    {
        MostrarEquipo(team[i]);
    }
}
void Menu()
{
    int opt;
    printf("------Menu------\n1-Crear Equipo\n2-Agregar Jugador\n3-Mostrar Equipos\nRespuesta: ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 0:break;
        case 1:CreateEquipo();break;
        case 2:ConsultaTeam();break;
        case 3:ShowEquipos();
    }
    Menu();
}
int main()
{
    Menu();
    return 0;
}
