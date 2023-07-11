#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[]) {
    int input[3];
   
    int count[10] = {0,};

    string result;
    
    for(int i = 0; i<3; i++) {
        cin >> input[i];
        
    }
    int mul = input[0] * input[1] * input[2];

    result = to_string(mul);

    for(int j = 0; j<result.size();j++) {
        if(result[j] == '0') {
            count[0]++;
        }
        else if(result[j] == '1') {
            count[1]++;
        }
        else if(result[j] == '2'){
            count[2]++;
        }
        else if(result[j] == '3'){
            count[3]++;
        }
        else if(result[j] == '4'){
            count[4]++;
        }
        else if(result[j] == '5'){
            count[5]++;
        }
        else if(result[j] == '6'){
            count[6]++;
        }
        else if(result[j] == '7'){
            count[7]++;
        }
        else if(result[j] == '8'){
            count[8]++;
        }
        else if(result[j] == '9'){
            count[9]++;
        }
    }
    for(int k = 0; k<10;k++) {
        cout << count[k] << "\n";
    }
    return 0;
}