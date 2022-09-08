#include <stdio.h>

int main() {
    int array[9];
    int input = 0;
    int index = 0;
    while (input>=0 && index<9){
        scanf("%d", &input);
        if (input>-1){
            array[index] = input;
            index++;
        }
    }
    if (index>=9){
        printf("Too many numbers\n");
        return 0;
    }
    int middle = index/2;
    printf("Middle item: %d\n",array[middle]);
    return 0;
}
