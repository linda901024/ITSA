//[C_MM07-易] 計算平方值與立方值
//請撰寫一個程式，輸入一個整數，計算平方值與立方值。
//Input：輸入一個整數。
//Output：輸出平方值與立方值。
#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    printf("%d %d %d\n", num, num*num, num*num*num);
    return 0;
}