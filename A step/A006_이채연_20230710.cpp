#include <string>
#include <iostream>
using namespace std;

bool solution(string s) {
    int cp = 0;
    int cy = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'p' || s[i] == 'P') {
            cp++;
        }
        if (s[i] == 'y' || s[i] == 'Y') {
            cy++;
        }
    }
    if (cp == cy) {
        return true;
    }
    else {
        return false;
    }
}

int main(void) {
    string input;
    cout << "Enter the string:";
    cin >> input;

    bool result = solution(input);
    if (result) {
        cout << "The number of 'p' or 'P' is equal to the number of 'y' or 'Y'." << endl;
    }
    else {
        cout << "The number of 'p' or 'P' is not equal to the number of 'y' or 'Y'." << endl;
    }

    return 0;
}
