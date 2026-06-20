#include <iostream>
using namespace std;

int main(){
    int n = 7;
    int hs[7]  = { 3, 2,-5,0,4,-7,8};

    int m=0;
    for (int s=0; s<7; s++){
        int c=0;
        for (int e=s; e<7; e++){
            c = c + hs[e];
            m = max(c,m);
        }
    }
    cout << m;
    return 0;
}