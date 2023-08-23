#include <stdio.h>

int main(){
    int min[10], mcomp[10], mout[10];
    int c, Cv, g, i, j = 0, k, x = 0;

    printf("Indique el numero de valores que ingresara:\n");
    scanf("%d", &Cv);
    printf("ingrese numeros positivos, presione enter despues de cada uno\n");
    for(i = 0; i < Cv; i++){
        scanf("%d", &min[i]);
        if(min[i] < 0 ){
            printf("El numero ingresado no es positivo, ingreselo nuevamente\n");
            i--;
            }
    }
    for(i = 0; i < Cv; i++){
        c = 0;
        g = min[i];
        mcomp[j] = g;
        j++;
        for(k = 0; k < Cv; k++){
            if(mcomp[k] == g){
                c++;
            }
        }
        if(c == 1){
            mout[x] = g;
            x++;
        }
    }
    printf("\nla cadena de numeros ingresados sin repeticiones es:\n[%d", mout[0]);
    for(i = 1; i < x; i++){
    printf(",%d", mout[i]);
    }
    printf("]");
    return 0;
}