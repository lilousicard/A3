#include <stdio.h>

int main() {
    char str2[20][10];
    char str[10];
    char searchCharacter;
    int size = 0;
    scanf("%d",&size);
    for (int i=0; i<size; i++){
        scanf("%s", &str);
        int arrSize = sizeof str2[0]/ sizeof str2[0][0];
        for(int j =0; j<arrSize; j++){
            str2[i][j] = str[j];
        }
    }
    scanf(" %c", &searchCharacter);

    int rowSize = sizeof str2/sizeof str2[0];
    for (int i = 0; i<rowSize; i++){
        int colSize = sizeof str2[i]/ sizeof str2[i][0];
        for (int j = 0; j<colSize; j++){
            if(str2[i][j] == searchCharacter){
                printf("%s,",str2[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}

