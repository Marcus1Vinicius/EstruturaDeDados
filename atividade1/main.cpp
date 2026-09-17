/**
* @file posicaoInsercao.cpp
 * @brief Encontra a posição de inserção de um elemento em um array ordenado.
 *
 * @copyright (c) 2026 Eiji Adachi Medeiros Barbosa
 *
 * Este código é licenciado sob a Licença MIT.
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include<array>

/**
 * @brief Encontra a posição onde um elemento deve ser inserido em um array ordenado.
 *
 * @param arr O array ordenado de inteiros.
 * @param tamanho O tamanho do array.
 * @param alvo O elemento a ser inserido.
 * @return O índice de inserção do alvo ou, se ele já existir, o índice de sua primeira ocorrência.
 */
int posicaoInsercao(const int arr[], int tamanho, int alvo) {

    int esquerda = 0, direita = tamanho - 1; // o -1 vem para igualar o tamanho com os valores dos indices, tamanho 3, os indices 0 1 2, 3 - 1 = 2;

    //meio caso o alvo seja maior
    //meio = 0 + (8 - 0) / 2;
    //meio == 4
    //se o meio < alvo, vamos ter que subir para procurar
    //int meio = 0 + (9 - 0) / 2;
    //meio == 5, e assim sucessivamente até chegar no fim do array;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (meio == alvo) {
            return arr[meio];
        }
        if (arr[meio] < alvo) {
            direita = meio - 1;
        }
        if (arr[meio] > alvo) {
            esquerda = meio + 1;
        }
        else {

        }


    }

    return -1;
}

TEST_CASE("Encontrar a Posição de Inserção - Testes") {
    int arr1[] = {1, 3, 5, 6};
    CHECK(posicaoInsercao(arr1, 4, 5) == 2);
    CHECK(posicaoInsercao(arr1, 4, 2) == 1);
    CHECK(posicaoInsercao(arr1, 4, 7) == 4);
    CHECK(posicaoInsercao(arr1, 4, 0) == 0);

    int arr2[] = {1, 3, 3, 3, 5};
    CHECK(posicaoInsercao(arr2, 5, 3) == 1);
}
