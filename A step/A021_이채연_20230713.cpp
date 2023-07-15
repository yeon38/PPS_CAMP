#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int sum = 0;
    cin >> n;
    for(int i = 0; i<n; i++) {
        int tap;
        cin >> tap;
        sum += tap;
    }
    sum -= (n-1);
    cout << sum << "\n";
    
}