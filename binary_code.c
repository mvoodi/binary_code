#include <stdio.h>



int main(){
    int numbersAfterPoint = 4;
    double num = 10;
    int intValue = (int)num;
    int intPart[8];
    int decPart[numbersAfterPoint];
    if(num - (double)intValue == 0.0 && num > 0){
        PositiveInt(num, intPart[]);

    }
    else if(num - (double)intValue == 0.0 && num < 0){

    }
    else if(num - (double)intValue > 0.0 && num > 0){

    }
    else if(num - (double)intValue < 0.0 && num < 0){

    }

}

static void PositiveInt(int num, int array[]){
    int num1 = num;
    int i = 0;
    while(num != 0){
        array[i] = num1 % 2;
        num1 = num1 / 2;
        i = i + 1;
    }
    for(int a = i; a >= 0; a--){
        printf(array[a]);
    }
}