#include <stdio.h>

static void PositiveInt(int num, int array[]) {
    int num1 = num;
    int i = 0;
    while (num1 != 0) {
        array[i] = num1 % 2;
        num1 = num1 / 2;
        i = i + 1;
    }
    for (int a = i - 1; a >= 0; a--) {
        printf("%d ", array[a]);
    }
    printf("\n");
}

int main(){
    int numbersAfterPoint = 4;
    double num = 10;
    int intValue = (int)num;
    int intPart[8];
    int decPart[1];
    if(num - (double)intValue == 0.0 && num > 0){
        PositiveInt(num, intPart);

    }
    // else if(num - (double)intValue == 0.0 && num < 0){

    // }
    // else if(num - (double)intValue > 0.0 && num > 0){

    // }
    // else if(num - (double)intValue < 0.0 && num < 0){

    // }

    return 0;

}
