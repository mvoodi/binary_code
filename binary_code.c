#include <stdio.h>

static void PositiveInt(int num, int array[]) {
    
    int i = 0;
    while (num!= 0) {
        int num1 = num;
        
        num = num / 2;
        array[i] = num1 - (num * 2);
        i = i + 1;
    }
    for (int a = i - 1; a >= 0; a--) {
        printf("%d ", array[a]);
    }
    printf("\n");
}

static void NegativeInt(int num, int array[]){
    int num1 = num * (-1);
    int i = 0;
    while (num1 != 0)
    {
        num1 = num1 / 2;
        i = i + 1;
    }
    int b = 7 - i;
    i = 0;
    while (i < b){
        array[i] = 0;
        i = i + 1;
    }
    while(num != 0){
        int num9 = num;

        num = num / 2;

        array[i] = num9 - (num * 2);
        i = i + 1;
    }

    for(int j = 0; j < 8; j++){
        if (array[j] == 0)
        {
            array[j] = 1;
        }
        else{
            array[j] = 0;
        }
        
    }
    for (int j = 7; j >= 0; j--){
        if (array[j] == 0)
        {
            array[j] = 1;
            break;
        }
        else{
            array[j] = 0;
        }
    }

    for (int a = 0; a < 8; a++) {
        printf("%d ", array[a]);
    }
    printf("\n");
}

static void DoubleNum (double num, int numAfterPoint, int array[]){
    int i = 0;
    int lastAns = 0;
    int mmry = numAfterPoint * 3;
    while (i < numAfterPoint || (i < mmry && lastAns == 0)){
        double a = num * 2;
        array[i] = (int)a;
        lastAns = array[i];
        num = a - (int)a;
        i = i + 1;
    }
    for (int b = 0; b < i; b++) {
        printf("%d ", array[b]);
    }
    
    if(i = mmry && lastAns == 0){
        printf("...After that, the answer will be only 0!");
    }
    printf("\n");
}

int main(){
    int numbersAfterPoint = 50;
    double num = 8.74;
    int intValue = (int)num;
    int intPart[8];
    int decPart[numbersAfterPoint*3];
    if(num - (double)intValue == 0.0 && num > 0){
        PositiveInt(num, intPart);

    }
    else if(num - (double)intValue == 0.0 && num < 0){
        NegativeInt(num, intPart);
    }
    else if(num - (double)intValue > 0.0 && num > 0){
        int intNum = (int) num;
        double decPartNum = num - (double)intNum;
        PositiveInt(intNum, intPart);
        DoubleNum(decPartNum, numbersAfterPoint, decPart);

    }

    return 0;

}
