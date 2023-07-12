#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int time[20];
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i<num;i++) {
        cin >> time[i];
    }
    for(int j = 0; j<num;j++) {
        sum1 += (time[j]/30+1) * 10;
        sum2 += (time[j]/60+1) * 15;
    }
    if(sum1 > sum2) {
        cout << "M " << sum2;
    }
    else if(sum1 < sum2) {
        cout << "Y " << sum1;
    }
    else {
        cout << "Y M " << sum1;
    }

}