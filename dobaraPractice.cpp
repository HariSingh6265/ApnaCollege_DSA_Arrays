// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5] = {12 , 23 , 34 , 45 , 4567};
    
//     for (int i = 0; i <= 4; i++){
//         cout << arr[i] << " " ;
//         // cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int size;
    
//     cout << "Enter size of array :";
//     cin >> size;
//     cout << "enter elements of array (one by one)";
    
    
//     int arr[size];
//     for (int i = 0; i < size; i++){
//     cin >> arr [i];
//     // cout << endl;
//    }

//     for (int i = 0; i < size; i++){
//     cout << arr [i];
//     cout << endl;
//    }
//    return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std;


// int main(){
//     vector<int> hari={1,2,3,4,5};
//     for (int car: hari){
//         cout << hari[car] << endl;
//     }
//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// int main () {
//     vector<int> hari = {12,13,14,15,16,27,1,18,19,20};
//         for(int i = 0; i < 10; i++){
//              cout << hari[i]<< " ";
//     }
//     cout<< endl;
//     cout << hari.size() << endl;
//     hari.push_back(24);
//     hari.push_back(34);
//     cout<< hari.size() << endl;
//     hari.pop_back();
//     cout<< hari.size() << endl;
//     cout<< hari.front()<< endl;
//     cout<< hari.back()<< endl;
// return 0;
// }





// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> hs = {1,2,3,4,5,6,7};

//     //print all the subarrays

//     //start 0 -> 6 
//     //end   0 -> 6
//     // cout << 

//     for (int start = 0; start < 6; start++){
//         for (int end = start; end <= 6; end++){
//             for (int i = start; i < end ; i++){
//                 cout << hs[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int n = 7;
//     int hs[7]  = { 3, 2,-5,0,4,-7,1};

//     int m=0;
//     for (int s=0; s<7; s++){
//         int c=0;
//         for (int e=s; e<7; e++){
//             c = c + hs[e];
//             m = max(c,m);
//         }
//     }
//     cout << m;
//     return 0;
// }