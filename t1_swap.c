#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    scanf("%d %d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("Now a becomes %d and b becomes %d",a,b);
    return 0;
}
