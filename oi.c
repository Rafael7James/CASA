#include <stdio.h>

// Função para realizar a soma de dois números
float soma(float a, float b) {
    return a + b;
}

// Função para realizar a subtração de dois números
float subtracao(float a, float b) {
    return a - b;
}

// Função para realizar a multiplicação de dois números
float multiplicacao(float a, float b) {
    return a * b;
}

// Função para realizar a divisão de dois números
float divisao(float a, float b) {
    // Verifica se o divisor é diferente de zero para evitar divisão por zero
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0;
    }
}

int main() {
    float num1, num2, resultado;
    char opcao;

    do {
        // Solicita os dois números ao usuário
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        // Exibe o menu de operações
        printf("\nEscolha a operacao:\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Encerrar\n");
        printf("Opcao: ");
        scanf(" %c", &opcao);

        // Executa a operação correspondente
        switch (opcao) {
            case '1':
                resultado = soma(num1, num2);
                printf("Resultado da soma: %.2f\n", resultado);
                break;
            case '2':
                resultado = subtracao(num1, num2);
                printf("Resultado da subtracao: %.2f\n", resultado);
                break;
            case '3':
                resultado = multiplicacao(num1, num2);
                printf("Resultado da multiplicacao: %.2f\n", resultado);
                break;
            case '4':
                resultado = divisao(num1, num2);
                printf("Resultado da divisao: %.2f\n", resultado);
                break;
            case '5':
                printf("Encerrando o programa. Obrigado!\n");
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        // Pergunta se o usuário deseja realizar outra operação
        printf("\nDeseja realizar outra operacao? (S para sim, qualquer outra tecla para encerrar): ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's');

    printf("Encerrando o programa. Obrigado!\n");

    return 0;
}