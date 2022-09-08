#include <stdio.h>

int main() {
    int array [20];
    int input;
    int size = 0;
    int min = 0;
    int secMin = 0;
    scanf("%d",&size);
    for (int i=0; i<size; i++){
        scanf("%d", &input);
        array[i] = input;
    }

    min = array[0];
    secMin = array[1];
    if (min>secMin){
        int temp = min;
        min = secMin;
        secMin = temp;
    }
    for (int index = 2; index<size; index++){
        int num = array[index];
        if (num<min){
            secMin = min;
            min = num;
        } else if (num<secMin){
            secMin = num;
        }
    }
    printf("%d and %d",min,secMin);
    printf("\n");
    return 0;
}
