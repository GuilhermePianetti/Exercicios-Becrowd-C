#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    int menor = v[0], pos = 0;
    for(int i = 0; i < n; i++){
        if(v[i]<menor){
            menor = v[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);
    return 0;
}