#include <stdio.h>

int main() {
    int x;
    scanf("%d" ,&x);

    while (x>0){
        printf("%d", x%2);
        x = x/2;
    }
    printf("\n");
    return 0;
}
