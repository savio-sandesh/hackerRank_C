#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char a[100]; 
    char *b[5];
    int i;

   
    scanf("%s", a);

  
    b[0] = strtok(a, "&");
    for (i = 1; i < 5; i++) {
        b[i] = strtok(NULL, "&");
    }

   
    for (i = 0; i < 5; i++) {
        printf("%c", atoi(b[i]));
    }
    printf("\n");

    return 0;
}
