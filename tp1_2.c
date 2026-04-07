#include <stdio.h>
#include <math.h>

int cuadradoNum(int a);
void cuadNum(int a);
void Invertir(int a, int b);
void orden(int a, int b);

int main() {

    int num1, num2;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);

    
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    Invertir(num1,num2);
    orden(num1,num2);



    return 0;
}

int cuadradoNum (int a)
{
    int b = 2,c;

    c = pow(a,b);

    return c;

}

void cuadNum (int a)
{
    printf("La direccion de la variable es: %p, &a");
    printf("El contenido de la variable es: %d", a);

    int b = 2,c;

    c = pow(a,b);
    printf("El cuadrado del numero ingresado es: %d\n", c);



}

void Invertir(int a, int b) 
{
    int aux;
    printf("Los valores ingresados fueron: %d %d\n",a,b);
    
    aux = a;

    a = b;
    b = aux;

    printf("Al invertirlos queda lo siguiente:\na = %d\nb = %d\n", a,b);
}

void orden (int a, int b)
{
    int aux;

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    
    printf("Los numeros ingresados ordenados son: %d %d",a,b);
}