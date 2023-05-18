#include <stdio.h>

int main() {
    int N, B, G, I, D;
    scanf("%d %d %d %d %d", &N, &B, &G, &I, &D);

    int anger_level = B * I - G * D;
    if (anger_level > 0) {
        printf("Simple Questions\n");
    } else if (anger_level < 0) {
        printf("Funny Questions\n");
    } else {
        printf("God Knows!\n");
    }

    return 0;
}

