//[C_MM04-易] 計算總和、乘積、差、商和餘數
//撰寫一個程式，要求使用者輸入兩個數字，再從使用者取得這兩個數
//然後印出這兩個數字的總和、乘積、差、商、和餘數。
//Input：輸入兩個整數。
//Output：輸出總和、乘積、差、商、和餘數。
//*餘數≧0*
#include <stdio.h>
int main(){
    int X, Y, remainder;
    scanf("%d %d", &X, &Y);
    printf("%d+%d=%d\n", X, Y, X + Y);
    printf("%d*%d=%d\n", X, Y, X * Y);
    printf("%d-%d=%d\n", X, Y, X - Y);
    //因為輸出的餘數要大於等於0，但如果是正負數相除的餘數可能為負的
    //所以要做以下判斷調整
    remainder = X % Y;
    if(remainder >= 0){
        printf("%d/%d=%d...%d\n", X, Y, X / Y, X % Y);
    }
    else{
        int quotient = X / Y;
        if(quotient < 0) quotient -= 1;
        else quotient += 1;
        remainder = X - Y * quotient;
        printf("%d/%d=%d...%d\n", X, Y, quotient, remainder);
            
    }
    return 0;
}