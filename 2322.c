#include <stdio.h>

int main(){
    int n = 0, count = 0, a = 0;
    scanf("%d", &n);
    int v[n];
    for(int i = 0; i<n-1; i++){
        scanf("%d", &v[i]);
    }
    for(int i = 1; i<=n; i++){
        count = 0;
        for(int j = 0; i<n-1; i++){
            if(i == v[j]){
                count++;
                break;
            }
        }
        if(count == 0){
            a = i;
            break;
        }
    }
    printf("%d\n", a);
    return 0;
}