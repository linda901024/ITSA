//題目8. 質數判別
//試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數
//Input：輸入一個正整數。
//Output：質數顯示 YES ；非質數顯示 NO 。
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int prime(int num){
    int i;
    for(i = 2; i * i <= num; i++){
        if(num%i==0)
            return FALSE;
    }
    return TRUE;
}

int main(){
    int num;
    while(scanf("%d", &num)!=EOF){
        if(num==1)
            printf("NO\n"); 
        else if(prime(num))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}