#include <stdio.h>

int main(){
    double a;
    double b;
    double c;
    double m;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    a *= 2;
    b *= 3;
    c *= 5;
    m = (a+b+c)/10;

    printf("MEDIA = %.1lf\n", m);

    return 0;
}