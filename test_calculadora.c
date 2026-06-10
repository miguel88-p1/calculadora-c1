#include <stdio.h>
#include <assert.h>
#include "function_multiplicar.c"

int main(){
    assert(multiplicar(2, 0) == 2*0);
    assert(multiplicar(3, 6) == 3*6);
    assert(multiplicar(42, 64) == 42*64);
    assert(dividir(14,2) == 7);
    assert(dividir(99,3) == 33);
    assert(dividir(144,12) == 12);
    printf("Teste executado com sucesso");
    return 0;
}
