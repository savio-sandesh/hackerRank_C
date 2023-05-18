#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,y,z,r,m;
    scanf("%d %d %d",&x,&y,&z);
    
    r=(x+y+abs(x-y))/2;
    m=(r+z+abs(r-z))/2;
    printf("%d",m);
    

    return 0;
}
