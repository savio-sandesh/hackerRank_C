#include <stdio.h>
int main(int argc, char const *argv[])
{
    float cp,sp,loss,profit;
    float lp,pp;
    scanf("%d %d",&cp,&sp);
    loss=cp-sp;
    profit=sp-cp;

    pp=(profit/cp)*100;
    lp=(loss/cp)*100;

    if (sp>cp)
    {
        printf("Profit\n");
        printf("%.2f%%",pp);
    }
    else
    {
        printf("Loss\n");
        printf("%.2f%%",lp);
    }
    
    return 0;
}
