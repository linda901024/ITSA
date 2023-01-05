//[C_MM02-易] 計算三角形面積
//計算下面三角形面積，並輸出面積結果。
//Input：每一組需輸入兩正整數，分別代表三角形的底及高。
//Output：輸出三角形面積。
#include <stdio.h>
int main(){
    float floor, height;
    scanf("%f %f", &floor, &height);
    printf("%.1f\n", floor * height / 2);
    return 0;
}