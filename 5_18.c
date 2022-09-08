#include <stdio.h>

int main() {
    int x = 0;
    int max = 0;
    int numOfInput = 0;
    int array [20];
    scanf("%d" ,&numOfInput);

    for (int index = 0; index<numOfInput; index++){
        scanf("%d" ,&x);
        array[index] = x;
    }
    scanf ("%d",&max);
    for (int index = 0; index<numOfInput; index++) {
        if (array[index]<=max){
            printf("%d,",array[index]);
        }
    }
    printf("\n");
        return 0;
}

