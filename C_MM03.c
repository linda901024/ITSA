//[C_MM03-易] 兩數總和
//請寫一個程式，讀入兩個數字，並求出它們的和。
//Input：輸入有多組測資，每一列為一組測資，每組輸入有兩個整數(int)。
//Output：輸出該兩整數的和(int)，每一列為一組輸出結果。
#include <stdio.h>
int main(){
    int X, Y;
    while(scanf("%d %d", &X, &Y)!=EOF)
        printf("%d\n", X + Y);
    return 0;
}