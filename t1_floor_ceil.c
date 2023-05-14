#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float n;
    scanf("%f",&n);
    
    float floorvalue=floor(n);
    float ceilvalue=ceil(n);

    printf("Floor value is %f\n",floorvalue);
    printf("Ceil value is %f\n",ceilvalue);

    return 0;
}
