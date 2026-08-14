#include <stdio.h>

int main(){
    int n,m, cont=0;

    scanf("%d", &n);
    int v[n];

    scanf("%d", &m);
    int u[m];

    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    for(int i=0; i<m; i++){
        scanf("%d", &u[i]);
    }

    int max = (n>m) ? n : m;
    int r[max+1];
    int i=0;

    while(i<n || i<m || cont>0){
        int vVal = (i<n) ? v[i] : 0;
        int uVal = (i<m) ? u[i] : 0;

        int soma = vVal + uVal + cont;

        r[i] = soma%10;
        cont=soma/10;

        i++;
    }

    int tamanho_r = i;

    for (int j = 0; j < tamanho_r; j++) {
        printf("%d ", r[j]);
    }
    printf("\n");

    return 0;
}
