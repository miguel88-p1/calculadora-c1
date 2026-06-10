#ifndef FUNCTION_CALCULAR_H
#define FUNCTION_CALCULAR_H

int multiplicar(int numero1, int numero2);
int dividir(int numero1, int numero2);

#endif
int multiplicar(int numero1, int numero2)
{
    int contador1=0,contador2=0,produto=0;
    int sinal1=1,sinal2=1;

    if (numero1 < 0)
    {
        sinal1 = -1;
        numero1 = numero1 * -1;
    }
    
    if (numero2 < 0)
    {
        sinal2 = -1;
        numero2 = numero2 * -1;
    }    
    
    while (contador1 < numero1)
    {
        contador2 = 0;
        while (contador2 < numero2)
        {
            produto = produto + 1;
            contador2 = contador2 + 1;
        }
        contador1 = contador1 + 1;
    }
    produto = produto * sinal1 * sinal2;
    return produto;
}

int dividir(int numero1, int numero2) {
    int dividendo, divisor;
    int quociente, resto;

    dividendo = numero1;
    divisor = numero2;

    quociente = 0;
    resto = dividendo;

    while (resto >= divisor) {
        quociente = quociente + 1;
        
        resto = resto - divisor;
    }

    return quociente;
}
