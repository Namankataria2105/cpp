// find the largest of three numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a >b && a > c){
        cout << "A";
    }
    else if(b > a && b > c){
        cout << "B";
    }
    else{
         cout << "C";
    }
    return 0;
}

