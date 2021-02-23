#include <stdio.h>
void Imprimir(int *ptr, int n){
    for(int i=0; i<n;i++){
        printf(" %d ",ptr[i]);
    }
    printf("\n");
}

char key;
int tamanio=0, N=0, A=0;
int main(void){
    printf("Ingrese el tamaño del arreglo \n");
    scanf("%d", &tamanio);
    scanf("%c",&key);
    int Arreglo[tamanio];
    for(int i=0; i<tamanio; i++){
        printf("Ingrese el elemento %d de arreglo\n",(i+1));
        scanf("%d",&Arreglo[i]);
        scanf("%c",&key);
    }
    Imprimir(Arreglo, tamanio);
    do{
    printf("Ahora cambiemos el numero del arreglo, escribe la posicion del numero a cambiar\n");
    scanf("%d",&N);
    scanf("%c",&key);
    }while(N<1 || N>tamanio);
    printf("Ingrese el numero que desea \n");
    scanf("%d",&A);
    scanf("%c",&key);
    Arreglo[N-1] = A;
    Imprimir(Arreglo, tamanio);


    return 0;
}