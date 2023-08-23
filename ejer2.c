#include <stdio.h>

int main(){
    int num, fil,i,res = 0;
    printf("Ingrese el numero de la tabla de multiplicar que desea\n");
    scanf("%d", &num);
    printf("Ingrese el numero de hasta que numero desea que termine la tabla\n");
    scanf("%d", &fil);
    printf("---------------------\n");
    for (i = 0; i <= fil; i++){
        res = num * i;
        printf("   %d * %d = %d\n", num, i, res);
    }
    printf("---------------------");
    return 0;
}