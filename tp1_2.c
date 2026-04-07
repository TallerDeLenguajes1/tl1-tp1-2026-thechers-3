#include <stdio.h>
#include <math.h>

int cuadradoNum;

int main() {

    int num1, num2;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);

    
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    

    return 0;
}

int cuadradoNum (int a)
{
    int b = 2,c;

    c = pow(a,b);

    return c;

}
