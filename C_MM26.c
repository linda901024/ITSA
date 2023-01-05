//[C_MM26-易] 輸出 1*1、2*2、...、N*N之結果
//試寫一個程式，輸入任意正整數N，並輸出 1*1、2*2、...、N*N之結果。
//Input：輸入一正整數。
//Output：輸出相乘的積。
#include <stdio.h>
int main(){
    int N, sum;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        sum = i * i;
        printf("%d*%d=%d\n", i, i, sum);
    }
    return 0;
}