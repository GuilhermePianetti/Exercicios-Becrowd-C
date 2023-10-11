#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (B < A && C >= B) {
        printf(":)\n");
    } else if (B > A && C <= B) {
        printf(":(\n");
    } else if (B > A && C > B && (B - A) > (C - B)) {
        printf(":(\n");
    } else if (B > A && C > B && (B - A) <= (C - B)) {
        printf(":)\n");
    } else if (A > B && B > C && (B - C) < (A - B)) {
        printf(":)\n");
    } else if (A > B && B > C && (B - C) >= (A - B)) {
        printf(":(\n");
    } else if (A == B && B < C) {
        printf(":)\n");
    } else if (A == B && B > C) {
        printf(":(\n");
    }

    return 0;
}
