#include <stdio.h>
 
int main() {
    int a, aux = 0;
    int b = 1;
    int n;

    scanf("%d", &n);

    for (int i = 0; i<n; i++){
        if (i<n-1){
            printf("%d ", a);
        }
        else{
            printf("%d", a);
        }
        aux = b;
        b = a+b; 
        a = aux;

    }
    printf("\n");
    return 0;
}