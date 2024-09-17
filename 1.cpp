/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

   #include <iostream>

int main()
{
    int opcaoDoUsuario;
    std::cout <<"----------------ESCOLHA UMA OPÇÃO----------------\n";
    std::cout << "Digite um  numero de 1 a 3:";
    std::cin  >> opcaoDoUsuario;
    switch (opcaoDoUsuario){
        case 1:
    std::cout << "Boa Dia :)";
        break;
        case 2:
    std::cout << "Boa Tarde :)";
        break;
        case 3:
    std::cout << "Boa Noite :)";
        break;
    }
    
    return 0;
}
