//
// Created by marcus on 9/23/26.
//

#include "somaDigitos.h"

int somarDigitos(int n){
    //precisamos de uma função que soma os digitos de um número, ou seja, 12 = 3
    //caso base(parada), quando a quantidade de dígitos de N for igual a 1, ou seja, quando N/10 < 1
    if (n < 10) {
        return n;
    }
    return (n%10) + somarDigitos(n/10);
}

int main() {
    int n;
    std::cout<<"Digite um número para somar os dígitos: ";
    std::cin>>n;
    std::cout<<"Soma dos dígitos de "<<n<<" é igual a: "<<somarDigitos(n)<<" ";
}