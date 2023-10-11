#include <stdio.h>

int main(){
    int n = 0;
    while (scanf("%d", &n) != EOF){
        int c = n;
        int m[n][n];
        for(int i = 0; i<n; i++){
            for(int j = 0;  j<n; j++){
                if(j==c-1){
                    m[i][j] = 2;
                    c--;
                }
                else if(i==j){
                    m[i][j] = 1;
                }
                else{
                    m[i][j] = 3;
                }
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j < n; j++){
                if(j != n-1){
                    printf("%d", m[i][j]);
                }
                else{
                    printf("%d\n", m[i][j]);
                }
            }
        }
    }
    return 0;
}