/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int escolha;
    
    cout << "Escolha a velocidade:" << endl;
    cout << "1. Baixa" << endl;
    cout << "2. Média" << endl;
    cout << "3. Alta" << endl;
    cout << "Digite o número correspondente: ";
    cin >> escolha;
    
    switch (escolha) {
        case 1:
            cout << "Limite de velocidade permitido: 40 km/h" << endl;
            break;
        case 2:
            cout << "Limite de velocidade permitido: 80 km/h" << endl;
            break;
        case 3:
            cout << "Limite de velocidade permitido: 120 km/h" << endl;
            break;
        default:
            cout << "Opção inválida." << endl;
            break;
    }
    
    return 0;
}
