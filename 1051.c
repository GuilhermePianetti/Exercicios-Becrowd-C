#include <stdio.h>

int main(){
    double s, a;
    scanf("%lf", &s);

    if(s<=2000){
        printf("Isento\n");
    }
    else if (s<=3000){
        a = (s-2000)*0.08;
        printf("R$ %.2lf\n", a);
    }
    else if (s<=4500){
        a  = (1000*0.08) + ((s-3000)*0.18);
        printf("R$ %.2lf\n", a);
    }
    else if(s>4500){
        a  = (1000*0.08) + (1500*0.18) + ((s-4500)*0.28);
        printf("R$ %.2lf\n", a);
    }
    return(0);
}