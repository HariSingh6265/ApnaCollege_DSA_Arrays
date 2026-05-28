#include <iostream>
using namespace std;

     int main(){
     int size = 5;
     int arr[5] = {1,2,3,4,5};


     int st = 0;
     int end = 0;

     for (int st = 0; st <= size-1; st++){
        for (int end = st; end <= size-1; end++){
            for (int i = st; i <= end; i++){
                cout << arr[i];          
            }
         cout << " ";  
         }
         cout << endl;
 }
     return 0;
}