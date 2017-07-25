#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Biblioteca para adicionar a função de potenciação[pow(base, expoente)]

void main(){

int num1, num2, soma, subt, divi, mult, potc; //Declara diversas variáveis.

printf("Digite o Primeiro Numero: ");
scanf("%i", &num1); //Faz com que o usuário insira o primeiro valor.

printf("Digite o Segundo Numero: ");
scanf("%i", &num2); //Faz com que o usuário insira o segundo valor.

//INICIO DE DECLARAÇÕES DE VARIAVEIS PARA A CALCULADORA.
soma = num1 + num2;
subt = num1 - num2;
divi = num1 / num2;
mult = num1 * num2;
potc = pow(num1, num2);
//FINAL DAS DECLARAÇÕES DE VARIAVEIS PARA A CALCULADORA.

printf("A SOMA entre %i e %i e igual a : %i\n", num1, num2, soma);
printf("A SUBTRACAO entre %i e %i é igual a : %i\n", num1, num2, subt);
printf("A DIVISAO entre %i e %i e igual a : %i\n", num1, num2, divi);
printf("A MULTIPLICACAO entre %i e %i e igual a : %i\n", num1, num2, mult);
printf("%i ELEVADO a %i e igual a : %i\n", num1, num2, potc);


return main(); //Retorna ao início do programa, criando uma espécie de 'Loop infinito'.
}
