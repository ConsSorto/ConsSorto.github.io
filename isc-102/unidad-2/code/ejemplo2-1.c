#include <stdio.h>

int Q; // Variable global, ámbito de programa [7]

int main() {
    int A; // Variable local a main [7]
    A = 124;
    Q = 1;
    printf("Global Q: %d, Local A: %d\n", Q, A);
    return 0;
}