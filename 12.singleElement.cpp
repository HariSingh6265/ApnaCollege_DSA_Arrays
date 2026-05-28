#include <iostream>
using namespace std;

int main(){

    int hs[13] = {1,3,5,3,1,34,45,45,34,5,7,8,8};
    int ans = 0;
        for(int i = 0; i < 13; i++){
            ans = ans ^ hs[i];  // XOR PROPERTY USED : n^n=0;
        }                       // 0^0=0; 1^1=0;  butttt.. 0^1=1; 1^0=1
    cout << ans;

    return 0;

}