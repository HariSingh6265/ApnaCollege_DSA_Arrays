#include <iostream>
using namespace std;

     void reverseArray (int arr[], int size){
     int start = 0;
     int end = size - 1;
     
        while (start < end){
            swap(arr[start], arr[end]);
            start ++;
            end --;
        }

     }
     
     int main(){
     int size = 7;
     int arr[size] = {1,2,3,4,5,6,7};
          
    reverseArray(arr, 7);
    cout << "Reversed Array: " << endl;
    for (int i=0; i<size; i++){
        cout<< arr[i];
        cout << endl;
    }
    
     return 0;
}