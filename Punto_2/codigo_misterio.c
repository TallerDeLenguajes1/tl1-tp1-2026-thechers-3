#include <stdio.h>

void invertirNumero(int *p) {
    int num = *p;
    int aux = 0;
    while (num > 0) {
        aux = (aux * 10) + (num % 10);
        num = num / 10;
    }
    *p = aux;
}

void dividirInvertido(int *p) {
    *p = *p / 2;
}

void sumaDigitos(int *p) {
    int num = *p;
    int suma = 0;
    while (num > 0) {
        suma = suma + (num % 10);
        num = num / 10;
    }
    *p = *p + suma;
}

void procesar_datos(int *valor_referencia) {
    invertirNumero(valor_referencia);
    dividirInvertido(valor_referencia);
    sumaDigitos(valor_referencia);
}

int main() {
    int numero = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", numero);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_datos(&numero);
    
    printf("Resultado final del enigma: %d\n", numero);
    
    return 0;
}