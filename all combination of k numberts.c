// print all combination of k numbers
#include <stdio.h>

void backtrack(int start, int n, int k, int* comb, int idx) {
    if (idx == k) {
        printf("[");
        for (int i = 0; i < k; i++) {
            printf("%d", comb[i]);
            if (i < k - 1)
                printf(",");
        }
        printf("]\n");
        return;
    }
    for (int i = start; i <= n; i++) {
        comb[idx] = i;
        backtrack(i + 1, n, k, comb, idx + 1);
    }
}

void combine(int n, int k) {
    int comb[k];
    backtrack(1, n, k, comb, 0);
}

int main() {
    combine(4, 2);
    return 0;
}