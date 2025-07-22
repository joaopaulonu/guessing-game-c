#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define reset "\e[0m"

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int repetir = 1;

    while (repetir == 1) {
        int tentativas = 10, input, dig1, dig2, dig3, dig4, input1, input2, input3, input4, opcao;
        int codigo = 1000 + rand() % 9000;
        int codigo_temp;

        int pos1_descoberto = -1;
        int pos2_descoberto = -1;
        int pos3_descoberto = -1;
        int pos4_descoberto = -1;

        system("cls");
        printf("\t=> Bem-vindo ao Jogo SECRETO!!! <=\n\n");
        printf("Você tem 10 tentativas para acertar o número secreto entre [1000 e 9999]\n");
        printf("A partir da 5ª tentativa o jogo irá te ajudar, dando dicas.\n");
        system("pause");

        while (tentativas > 0) {
            system("cls");

            printf("\nDígitos já descobertos: [");
            (pos1_descoberto != -1) ? printf("%d", pos1_descoberto) : printf("_");
            printf(" ");
            (pos2_descoberto != -1) ? printf("%d", pos2_descoberto) : printf("_");
            printf(" ");
            (pos3_descoberto != -1) ? printf("%d", pos3_descoberto) : printf("_");
            printf(" ");
            (pos4_descoberto != -1) ? printf("%d", pos4_descoberto) : printf("_");
            printf("]\n\n");

            do {
                printf("Digite sua tentativa de código (entre 1000 e 9999): ");
                scanf("%d", &input);

                if (input < 1000 || input > 9999) {
                    printf(RED "Erro: Por favor, digite um número de 4 dígitos entre 1000 e 9999.\n" reset);
                }
            } while (input < 1000 || input > 9999);

            codigo_temp = codigo;
            dig4 = codigo_temp % 10; codigo_temp /= 10;
            dig3 = codigo_temp % 10; codigo_temp /= 10;
            dig2 = codigo_temp % 10; codigo_temp /= 10;
            dig1 = codigo_temp % 10;

            input4 = input % 10; input /= 10;
            input3 = input % 10; input /= 10;
            input2 = input % 10; input /= 10;
            input1 = input % 10;

            int certos = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0;
            int acertou1 = 0, acertou2 = 0, acertou3 = 0, acertou4 = 0;

            if (input1 == dig1) { certos++; d1 = input1; acertou1 = 1; pos1_descoberto = input1; }
            if (input2 == dig2) { certos++; d2 = input2; acertou2 = 1; pos2_descoberto = input2; }
            if (input3 == dig3) { certos++; d3 = input3; acertou3 = 1; pos3_descoberto = input3; }
            if (input4 == dig4) { certos++; d4 = input4; acertou4 = 1; pos4_descoberto = input4; }

            printf("\nResultado desta tentativa: [");
            (acertou1 == 1) ? printf("%d ", d1) : printf("_ ");
            (acertou2 == 1) ? printf("%d ", d2) : printf("_ ");
            (acertou3 == 1) ? printf("%d ", d3) : printf("_ ");
            (acertou4 == 1) ? printf("%d", d4) : printf("_");
            printf("]\n");

            printf("Você acertou %d números na posição correta.\n", certos);

            if (certos == 4) {
                printf(GRN "\nParabéns!! Você acertou o código secreto!\n" reset);
                system("pause");
                break;
            }

            if (tentativas <= 6) {
                printf(YEL "\nDICA: Um dos números que você ainda não acertou...\n" reset);

                if (acertou1 == 0) {
                    (dig1 % 2 == 0) ? printf("- O primeiro dígito é par\n") : printf("- O primeiro dígito é ímpar\n");
                    (dig1 > 5) ? printf("- O primeiro dígito é maior que 5\n") : printf("- O primeiro dígito é menor ou igual a 5\n");
                } else if (acertou2 == 0) {
                    (dig2 % 2 == 0) ? printf("- O segundo dígito é par\n") : printf("- O segundo dígito é ímpar\n");
                    (dig2 > 5) ? printf("- O segundo dígito é maior que 5\n") : printf("- O segundo dígito é menor ou igual a 5\n");
                } else if (acertou3 == 0) {
                    (dig3 % 2 == 0) ? printf("- O terceiro dígito é par\n") : printf("- O terceiro dígito é ímpar\n");
                    (dig3 > 5) ? printf("- O terceiro dígito é maior que 5\n") : printf("- O terceiro dígito é menor ou igual a 5\n");
                } else if (acertou4 == 0) {
                    (dig4 % 2 == 0) ? printf("- O quarto dígito é par\n") : printf("- O quarto dígito é ímpar\n");
                    (dig4 > 5) ? printf("- O quarto dígito é maior que 5\n") : printf("- O quarto dígito é menor ou igual a 5\n");
                }
            }

            tentativas--;
            printf(YEL "\nFaltam %d tentativas...\n" reset, tentativas);
            system("pause");
        }

        if (tentativas == 0) {
            printf(RED "\nQue pena! Você perdeu!\n" reset);
            printf("O número secreto era %d\n", codigo);
        }

        do {
            printf("\nJogar de novo? (1 - SIM, 0 - NÃO): ");
            scanf("%d", &opcao);

            if (opcao != 0 && opcao != 1) {
                printf(RED "Erro: Por favor, digite apenas 0 ou 1.\n" reset);
            }
        } while (opcao != 0 && opcao != 1);

        if (opcao == 0) {
            repetir = 0;
        }
    }

    return 0;
}
