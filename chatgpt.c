#include <stdio.h>

void combine(int start, int depth, int n, int k, int *result) {
    if (depth == k) {
        // Imprime a combinação
        for (int i = 0; i < k; i++) {
            printf("%d", result[i]);
            if (i < k - 1) printf(",");
        }
        printf("\n");
        return;
    }

    for (int i = start; i <= n; i++) {
        result[depth] = i;
        combine(i + 1, depth + 1, n, k, result);
    }
}

int main() {
    int n = 60; // Limite superior
    int k = 6;  // Número de elementos na combinação
    int result[k];

    combine(1, 0, n, k, result);
    return 0;
}