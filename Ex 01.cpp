#include<bits/stdc++.h>

//Kayki Letieri

int main(void){

    int x[20],aux;

//Leitura de valores
    for(int i=0; i<20; i++){
            scanf("%d",&x[i]);
    }
//Ordenação
        for(int i=0; i<20; i++){
            for(int y=i+1; y<20; y++){

               if(x[i]>x[y]){
                    aux=x[i];
                    x[i]=x[y];
                    x[y]=aux;
               }

            }
        }

         for(int i=0; i<20; i++){
            printf("\n%d",x[i]);
    }

return 0;
}
