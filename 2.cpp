/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    int numero1, numero2, resultado, opcaoDoUsuario;
     
    std::cout <<"----------------ESCOLHA UMA OPÇÃO----------------\n";
    std::cout << "1 para Adicao:\n";
    std::cout << "2 para Subtracao:\n";
    std::cout << "3 para Multiplicacao:\n";
    std::cout << "4 para Divisao:\n";
    std::cin >> opcaoDoUsuario;
    std::cout << "Agora digite um numero:";
    std::cin >> numero1;
    std::cout << "Digite outro numero:";
    std::cin >> numero2;
    switch (opcaoDoUsuario){
        case 1:
        resultado = numero1 + numero2;
        std::cout << "A soma dos numeros que você escolheu foi: " << resultado;
        break;
        case 2:
        resultado = numero1 - numero2;
        std::cout << "A Subtração dos numeros que você escolheu foi: " << resultado;
        break;
        case 3:
        resultado = numero1 * numero2;
        std::cout << "A Multiplicação dos numeros que você escolheu foi: " << resultado;
        break;
        case 4:
        resultado = numero1 / numero2;
        std::cout << "A Divisão dos numeros que você escolheu foi: " << resultado;
        break;
    }
    std::cout << "\n-------------------------------------------------------------";
    return 0;
}