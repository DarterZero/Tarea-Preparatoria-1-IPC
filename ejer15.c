#include <stdio.h>

int main(){
    char in[50], out[50], Clave[] = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
    int i, c = 0, j;

    printf("Ingrese lo que desea cifrar (use solo mayusculas, sin espacios ni caracteres especiales max 50 caracteres)\n");
    scanf("%s", &in);
    while(in[c] != 0){
        c++;
    }
    for(i = 0; i < c; i++){
        for(j = 0; j < 27; j++){
            if(in[i] == 'X'){
                out[i] = 'A';
            } else if(in[i] == 'Y'){
                out[i] = 'B';
            } else if(in[i] == 'Z'){
                out[i] = 'C';
            } else{
                if(in[i] == Clave[j]){
                    out[i] = Clave[j+3];
                }
            }
        }
        
    }
    printf("El cifrado de lo ingresado es:\n");
    for(i = 0; i < c; i++){
    printf("%c", out[i]);
    }
    return 0;
}