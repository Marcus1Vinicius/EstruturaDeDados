//
// Created by marcus on 9/23/26.
//

#include "digitoRepetido.h"
//fazer uma cópia de n para comparar o último digito com todos os números à sua esquerda, usando a divisão por 10 na cópia de n, até que a cópia < 10
//a ideia é que o descarte do último dígito só ocorra depois de comparar ele com todos os dígitos anteriores. Assim todos os dígitos vão ser o último digito
//em algum momento, enquanto não encontrar um digito igual,

int contemDigito(int n, int d) {
    if (n == 0) return false;
    if (n%10 == d) return true;
    return contemDigito((n/10), d);
}

int digitoRepetido(int n) {
    if (n < 10) return false;
    int ultimo = n % 10;
    int resto = n / 10;
    if (contemDigito(resto, ultimo)) return true;
    return digitoRepetido(resto);
}

//função recursiva auxiliar da função recursiva principal, abstrair as responsabilidades

int main() {
    int n;
    std::cout<<"Digite o número: ";
    std::cin>>n;
    if (digitoRepetido(n) == false) {
        std::cout<<" O número não possui digitos repetidos ";
    }
    if (digitoRepetido(n) == true) {
        std::cout<<" O número possui digitos repetidos ";
    }
}