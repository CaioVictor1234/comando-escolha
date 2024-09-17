/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int escolha;
    string dia;

    // Exibindo o menu
    cout << "Escolha um dia da semana:" << endl;
    cout << "1. Domingo" << endl;
    cout << "2. Segunda-feira" << endl;
    cout << "3. Terça-feira" << endl;
    cout << "4. Quarta-feira" << endl;
    cout << "5. Quinta-feira" << endl;
    cout << "6. Sexta-feira" << endl;
    cout << "7. Sábado" << endl;
    cout << "Digite o número correspondente ao dia da semana: ";
    cin >> escolha;

    // Determinando o dia e verificando se é útil ou final de semana
    switch (escolha) {
        case 1:
            dia = "Domingo";
            break;
        case 2:
            dia = "Segunda-feira";
            break;
        case 3:
            dia = "Terça-feira";
            break;
        case 4:
            dia = "Quarta-feira";
            break;
        case 5:
            dia = "Quinta-feira";
            break;
        case 6:
            dia = "Sexta-feira";
            break;
        case 7:
            dia = "Sábado";
            break;
        default:
            cout << "Escolha inválida!" << endl;
            return 1; // Encerrar o programa com um código de erro
    }

    // Exibindo a mensagem correspondente
    if (escolha == 1 || escolha == 7) {
        cout << dia << " é final de semana." << endl;
    } else {
        cout << dia << " é dia útil." << endl;
    }

    return 0;
}
