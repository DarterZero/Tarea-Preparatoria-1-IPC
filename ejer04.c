#include <stdio.h>

int main(){
    double angulo, seno, dividendo, sumatoria, producto, divisor;
    int n = 0, ps, i, j, op, cont;
    do{
    angulo = 0;
    seno = 0;
    dividendo = 1;
    sumatoria = 0;
    printf("\nIndique la unidad de medida:\n1) Grados\n2) Radianes\n3) Salir\n");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("\ningrese el angulo:\n");
            scanf("%lf", &angulo);
            angulo = angulo * 3.141592654/180;
            for(n = 0; n < 19; n++){
                ps = 2*n+1;
                producto = 1;
                divisor = 1;
                for(j = 0; j < ps; j++){producto = producto * angulo;}
                for(i = ps; i > 0; i--){divisor = divisor * i;}
                sumatoria = dividendo*producto/divisor;
                seno = seno + sumatoria;
                dividendo = dividendo * -1;
            }
            printf("El Seno de %.2lf es: %.6lf", angulo, seno);
        break;
        case 2:
            printf("ingrese el angulo (que no exceda los 4 pi):\n");
            scanf("%lf", &angulo);
            for(n = 0; n < 19; n++){
                ps = 2*n+1;
                producto = 1;
                divisor = 1;
                for(j = 0; j < ps; j++){producto = producto * angulo;}
                for(i = ps; i > 0; i--){divisor = divisor * i;}
                sumatoria = dividendo*producto/divisor;
                seno = seno + sumatoria;
                dividendo = dividendo * -1;
            }
            printf("El Seno de %.2lf es: %.6lf", angulo, seno);
        break;
        case 3:
            printf("Saliendo");
        break;
        default:
            printf("Esa no es una opcion");
    }
    } while(op != 3);
    return 0;
}
