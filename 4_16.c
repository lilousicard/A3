#include <stdio.h>

int main() {
    int x = 0;
    int max=0;
    float total = 0;
    float numOfInput = 0;
    scanf("%d" ,&x);

    while (x>=0){
        if(max<x) max =x;
        total+=x;
        numOfInput++;
        scanf("%d" ,&x);
    }
    printf("%d %0.2lf\n",max, total/numOfInput);
    return 0;
}
