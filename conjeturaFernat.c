#include <stdio.h>
#include <math.h>

int main(){
    int a=0,b=0,c=0,n=0;
    int izq=0, der=0;
    for ( n = 3; n < 100; n++){
        for ( a = 3; a < 100; a++){
            for ( b = 3; b < 100; b++){
                for ( c = 3; c < 100; c++){
                    izq = pow(a,n) + pow(b,n);
                    der= pow(c,n);
                    if (izq == der){
                        printf("Se cumple la igualdad\n");
                    }else{
                        printf("No hay igualdad\n");
                    }
                }
            }
        }
    }
    return 0;
}