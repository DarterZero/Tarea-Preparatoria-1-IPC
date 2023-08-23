#include <stdio.h>

int main(){
    double m_g, k_l;

    printf("Ingrese la cantidad de millas por gal%cn imperial\n", 162);
    scanf("%lf", &m_g);
    k_l = m_g * 0.3540060435;
    printf("La cantidad de kilometros por litro es de:  %.2lf", k_l);
    return 0;
}