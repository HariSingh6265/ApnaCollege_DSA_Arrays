// #include <iostream>
// #include <climits> // 👈 INT_MAX yahan se aata hai
// using namespace std;

// int main() {
//     int size = 6;
//     int num[] = {5, 15, 22, 1, -15, 24};
//     int smallest = INT_MAX;

//     for (int i = 0; i < size; i++) {
//         if (num[i] < smallest) {
//             smallest = num[i];
//         }
//     }

//     cout << smallest << endl;
//     return 0;
// }
#include <iostream>
#include<climits>
using namespace std;


int main () {

int size = 6;
int num [size] = { 112 , 21 , -32 , 1 , -12 , 23 };
int greatest = INT_MIN;


for (int i = 0;  i < size ; i++){

      if ( num [i] > greatest ){
      
                   greatest = num[i];
               }
       }

cout<< "The smallest number is " << greatest;

return 0;
}