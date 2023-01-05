//題目12. 遞迴程式練習
//請計算出 f (k) 。
//Input：輸入值為一個大於 1 的整數。
//Output：f(k) 的計算結果。
#include<stdio.h>
#define MAX 1000
int main()
{
    int f[MAX];
    f[0] = 1;
    f[1] = 2;
    int N, ans;
    while((scanf("%d", &N))!=EOF){
        if(N > 1){
            for(int i = 2; i <= N; i ++){
                f[i] = f[i-1] + f[i/2];
                ans = f[i];
            }
            printf("%d\n", ans);
        }
        else if(N == 0) printf("%d\n", f[0]);
        else if(N == 1) printf("%d\n", f[1]);
    }
    return 0;
}
