#include <stdio.h>
#include "equipos.h"
int consulta()
{
    int opt;
    printf("Desea continuar agregando jugadores?\n1-Si\n2-No");
    scanf("%d",&opt);
    switch(opt)
    {
        case 0:break;
        case 1:return 1;
        case 2:return 2;
        default:consulta();
    }
}
int main()
{
    Equipo banfield=CrearEquipo();
    int a=1;
    while(a==1)
    {
        AgregarPlayer(banfield);
        a = consulta();
    }
    MostrarEquipo(banfield);
    return 0;
}
