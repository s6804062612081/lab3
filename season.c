#include <stdio.h>

int main() {
    int month;
    scanf("%d",&month);
    switch (month){
        case 1:
            printf("winter");
            break;
        case 3:
            printf("spring");
            break;
        case 6:
            printf("summer");
            break;
        case 9:
            printf("fall");
            break;
        default:
            printf("");
    }
    return 0;
}