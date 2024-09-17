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
    
    cout << "Escolha um idioma:" << endl;
    cout << "1. Português" << endl;
    cout << "2. Inglês" << endl;
    cout << "Digite o número correspondente: ";
    cin >> escolha;
    
    switch (escolha) {
        case 1:
            cout << "Bem-vindo!" << endl;
            break;
        case 2:
            cout << "Welcome!" << endl;
            break;
        default:
            cout << "Opção inválida." << endl;
            break;
    }
    
    return 0;
}
