//----------------------------------------------ARRAYS-----------------------------------------------------

/* 
   Arrays are a type of data structure used to store the multiple values in a single variable
*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
      // To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:

      string cars[4] = {"Audi", "BMW", "Mercedes", "Prosche"}; // It shows an Array conataining strings in a variable named Cars.

      int num[4] = {10, 20, 30, 40}; // It shows an array containing integers in a variable named num.

/* In an array the characters, string, integers, are placed by their index 

   Like 1st element is at 0th position in an array { "Audi" & 10 } they are the first element but their position is 0th in the array
        2nd element is at 1st position in an array
        3rd element is at 2nd position in an array
        .
        .
        .
        .
        n  element has ( n-1 ) position in an array
*/
     return 0;
}


//--------------------------------Accessing an element in an array---------------------------------------

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

   string cars[4] = {"Audi", "BMW", "Mercedes", "Prosche"};

   cout<<"Element at 0th position is: "<<cars[0]<<endl;     // Outputs - Audi
   cout<<"Element at 1st position is: "<<cars[1]<<end;     // O/P - BMW
   cout<<"Element at 2nd position is: "<<cars[2]<<endl;   // O/P - Mercedes
   cout<<"Element at 3rd position is: "<<cars[3]<<endl;  // O/P - Porsche

  // Same for accessing elements in an integer array.

   return 0;

}