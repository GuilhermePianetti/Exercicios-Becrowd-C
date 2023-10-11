#include <stdio.h>
int main(){
    char n[50];
    double v;
    double s;
    double sal;

    scanf("%s", n);
    scanf("%lf", &s);
    scanf("%lf", &v);

    v *= 0.15;
    sal = v + s;

    printf("TOTAL = R$ %.2lf\n", sal);

    return 0;
}