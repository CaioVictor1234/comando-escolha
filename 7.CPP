/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int opcao;
    double saldo = 1000.00; // saldo inicial
    
    cout << "Escolha uma operação:" << endl;
    cout << "1. Saque" << endl;
    cout << "2. Depósito" << endl;
    cout << "3. Consulta de saldo" << endl;
    cout << "Digite o número correspondente: ";
    cin >> opcao;
    
    switch (opcao) {
        case 1: {
            double valor;
            cout << "Digite o valor do saque: ";
            cin >> valor;
            if (valor <= saldo) {
                saldo -= valor;
                cout << "Saque realizado com sucesso. Saldo atual: R$ " << saldo << endl;
            } else {
                cout << "Saldo insuficiente." << endl;
            }
            break;
        }
        case 2: {
            double valor;
            cout << "Digite o valor do depósito: ";
            cin >> valor;
            saldo += valor;
            cout << "Depósito realizado com sucesso. Saldo atual: R$ " << saldo << endl;
            break;
        }
        case 3:
            cout << "Saldo atual: R$ " << saldo << endl;
            break;
        default:
            cout << "Opção inválida." << endl;
            break;
    }
    
    return 0;
}
