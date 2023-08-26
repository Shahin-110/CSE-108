#include<stdio.h>
int main()
{

    int A,B,T;
    scanf("%d%d",&A,&B);
    if(A<B)
    {
        T=B-A;
    }
    else
    {
        T=B-A+24;
    }

    printf("O JOGO DUROU %d HORA(S)\n",T);
    return 0 ;
}
