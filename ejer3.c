#include <stdio.h>

int main(){ 
    char frase[50];
    int cont = 0;
    printf("Escriba una frase(max: 50 caracteres, no deje espacios)\n");
    scanf("%s", &frase);
    while (frase[cont] != 0){
        cont++;
    }
    printf("El numero de caracteres es de: %d", cont);
    return 0;
}