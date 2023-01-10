#include<bits/stdc++.h>

//Kayki Letieri

int main(void){

    int vetor[10], x[10],maior,aux;

//Leitura de valores
    for(int i=0; i<10; i++){
            scanf("%d",&vetor[i]);
    }
//Maior valor

maior = vetor[0];

    for(int i=0; i<10; i++){
            if(vetor[i]>maior){
                maior = vetor[i];
            }
        }

//Multiplicar pelo maior valor e armazenar em um outro vetor

    for(int i=0; i<10; i++){
        aux=vetor[i]*maior;
        x[i]=aux;
        aux=0;
    }

//

    for(int i=0; i<10; i++){
        printf("\n %d",x[i]);
    }

return 0;
}
