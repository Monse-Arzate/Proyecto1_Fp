#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int *p=NULL;

    printf("La direccion de memoria de p, %p\n'", &p);
    printef("El tamaño en bytes del apuntador  %d\n'", sizeof(int*));
    printf("La direccion de memoria de memoria apuntada %p\n' ", p);

    p=&a;
    printf("La direccion de memoria de p, %p\n", &p);
    printf("La direccion de memoria de a %p\n", &a);
    printf("El tamaño en bytes del apuntador  %d\n", sizeof(int*));
    printf("La direccion de memoria de memoria apuntada %d\n", p);
    printf("La direccion de memoria apuntada %p\n",p);
    return 0;
}