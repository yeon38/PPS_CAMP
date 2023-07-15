#include <iostream>
#include <string>
using namespace std;

int main() {
    int result1 = 0;
    int result2 = 0;
    string number;
    string num[8];
    int n[8];
    cout << "Enter the number: ";
    cin >> number;
    for(int i = 0; i<8; i++) {
        num[i] = number[i];
        n[i] = stoi(num[i]);
        
    }
    for(int j = 0; j<7; j++) {
        if(n[j] - n[j+1] == 1) {
            result1 ++;
           
        }
        else if(n[j] - n[j+1] == -1) {
            result2++;
            
        }
        else {
            break;
        }
    }
    if(result1 == 7) {
        cout << "descending\n";
    }
    else if(result2 == 7) {
        cout << "ascending\n";
    }
    else {
        cout << "mixed\n";
    }
    return 0;
}