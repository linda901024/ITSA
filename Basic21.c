//題目21. 最大值與最小值
//寫一個程式來找出輸入的十個數字的最大值和最小值，數值不限定為整數，且值可存放於 float 型態數值內。
//Input：輸入十個數字，以空白間隔。
//Output：輸出數列中的最大值與最小值，輸出時需附上小數點後兩位數字。
#include<stdio.h>
int main()
{
    int idx = 0;
    float N, max, min;
    float num[10000] = {0};
    while(scanf("%f", &N)!=EOF){
        num[idx] = N;
        idx++;
    }
    max = num[0];
    min = num[0];
    for(int i = 0; i < idx; i++){
        if(num[i] > max) max = num[i];
        if(num[i] < min) min = num[i];
    }
    printf("maximum:%.2f\nminimum:%.2f\n", max, min);
    return 0;
}