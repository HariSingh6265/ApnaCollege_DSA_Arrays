#include <iostream>
using namespace std;

int main(){
int arr[5] = {1,2,3,4,5};
int target = 9;

for (int i = 0; i < 5; i++ ){
    for (int j = i+1 ; j < 5; j++){
        if(arr[i]+ arr[j] == target){
            cout << arr[i] << " " << arr[j];
        }
    }
}
return 0;
}