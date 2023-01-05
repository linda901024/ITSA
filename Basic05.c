//題目5. 十進制轉二進制
//撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。
//Input：輸入一個整數，介於-128～127之間。
//Output：以8位元的二進制顯示。
#include <stdio.h>
int main(){
    int num;
    int binary[8] = {0};
    scanf("%d", &num);
    if(num < 0) //如果輸入是負數，就轉成正數
        num += 256;
    //求二進制
    for(int i = 7; i >=0; i--){
        binary[i] = num % 2;
        num /= 2;
    }
    for(int i = 0; i < 8; i++){
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}