# include <stdio.h>

int main(){
    double a;
    double b;
    double m;

    scanf("%lf", &a);
    scanf("%lf", &b);

    a *= 3.5;
    b *= 7.5;
    m = (a + b)/11;

    printf("MEDIA = %.5lf\n", m);

    return 0;
}