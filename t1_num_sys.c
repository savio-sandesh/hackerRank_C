// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d",&n);
//     printf("%i\n",n);
//     printf("%x\n",n);
//     printf("%X\n",n);
//     printf("%o\n",n);
//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);

    printf("Decimal: %d\n", n);
    printf("Octal: %o\n", n);
    printf("Hexadecimal (lowercase): %x\n", n);
    printf("Hexadecimal (uppercase): %X\n", n);

    return 0;
}
