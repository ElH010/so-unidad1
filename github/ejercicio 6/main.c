#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Materia
{
    char nombre[20];
    int creditos;
    float nota;
};

int main (void){
    int cantMaterias=0;
    printf("Ingrese el numero de materias cursadas \n");
    scanf("%d", &cantMaterias);

    struct Materia materias[cantMaterias];
    float Sum=0, SumCred=0, Prom=0;
    for(int j=0; j<cantMaterias; j++){
        printf("ingrese el valor de creditos de la materia, su calificacion y el nombre de la materia  (ejemplo: 3-4.0-Sistemas Operativos)\n");
        scanf("%d-%f-%s",&materias[j].creditos,&materias[j].nota,materias[j].nombre);
    }
    for(int j=0; j<cantMaterias; j++){
    Sum = Sum + (materias[j].nota*materias[j].creditos);
    SumCred = SumCred + materias[j].creditos;
    }
    printf("%20s | %10s | %10s \n","Materia","Creditos","Nota");
    for(int j=0; j<cantMaterias;j++){
      printf("%20s | %10d | %10.2f\n",materias[j].nombre,materias[j].creditos,materias[j].nota);
    }
    Prom = Sum/SumCred;
    printf("\nEl promedio de las notas obtenidas es: %f\n", Prom);

    return 0;
}