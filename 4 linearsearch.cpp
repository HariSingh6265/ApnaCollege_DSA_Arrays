#include <iostream>
using namespace std;

int ls(int arr[],int size, int target) {
    for(int i = 0; i < size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

     int main(){
     //linear search
    //  array.. target..  if arr[i] = target.. return i
     int size = 5;
     int arr[size] = {10,20,32,34,76};
     int target = 34;
cout << ls(arr, size, target);
     return 0;
}