#include <iostream>
using namespace std;

     int main(){
    //  int marks [5] = {1 , 2 , 3 , 4 , 5};
    
    //  cout << marks [0]<< endl; 
    //  cout << marks [1]<< endl;
    //  cout << marks [2]<< endl;
    //  cout << marks [3]<< endl;
    //  cout << marks [4]<< endl;
    //  cout << marks [5]<< endl;
    

    int size = 5;
    int marks [size];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the marks of student " << i + 1 << endl;
        cin >> marks [i];
    }  


    for (int i = 0; i < 5; i++)
    {
        cout << marks [i]<< endl;
        cout<< "The marks of student " << i + 1 << " is " << marks [i]<< endl;
    }


     return 0;
}