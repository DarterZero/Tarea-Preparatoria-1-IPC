#include <stdio.h>

int main(){
    int n;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    if(n%2 != 0){
        printf("El numero ingresado es impar");
    } else{
        printf("El numero ingresado es par");
    }
    return 0;
}