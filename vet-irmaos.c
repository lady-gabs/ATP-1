#include <stdio.h>

int main() {
    int a[10], b[5], c[10]={0}, d[10]={0}, i, j, div=0;

    for (i=0; i<10; i++){
        scanf(" %d", &a[i]);
    }
    for (i=0; i<5; i++){
        scanf(" %d", &b[i]);
    }
    for(i=0; i<10; i++){
        if(a[i]%2==0){ // se o primeiro vetor é par
            for (j=0; j<5; j++){
                c[i]=c[i]+b[j];
            }
            c[i]=c[i]+a[i];
        }else
            continue;
        printf ("%d ", c[i]);
    }
    for (i=0; i<10; i++){
        if (a[i]%2!=0){ //se primeiro vetor é impar
            div=0;
            for (j=0; j<5; j++){
                if (a[i]%b[j]==0){
                    div++;
                }
            }
            d[i]=div;
        }else
            continue;
        printf ("%d ", d[i]);
    }
    return 0;
}