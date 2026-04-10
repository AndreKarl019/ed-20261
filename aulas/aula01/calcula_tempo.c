#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    clock_t tempo_inicial, tempo_final;

    tempo_inicial = clock();

    long int soma = 10 +20;

    tempo_final = clock();

    double duracao = (double)(tempo_final - tempo_inicial)/CLOCKS_PER_SEC;

    
    printf("%.6f\n", duracao);

    
    tempo_inicial = clock();

    for(unsigned int i = 0; i<4000000000; i++){
        soma = soma +1;
    }

    tempo_final = clock();

    
    duracao = (double)(tempo_final - tempo_inicial)/CLOCKS_PER_SEC;
    printf("Tempo de execucao foi: %.6f seg\n",duracao);


    return 0;
}
