#include <stdio.h>

float media(void);

int main(){

    printf("%.2f", media());

    return 0;
}
float media(void){
    int num=0, i=0, j=0;
    float k;
    while(num>=0){
        scanf(" %d", &num);
        if(num<0){
            break;
        }
        i=i+num;
        j++;
    }

    k=(float)i/j;
    return k;
}

