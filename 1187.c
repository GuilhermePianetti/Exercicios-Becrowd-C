#include <stdio.h>

int main(){
    char o;
    int c = 0;
    scanf("%c", &o);
    double m[12][12];
    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    int f = 11;
    double s = 0;
    int inicio = 1;
    for(int i = 0; i<5; i++){;
        for(int j = inicio; j<f; j++){
            s = s + m[i][j];
            c++;
        }
        f--;
        inicio++;
    }

    if(o == 'M'){
        s = s/c;    
        printf("%.1lf\n", s);
    }
    else{
        printf("%.1lf\n", s);
    }
    return 0;
}   