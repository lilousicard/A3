#include <stdio.h>

int main() {
    int array [20];
    int input;
    int size = 0;
    int min = 0;
    int max = 0;
    scanf("%d",&size);
    for (int i=0; i<size; i++){
        scanf("%d", &input);
        array[i] = input;
    }
    scanf("%d", &min);
    scanf("%d", &max);

    for (int i = 0; i<size; i++){
        if (array[i]> min-1 && array[i]<max+1) printf("%d,", array[i]);
    }
    printf("\n");
    return 0;
}
