#include <iostream>
#include <vector>
using namespace std;

     int main(){
         //  cout<< v.size()<<endl;
     vector<int> v = {4,123,212,332,42,532}; // vector declaration

     for (int i : v){
     cout<< v[i]<<endl;  //ye index start 1 se hota hai.. isliye dikkat aati hai kbhi kbhi
    //  cout<< i<<endl;

     }
     return 0;
}