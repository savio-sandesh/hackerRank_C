#include <stdio.h>

int main() {
    int n, s, c, h, l, t;
    scanf("%d %d %d %d %d %d", &n, &s, &c, &h, &l, &t);

    int total_chapters = s * c;
    int total_study_hours = (n - l) * t;
    int hours_needed = total_chapters * h;
    
    if (hours_needed <= total_study_hours) {
        printf("Goa Jaayenge\n");
    } else {
        printf("Padhai Karenge\n");
    }
    
    return 0;
}
