#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    unsigned long long int n = 100000000000; // Altere aqui para o valor desejado
    unsigned long long int sum = 0;

    clock_t start_time = clock();

    for (unsigned long long int i = 1; i <= n; i++) {
        sum += i;
    }

    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Resultado: %llu\n", sum);
    printf("Tempo de execução: %f segundos\n", elapsed_time);

    return 0;
}
