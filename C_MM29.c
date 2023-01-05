//[C_MM29-易] 最大質數問題
//試撰寫一個程式，可輸入一個整數，並找出小於此數的最大質數。
//Input：輸入一個正整數。
//Output：輸出最大質數。
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int prime(int num){
    int i;
    for(i = 2; i * i <= num; i++){
        if(num % i == 0)
            return FALSE;
    }
    return TRUE;
}

int main(){
    int num;
    scanf("%d", &num);
    for(int i = num - 1; i >= 2; i --){
        if(prime(i)){
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}