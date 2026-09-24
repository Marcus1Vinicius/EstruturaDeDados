//
// Created by marcus on 9/23/26.
//

#include "maiorDigito.h"

//preciso saber qual dígito de um número é o maior, ou seja, eu preciso comparar cada dígito e retorna o maior valor;

//caso base: n < 10

//caso recursivo: n > 10



int maiorDigito(int N) {
        if (N < 10) return N;                           // caso base: um único dígito
        int ultimo = N % 10;
        int maiorDoResto = maiorDigito(N / 10);          // salto de fé
        return (ultimo > maiorDoResto) ? ultimo : maiorDoResto;
}


int main() {
        int n;
        std::cout<<"Digite o número: ";
        std::cin>>n;
        std::cout << "O maior dígito de " << n << " é: " << maiorDigito(n) << " ";
}
