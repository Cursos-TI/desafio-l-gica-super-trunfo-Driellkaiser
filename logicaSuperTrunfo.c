#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}

#include <studio.h>
//Definição da estrutura para armazenar os dados da carta
typedef struct {
char estado;
char codigo[4];
char nome_cidade[50];
int populacao;
float area;
float pib;
int pontos_turisticos;
} Carta;

//Função para cadastrar os dados de uma carta
void cadastrarCarta(Carta *carta, int numero) {
    printf("\nCadastro da Carta %d:\n", numero);
    printf("Estado (A-H):");
    scanf("%c", carta->estado);
    printf("Código da Carta (ex: A01):");
    scanf("%3s", carta->codigo);
    printf("Nome da Cidade");
    scanf("%[^"]s", carta->nome_cidade);
    printf("População:")
    scanf("%d", carta->populacao);
    printf("Área (em km):");
    scanf("%f", carta->aera);
    printf("PIB (em bilhões de reais):");
    scanf("%f", carta->pib);
    printf("Numero de Pontos Turísticos:");
    scanf("%d", carta->pontos_turisticos);
}

//Funcção para exibir os dados de uma carta 
void exibirCarta(Carta carta, int numero) {
    printf("\nCarta: %d\n",numero);
    printf("Estado: %c\n",carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da cidade: %s\n",carta.nome_cidade);
    printf("População: %d\n",carta.populacao);
    printf("Áera: %.2f km\n",carta.aera);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n",carta.pontos_turisticos);
}

int man(){
    //Cadastro das cartas 
    cadastrarCarta(carta&1,1);
    cadastrarCarta(carta&2,2);

//Exibição dos dados cadastrados
    exibirCarta(carta&1,1);
    exibirCarta(carta&2,2);

// 

return 0;
}
