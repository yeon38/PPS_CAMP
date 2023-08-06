#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int a_count = 0;
        for ( int i = 0; i < s.length(); i++ ) {
            if ( i > 1 && s[i] == 'L' && s[i-1] == 'L' && s[i-2] == 'L' )
                return false;
            if ( s[i] == 'A' ) a_count++;
            if ( a_count == 2 ) return false;
        }
        return true;
    }
};