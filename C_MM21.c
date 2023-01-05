//[C_MM21-易] 算階乘
//算階乘
//Input：輸入一個整數 n，0 < n < 20
//Output：輸出答案
#include <stdio.h>
int main(){
    int n;
    long sum = 1;
    scanf("%d", &n);
    if(n > 0 && n < 20){
        for(int i = 1; i <=n; i++)
            sum *= i;
        printf("%ld\n", sum);
    }
    return 0;
}