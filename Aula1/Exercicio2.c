#include <stdio.h>

float mediaLitro(float *media, float *distancia, float *litroGasto){

printf("Digite a distancia percorrida (km): ");
    scanf("%f", distancia);

printf("Digite o litro gasto: ");
    scanf("%f", litroGasto);



if (*distancia <= 0 || *litroGasto <= 0){
    printf("Os valores devem ser maiores que zero.\n");
    return 0;
}
else if (*media = *distancia/ *litroGasto )
{
    printf("A media de consumo é igual a: %f\n", *media);
}

}


int main(){
float media, distancia, litroGasto;
   mediaLitro(&media, &distancia, &litroGasto);
   return 0;
}