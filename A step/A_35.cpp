#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int num;
    cin>>num;
 
    double a;
 
    char ch;
 
    for(int i=0; i<num; i++){
    cin>>a;
 
    while(1){
        cin.get(ch);
        if(ch=='\n'){
            break;
        }
        if(ch=='@'){
            a*=3;
        }
 
        if(ch=='%'){
            a+=5;
        }
 
        if(ch=='#'){
            a-=7;
        }
    
    }
    cout<<fixed;
    cout.precision(2);
    cout<<a<<"\n";
    }
}