//-------------------------------------- ARRAYS -------------------------------------

/*
   Arrays are a type of data structure used to store multiple values in a single variable.
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    // To declare an array, define the variable type, specify the name of the array

    // followed by square brackets and specify the number of elements it should store:

    string cars[4] = {"Audi", "BMW", "Mercedes", "Prosche"}; // Array containing strings.
    
    int num[4]    = {10, 20, 30, 40};                        // Array containing integers.

    /* In an array the characters, strings, integers, are placed by their index.
       The first element has index 0, the second element index 1, and so on.
       Example:
         0 -> "Audi"
         1 -> "BMW"
         2 -> "Mercedes"
         3 -> "Prosche"
       The nth element has index n-1.
    */

    return 0;
}


//------------------------- Accessing an element in an array -----------------------------

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string cars[4] = {"Audi", "BMW", "Mercedes", "Prosche"};

    cout << "Element at 0th position is: " << cars[0] << endl; // Outputs - Audi
    cout << "Element at 1st position is: " << cars[1] << endl; // Outputs - BMW
    cout << "Element at 2nd position is: " << cars[2] << endl; // Outputs - Mercedes
    cout << "Element at 3rd position is: " << cars[3] << endl; // Outputs - Porsche

    // Same for accessing elements in an integer array.

    return 0;
}


//-------------------- Change specific elements from desired index --------------------------

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string cars[4] = {"Audi", "BMW", "Mercedes", "Prosche"};

    cars[0] = "Bugatti";
    cars[1] = "Ferrari";
    cars[2] = "Koenigsegg";
    cars[3] = "Pagani";

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;
    cout << cars[3] << endl;

    return 0;
}
