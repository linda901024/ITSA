//題目4. 停車費計算
//假設某個停車場的費率是停車2小時以內，每半小時30元
//超過2小時，但未滿4小時的部份，每半小時40元
//超過4小時以上的部份，每半小時60元，未滿半小時部分不計費。如果您從早上10點23分停到下午3點20分，請撰寫程式計算共需繳交的停車費。
//Input：輸入兩組時間，分別為開始與離開時間，24小時制。
//Output：輸出停車費。
#include <stdio.h>
int main(){
    int start_hour, start_min;
    int end_hour, end_min;
    int total_min, sum;
    scanf("%d %d %d %d", &start_hour, &start_min, &end_hour, &end_min);
    ////如果不夠減要從小時借位，補到分鐘
    if(start_min < 60){
        end_hour --;
        end_min = end_min + 60;
    }
    total_min = (end_hour - start_hour) * 60 + (end_min - start_min);
    if(total_min / 60 <= 2){ //2小時內，每半小時$30
        sum = (total_min / 30) * 30;
    }
    //超過2小時，但未滿4小時，每小時$40，要再加上原本兩小時內的$120
    else if(total_min / 60 > 2 && total_min / 60 < 4){
        sum = 120 + (total_min - 120) / 30 * 40;
    }
    //超過4小時以上，每小時$60，要再加上原本四小時內的$280
    else if(total_min / 60 >= 4){
        sum = 280 + (total_min - 240) / 30 * 60;
    }
    printf("%d\n", sum);
    return 0;
}