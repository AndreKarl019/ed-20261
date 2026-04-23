#include <stdio.h>
#include "conta.h"

int main(){

    Conta *conta1 = conta_criar();

    printf("Saldo: %.2f\n", conta_ver_saldo(conta1));
    conta_depositar(conta1, 1000);
    printf("Saldo: %.2f\n", conta_ver_saldo(conta1));
    
    conta_sacar(conta1, 590);
    printf("Saldo: %.2f\n", conta_ver_saldo(conta1));

    conta_depositar(conta1, -100);
    printf("Saldo: %.2f\n", conta_ver_saldo(conta1));

    conta_sacar(conta1, 99999);
    printf("Saldo: %.2f\n", conta_ver_saldo(conta1));

    conta_destruir(conta1);
    
    return 0;
}