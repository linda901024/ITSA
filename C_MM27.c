//[C_MM27-易] 計算兩整數間所有整數的總和
//試寫一個程式，輸入兩個整數，並計算兩整數間所有整數的總和。
//Input：輸入兩個整數。
//Output：輸出兩整數之間所有整數的總和。
#include <stdio.h>
int main(){
    int begin, end, sum;
    scanf("%d %d", &begin, &end);
    for(int i = begin; i <= end; i++){
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}