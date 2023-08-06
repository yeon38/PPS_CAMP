#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for ( int i : bills ) {
            if ( i == 5 ) {
                five++;
            }
            if ( i == 10 ) {
                if ( five < 1 ) return false;
                ten++;
                five--;
            }
            if ( i == 20 ) {
                if ( ten > 0 && five > 0 ) {
                    ten--;
                    five--;
                }
                else if ( five > 2 )
                    five -= 3;
                else return false;
            }
        }
        return true;
    }
};