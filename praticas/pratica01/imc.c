#include <stdio.h>
double imc(double altura, double peso){
    
    double imc = peso/(altura*altura);
    if(imc<18.5){
        printf("Abaixo do peso.\n");
    } else if(imc<24.9){
        printf("Peso normal.\n");
    } else if(imc<29.9){
        printf("Sobrepeso.\n");
    }else{
        printf("Obesidade.\n");
    }
    return imc;
}
int main(){
    printf("Imc de uma pessoa com 100kg e 1,80m: ");
    printf("%.2f\n",imc(1.80, 100.0));
    printf("Imc de uma pessoa com 80kg e 1,75m: ");
    printf("%.2f\n",imc(1.75, 80.0));
    printf("Imc de uma pessoa com 95kg e 1,62m: ");
    printf("%.2f\n",imc(1.62, 95.0));
    printf("Imc de uma pessoa com 50kg e 1,70m:  ");
    printf("%.2f\n",imc(1.70, 50.0));
    printf("Imc de uma pessoa com 120kg e 2,10m: ");
    printf("%.2f\n",imc(2.10, 120.0));
    printf("Imc de uma pessoa com 93kg e 1,82m: ");
    printf("%.2f\n",imc(1.82, 93.0));
    return 0;
}