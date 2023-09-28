#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0; // 0 e 1 não são primos
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Não é primo
        }
    }
    return 1; // É primo
}

int main() {
    int numero;

    // Solicita ao usuário um número maior que 2
    do {
        printf("Digite um número inteiro maior que 2: ");
        scanf("%d", &numero);
    } while (numero <= 2);

    // Encontra a decomposição como a soma de dois números primos
    for (int i = 2; i <= numero / 2; i++) {
        if (ehPrimo(i) && ehPrimo(numero - i)) {
            printf("%d = %d + %d\n", numero, i, numero - i);
            break; // Encontrou a decomposição, então sai do loop
        }
    }

    return 0;
}
