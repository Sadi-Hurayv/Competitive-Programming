#include <stdio.h>

int main(){
    int N, j;
    char NUM[101];
    long long led;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
            scanf("%s", &NUM);
            j = 0;
            led = 0;
            for(j=0; ; j++)
            {
                if(NUM[j] == '\0')
                    break;
                if(NUM[j] == '1') led += 2;
                if(NUM[j] == '2') led += 5;
                if(NUM[j] == '3') led += 5;
                if(NUM[j] == '4') led += 4;
                if(NUM[j] == '5') led += 5;
                if(NUM[j] == '6') led += 6;
                if(NUM[j] == '7') led += 3;
                if(NUM[j] == '8') led += 7;
                if(NUM[j] == '9') led += 6;
                if(NUM[j] == '0') led += 6;
            }

            printf("%lld leds\n", led);
    }
    return 0;
}
