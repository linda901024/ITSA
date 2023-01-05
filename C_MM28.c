//[C_MM28-易] 計算1到N之間屬於5和7的倍數
//試寫一個程式，讓使用者輸入任意正整數 N ，可計算出 1 到 N 之間屬於 5 和 7 的倍數的數值。
//Input：輸入一個正整數。
//Output：輸出 5 和 7 的倍數的數字。
#include<stdio.h>
#define MAX 1000
int main(){
    int N, num[MAX], idx = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        //5 和 7 的倍數的數字
        if(i % 35 == 0){
            num[idx] = i;
            idx++;
        }
    }
    for(int i = 0; i < idx - 1; i++){
        printf("%d ", num[i]);
    }
    printf("%d\n", num[idx-1]);
    return 0;
}