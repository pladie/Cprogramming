#include <stdio.h>
#include <stdlib.h>
int i;
int suma(int N,int S){
    for(i=2;i<N;i++){
            if(N % i==0){
                    S=S+i;
            }
    }
    return S;
}

int main(){
    int n1,n2;
    int sum1=1,sum2=1;
    printf("ingrese el primer numero\n");
    scanf("%d",&n1);
    printf("ingrese el segundo numero\n");
    scanf("%d",&n2);
    sum1=suma(n1,sum1);
    sum2=suma(n2,sum2);
    if((sum1==n2)&&(sum2==n1)){
    printf("los numeros %d y %d Si son numeros amigos",n1,n2);
    }else{
    printf("los numeros %d y %d No son numeros amigos",n1,n2);
    }
  return 0;
}
