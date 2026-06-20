#include <iostream>
using namespace std;

     int main(){
    //  2 ptr approach ka use krenge...
    //  ek start and ek end ptr banaenge aur usme 1st and last element dalenge aur uske baad 2nd ptr start se end tk traverse krenge and uske baad start and end dono ptr ko 1st and last element se replace kr denge...
    //print all sub array

    
    int arr[5]={-1,-2,3,4,-5};  
    int start;
    int end;
    int ms=0;
    
    for (int start = 0; start < 5; start++){
         int cs=0;
     for (int end = start; end < 5; end++){
          // for(int i = start; i <= end; i++){
              cs +=arr[end];
              ms = max(cs,ms);
              if (cs<0){
               cs=0;
              }
          
     }
    
    }
    cout<< "MS = "<< ms;

     return 0;
}