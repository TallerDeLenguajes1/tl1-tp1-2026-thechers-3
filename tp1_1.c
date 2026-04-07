#include <stdio.h>

int main () {

       printf("Hola mundo\n");

     int num;
        int *puntNum;

        puntNum = &num;
    
        num = 4;

    printf("Contenido del puntero: %d\n", *puntNum);
    printf("Direccion de memoria almacenada por el puntero: %p\n", puntNum);
    printf("Direccion de memoria de la variable: %p\n", &num);
    printf("Direccion de memoria de puntero: %p\n", &puntNum);
    printf("Tamanio de memoria utilizado por la variable: %d\n", sizeof(num));
    
    
    return 0;
}