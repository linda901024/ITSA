//[C_MM01-易] 計算梯型面積
//計算下面梯形面積，並輸出面積結果。
//Input：每一組依序分別輸入梯形的上底、下底及高的整數。
//Output：輸出梯形面積。
#include<stdio.h>
int main(){
    float height, up, down;
    float area;
    scanf("%f %f %f", &up, &down, &height);
    area = (up + down) * height / 2;
    printf("Trapezoid area:%.1f\n", area);
    return 0;
}