// variable is a container to store something inside it

// DATA Types

// 1. int
// 2. char
// 3. float
// 4. bool
// 5. double

#include <iostream>
using namespace std;
int main()
{
   int age = 90;
   cout << age; // Output: 90
   return 0;
}


// DTA TYPE = FLOAT
#include <iostream>
using namespace std;
int main()
{
   float price = 70.9437;
   cout << price; // Output: 70.9437
   return 0;
}


// DATA TYPE: bool
// (false = 0, true = 1)
#include <iostream>
using namespace std;
int main()
{
   bool isSafe = false;
   cout << isSafe; // Output: 0
   return 0;
}


// DATA TYPE: double

#include <iostream>
using namespace std;
int main()
{
   double price = 100.6555;
   cout << price; // OUTPUT: 100.6555
   return 0;
}

// CONVERSION OF CHAR INTO INTEGER

#include <iostream>
using namespace std;
int main()
{
   char name = 'A';
   int value = name;
   cout << value;
   return 0;
}

// TYPE CONVERSION AND TYPECAST

#include <iostream>
using namespace std;
int main()
{
   double price = 1235.1511516;
   int NewPrice = (int)price;
   cout << NewPrice;
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
   bool itisfun = true;
   bool itisnot = false;
   cout << boolalpha; // It is used to print TRUE/FALSE instead of 1/0 as output
   cout << itisfun << "\n";
   cout << itisnot;
   return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
   string MyName = "Hrituraj Kauhsik";
   cout << MyName;
   return 0;
}


