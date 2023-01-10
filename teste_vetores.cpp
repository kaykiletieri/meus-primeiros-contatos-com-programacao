#include<bits/stdc++.h>

int main(void){

    float notas[5]={0},total=0,media=0;

    printf("Digite 5 notas:\n");

    for (int i=0; i<5; ++i){
        scanf("%f",&notas[i]);
    }

    for (int i=0; i<5; ++i){
        total= total+notas[i];
    }

    media=total/5;
    printf("%.1f", media);

    return 0;
}
