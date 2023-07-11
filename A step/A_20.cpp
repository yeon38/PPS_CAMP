#include <iostream>
#include <string>
using namespace std;

int main() {
    int one[2];
    int two[2];
    int three[2];
    int four[2];
    int person[4];
    int max = 0;
    cin >> one[0] >> one[1];
    cin >> two[0] >> two[1];
    cin >> three[0] >> three[1];
    cin >> four[0] >> four[1];

    person[0] = one[1] - one[0];
    person[1] = person[0] + two[1] - two[0];
    person[2] = person[1] + three[1] - three[0];
    person[3] = person[2] + four[1] - four[0];

    for(int i = 0; i<4;i++) {
        if(person[i] > max){
            max = person[i];
        }
    }
    cout << max;

    return 0;
}