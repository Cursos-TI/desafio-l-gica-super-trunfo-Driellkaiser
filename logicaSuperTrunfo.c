#include <stdio.h>
#include <string.h>

// Estrutura da carta com os atributos da cidade
typedef struct {
    char codigo[4];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para cadastrar os dados da carta
void cadastrarCarta(Carta *carta, int numero) {
    printf("\nCadastro da Carta %d:\n", numero);

    printf("Código da cidade (ex: A01): ");
    scanf("%3s", carta->codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nome_cidade);

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

// Função para comparar e exibir resultados entre duas cartas
void compararCartas(Carta c1, Carta c2) {
    printf("\n--- Comparação das Cartas ---\n");

    // Comparação por população
    if (c1.populacao > c2.populacao)
        printf("Cidade com maior população: %s\n", c1.nome_cidade);
    else if (c1.populacao < c2.populacao)
        printf("Cidade com maior população: %s\n", c2.nome_cidade);
    else
        printf("As duas cidades têm a mesma população.\n");

    // Comparação por área
    if (c1.area > c2.area)
        printf("Cidade com maior área: %s\n", c1.nome_cidade);
    else if (c1.area < c2.area)
        printf("Cidade com maior área: %s\n", c2.nome_cidade);
    else
        printf("As duas cidades têm a mesma área.\n");

    // Comparação por PIB
    if (c1.pib > c2.pib)
        printf("Cidade com maior PIB: %s\n", c1.nome_cidade);
    else if (c1.pib < c2.pib)
        printf("Cidade com maior PIB: %s\n", c2.nome_cidade);
    else
        printf("As duas cidades têm o mesmo PIB.\n");

    // Comparação por pontos turísticos
    if (c1.pontos_turisticos > c2.pontos_turisticos)
        printf("Cidade com mais pontos turísticos: %s\n", c1.nome_cidade);
    else if (c1.pontos_turisticos < c2.pontos_turisticos)
        printf("Cidade com mais pontos turísticos: %s\n", c2.nome_cidade);
    else
        printf("As duas cidades têm o mesmo número de pontos turísticos.\n");
}

int main() {
    Carta cidade1, cidade2;

    // Cadastro das duas cartas
    cadastrarCarta(&cidade1, 1);
    cadastrarCarta(&cidade2, 2);

    // Comparação das cartas
    compararCartas(cidade1, cidade2);

    return 0;
}
