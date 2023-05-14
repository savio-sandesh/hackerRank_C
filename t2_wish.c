#include <stdio.h>
int main(int argc, char const *argv[])
{
    int hh,mm;
    scanf("%d %d",&hh,&mm);
    printf(hh>=4&&hh<=11?"Good Morning":hh>=12&&hh<=15?"Good Afternoon":hh>=16&&hh<=20?"Good Evening":"Good Night");

    return 0;
}

