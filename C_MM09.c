//[C_MM09-易] 計算 i 次方的值
//請撰寫一個程式，計算2的 ｉ次方的值。(提示：利用位移運算元)
//Input：輸入一個正整數，i的值小於31。
//Output：輸出 的ｉ次方的值。
//若 i > 31 輸出 "Value of more than 31"
#include<stdio.h>
int main(){
    int i, sum = 1;
    scanf("%d", &i);
    if(i <= 31){
        for(int j = 0; j < i; j++){
            sum *= 2;
        }
        printf("%d\n", sum);
    }
    else
        printf("Value of more than 31\n");
    return 0;
}