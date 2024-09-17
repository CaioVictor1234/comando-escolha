/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int mes;
    
    cout << "Escolha um mês (1 a 12): ";
    cin >> mes;
    
    switch (mes) {
        case 1:
            cout << "Janeiro tem 31 dias." << endl;
            break;
        case 2:
            cout << "Fevereiro tem 28 dias (ou 29 em ano bissexto)." << endl;
            break;
        case 3:
            cout << "Março tem 31 dias." << endl;
            break;
        case 4:
            cout << "Abril tem 30 dias." << endl;
            break;
        case 5:
            cout << "Maio tem 31 dias." << endl;
            break;
        case 6:
            cout << "Junho tem 30 dias." << endl;
            break;
        case 7:
            cout << "Julho tem 31 dias." << endl;
            break;
        case 8:
            cout << "Agosto tem 31 dias." << endl;
            break;
        case 9:
            cout << "Setembro tem 30 dias." << endl;
            break;
        case 10:
            cout << "Outubro tem 31 dias." << endl;
            break;
        case 11:
            cout << "Novembro tem 30 dias." << endl;
            break;
        case 12:
            cout << "Dezembro tem 31 dias." << endl;
            break;
        default:
            cout << "Mês inválido." << endl;
            break;
    }
    
    return 0;
}
