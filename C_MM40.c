//[C_MM40-易] 1~N之間的總和
//撰寫一個程式，輸入一個正整數 N ( 0 < N < 100 ) ，計算 1 ～ N 之間 的總和。
//Input：輸入一個正整數。
//Output：輸出總和，顯示格式如範例。
#include<stdio.h>
int main(){
    int N, sum = 0;
    scanf("%d", &N);
    if(N == 1) printf("%d = %d\n", N, N);
    else if(N > 1){
        for(int i = 1; i <= N; i++){
            sum += i;
        }
        for(int i = 1; i < N; i++){
            printf("%d + ", i);
        }
        printf("%d = %d\n", N, sum);
    }
    return 0;
}