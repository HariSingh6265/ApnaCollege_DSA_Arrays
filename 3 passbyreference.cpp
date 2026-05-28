#include <iostream>
using namespace std;


     void changearr(int arr[], int size){
         for (int i = 0; i < 3; i++){
        arr[i] = 2*arr[i];
        // cout << arr[i] << " ";
     }
    }


     int main(){

     int arr[3] = {1, 2, 3};

     changearr (arr, 3);

     for (int i = 0; i < 3; i++){
        // arr[i] = 2*arr[i];
        cout << arr[i] << " ";
     }
     cout << endl;
     return 0;
}