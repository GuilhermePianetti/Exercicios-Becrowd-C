#include <stdio.h>

int main(){
    int vi[5], vp[5];
    int cvi = 0;
    int cvp = 0; 
    int a = 0;
    for(int i = 0; i < 15; i++){
        if(cvp == 5){
            for(int j=0; j<5; j++){
                printf("par[%d] = %d\n", j, vp[j]);
            }
            cvp = 0;   
        }
        if(cvi == 5){
            for(int j=0; j<5; j++){
                printf("impar[%d] = %d\n", j, vi[j]);
            }
        cvi = 0;
        }
        scanf("%d\n", &a);
        
        if (a %2 == 0){
            vp[cvp] = a;
            cvp ++;
        }
        
        if(a %2 != 0){
            vi[cvi] = a;
            cvi ++;
        }
    }
    if(cvi != 0){
        for(int i = 0; i<=cvi; i++){
            printf("impar[%d] = %d\n", i, vi[i]);
        }
    }
    if(cvp != 0){
        for(int i = 0; i<=cvp; i++){
            printf("par[%d] = %d\n", i, vp[i]);
        }   
    }
    return 0;
}