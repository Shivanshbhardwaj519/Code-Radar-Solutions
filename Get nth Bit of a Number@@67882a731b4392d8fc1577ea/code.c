#include <stdio.h>

int main() {
    int a, b;
    // Taking input for the number and the bit position
    scanf("%d %d", &a, &b);

    // Right shift the number 'a' by 'b' positions and apply bitwise AND with 1
    int bt = (a >> b) & 1;

    // Output the result (0 or 1)
    printf("%d\n", bt);

    return 0;
}
