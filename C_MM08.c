//[C_MM08-易] 計算兩數和的平方值
//請撰寫一個程式，可計算兩數和的平方值。
//Input：輸入兩個數字。
//Output：輸出和的平方值。
#include<stdio.h>
int main(){
    int X, Y, sum;
    scanf("%d %d", &X, &Y);
    sum = X + Y;
    printf("%d\n", sum*sum);
    return 0;
}