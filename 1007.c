#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int m;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);

    m = ((a*b) - (c*d));
    
    printf("DIFERENCA = %i\n", m);
    return 0;
}