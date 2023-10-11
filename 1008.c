#include <stdio.h>
int main(){
    int n;
    double h;
    double s;
    double sal;

    scanf("%i", &n);
    scanf("%lf", &h);
    scanf("%lf", &s);
    sal = h*s;

    printf("NUMBER = %i\n", n);
    printf("SALARY = U$ %.2lf\n", sal);
    
    return 0;
}