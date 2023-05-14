#include<stdio.h>
int main(int argc, char const *argv[])
{
    int inp,d1,d2;
    scanf("%d %d %d",&inp,&d1,&d2);
    if (inp % d1 == 0 && inp % d2 == 0)
    {
        printf("Yes.");
    }
    else
    {
        printf("N0.");
    }
    
    return 0;
}
