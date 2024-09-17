/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    char tamanho;
    
    cout << "Escolha o tamanho da camiseta:" << endl;
    cout << "P - Pequeno" << endl;
    cout << "M - Médio" << endl;
    cout << "G - Grande" << endl;
    cout << "Digite a letra correspondente: ";
    cin >> tamanho;
    
    switch (tamanho) {
        case 'P':
        case 'p':
            cout << "Preço da camiseta P: R$ 30,00" << endl;
            break;
        case 'M':
        case 'm':
            cout << "Preço da camiseta M: R$ 40,00" << endl;
            break;
        case 'G':
        case 'g':
            cout << "Preço da camiseta G: R$ 50,00" << endl;
            break;
        default:
            cout << "Tamanho inválido." << endl;
            break;
    }
    
    return 0;
}
