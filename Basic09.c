//ITSA Basic 9
//輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。
#include <stdio.h>
#define MAX 10000
int main(){
    int N, idx = 0, sum = 0;
    scanf("%d", &N);
    int num[MAX] = {0};
    for(int i = 1; i <= N; i++){
        //可整除3的數另外存到陣列
        if(i % 3 == 0){
            num[idx] = i;
            idx ++;
        }
    }
    //計算總合
    for(int i = 0; i < idx; i++){
        sum += num[i];
    }
    printf("%d\n", sum);
    return 0;
}