// #include <iostream>
// using namespace std;



// int main(){
//     int size = 13;
//     int arr[size] = {0,0,1,1,2,3,3,4,4,5,5,6,6};
//     int start = 0;
//     int end = 13;

//     while(start <=end ){
        
//         int mid = start + (end-start)/2;

//         if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]){
//             cout << arr[mid];
//         }

//         else if (mid%2 == 0){

//             if (arr[mid] == arr[mid-1]){
//                 end = mid-1;
//             }
//             else {
//                 start = mid+1;
//             }
        
//         }


//         else if (mid%2 != 0){

//             if (arr[mid] == arr[mid-1]){
//                 end = mid-1;
//             }
//             else {
//                 start = mid+1;
//             }
        
//         }
//         break;
//     }
        
//     }





    
#include <iostream>
using namespace std;

int main() {
    // 1. Initialize with values immediately
    int arr[] = {0, 0, 1, 1, 2, 2, 3, 3, 4, 5, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate actual size

    // 2. Handle edge cases (first or last element)
    if (n == 1) { cout << arr[0]; return 0; }
    if (arr[0] != arr[1]) { cout << arr[0]; return 0; }
    if (arr[n-1] != arr[n-2]) { cout << arr[n-1]; return 0; }

    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Found it! (mid is different from both neighbors)
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
            cout << "Found it: " << arr[mid] << endl;
            break; 
        }

        // Logic: In a "normal" paired array:
        // First element of a pair is at an EVEN index (0, 2, 4...)
        // Second element of a pair is at an ODD index (1, 3, 5...)
        
        if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) || 
            (mid % 2 != 0 && arr[mid] == arr[mid - 1])) {
            // We are in the "left" part of the single element
            start = mid + 1;
        } else {
            // We have passed the single element, it's to our left
            end = mid - 1;
        }
    }

    return 0;
}

