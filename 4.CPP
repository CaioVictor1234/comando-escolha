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
    
    cout << "Escolha um animal:" << endl;
    cout << "1. Cachorro" << endl;
    cout << "2. Gato" << endl;
    cout << "3. Pássaro" << endl;
    cout << "Digite o número correspondente: ";
    cin >> escolha;
    
    switch (escolha) {
        case 1:
            cout << "Você escolheu um cachorro. Eles são leais e amigáveis!" << endl;
            break;
        case 2:
            cout << "Você escolheu um gato. Eles são independentes e curiosos!" << endl;
            break;
        case 3:
            cout << "Você escolheu um pássaro. Eles são livres e têm lindas penas!" << endl;
            break;
        default:
            cout << "Opção inválida." << endl;
            break;
    }
    
    return 0;
}
