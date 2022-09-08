#include <stdio.h>

int main() {
    int array[20];
    int size = 0;
    int input;
    scanf("%d" ,&size);

    for (int i = 0; i<size; i++){
        scanf("%d", &input);
        array[i] = input;
    }
    for (int i = size-1; i>=0; i--){
        printf("%d,",array[i]);
    }
    printf("\n");
    return 0;
}
