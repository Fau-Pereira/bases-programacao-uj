#include <stdio.h>
#include <string.h>

int main() {
    int matricula;
    char nome[50], disciplina[50];
    float av1, av2, av3, media_av2, media_final;
    printf("Bem-vindo ao sistema de médias da turma!\n");
    printf("Preencha os dados corretamente e verifique a sua média.\n\n");

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Digite o nome da disciplina: ");
    fgets(disciplina, sizeof(disciplina), stdin);
    disciplina[strcspn(disciplina, "\n")] = 0;

    printf("Digite a nota da AV1: ");
    scanf("%f", &av1);

    printf("Digite a nota da AV2: ");
    scanf("%f", &av2);

    if (av2 <= 5.9) {
        printf("Você não atingiu a média mínima para a AV2. Realize a AV3.\n");

        printf("Digite a nota da AV3: ");
        scanf("%f", &av3);

        media_final = (av1 + av3) / 3;
        printf("Sua média final na disciplina de %s é: %.2f\n", disciplina, media_final);
    }
    else {
        media_av2 = (av1 + av2) / 2;
        printf("Sua média na disciplina de %s é: %.2f\n", disciplina, media_av2);
    }  
return 0;
}