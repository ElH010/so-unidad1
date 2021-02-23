//name dentro del enter

//#include <stdio.h>

//int main(void)
//{
  //  char name[40];
    //printf("What's your name? ");
    //if (fgets(name, 40, stdin))
    //{
     //   printf("Hello %s!\n", name);
    //}
//}

//solucion a este problema con strcspn

#include <stdio.h>
#include <string.h>

int main(void){
    char name[40];
    printf("Como te llamas?\n");
    if(fgets(name,40,stdin)){
        name[strcspn(name, "\n")] =0;
        printf("Hola %s!\n", name);
    }
}