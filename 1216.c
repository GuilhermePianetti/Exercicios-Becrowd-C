#include <stdio.h>

int main(){
    char n[120];
    double d, t, c = 0;
    while (scanf("%s", &n) != EOF){
        scanf("%lf", &d);
        if (t<0){
            t *= -1;
        }
        t += d;
        c++;
    }
    t /= c;
    printf("%.1lf\n", t);
    return 0;
}