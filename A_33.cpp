#include <iostream>
using namespace std;

int main() {
    int i,j;
    int score[5][4];
    int sum[5] = {0,};
    int max = 0;
    int num;
    for(i = 0; i<5; i++) {
        for(j = 0; j<4;j++) {
            cin >> score[i][j];
            sum[i] += score[i][j];
            
        }
    }

    for(i = 0; i<5;i++) {
        if(sum[i] > max) {
            max = sum[i];
            num = i;
        }
    }
    cout << num+1 << " " << sum[num];
}