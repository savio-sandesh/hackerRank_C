#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);

    float power=pow(a,b);
    float sqroot=sqrt(c);

    printf("%f %f",power,sqroot);


    return 0;
}
