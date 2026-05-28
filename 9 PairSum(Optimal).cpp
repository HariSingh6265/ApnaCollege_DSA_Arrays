// #include <iostream>
// using namespace std;

// int main(){
//     int arr[6] = { 1,2,14,15,26 };
//     int ps=0;
//     int i=0;
//     int j= 4;
//     int ts=16;

//     while (i<j){
//         ps = arr[i] + arr[j];
        
//         if(ts>ps){
//             i++;
//         }
//         else if(ts<ps){
//             j--;
//         }
//         else 
//         cout<< arr[i]<< " " << arr[j];
//         break;
        
//     }
//     return 0;
// }


//     while (i < j) {
//         ps = arr[i] + arr[j];

//         if (ts > ps) {
//             i++; // Sum is too small, move the left pointer up
//         }
//         else if (ts < ps) {
//             j--; // Sum is too big, move the right pointer down (Fixed from j++)
//         }
//         else {
//             // Match found! 
//             cout << arr[i] << " " << arr[j];
//             break; // This stops the loop immediately so it doesn't run forever
//         }
//     }
//     return 0;
// }





#include <iostream>
using namespace std;

int main(){
    int arr[5] = { 1, 2, 14, 15, 26 };
    int ps = 0;
    int i = 0;
    int j = 4; // Right pointer
    int ts = 16;

    while (i < j){
        ps = arr[i] + arr[j];
        
        if(ts > ps){
            i++; // Increase the sum
        }
        else if(ts < ps){
            j--; // DECREASE the sum (Fixed from j++)
        }
        else {
            cout << arr[i] << " " << arr[j];
            break; // Stop once we find 2 and 14
        }
    }
    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     // Only 5 elements, so size is 5
//     int arr[] = { 1, 2, 14, 15, 26 };
//     int n = sizeof(arr) / sizeof(arr[0]); 
//     int ps = 0;
//     int i = 0;
//     int j = n-1; // Last element (26)
//     int ts = 16;

//     while (i < j) {
//         ps = arr[i] + arr[j];
        
//         if (ps < ts) {
//             i++; 
//         }
//         else if (ps > ts) {
//             j--; 
//         }
//         else {
//             // Ensure you are printing arr[i], not just i
//             cout << "Found: " << arr[i] << " and " << arr[j] << endl;
//             break; 
//         }
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 14, 15, 26};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int i = 0, j = n - 1;
//     int ts = 16;

//     while (i < j) {
//         int ps = arr[i] + arr[j];

//         if (ps < ts) i++;
//         else if (ps > ts) j--;
//         else {
//             cout << "Found: " << arr[i] << " and " << arr[j] << endl;
//             return 0;  // exit immediately
//         }
//     }

//     cout << "No pair found" << endl;
//     return 0;
// }



