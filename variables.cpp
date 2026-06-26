// ============================================================
// VARIABLES AND DATA TYPES IN C++
// A variable is a container used to store data.
// ============================================================

// Common Data Types:
// 1. int    -> Stores whole numbers
// 2. char   -> Stores a single character
// 3. float  -> Stores decimal numbers (single precision)
// 4. bool   -> Stores true or false
// 5. double -> Stores decimal numbers (double precision)

#include <iostream>
using namespace std;

int main()
{
    int age = 90;

    cout << age;      // Output: 90

    return 0;
}



// ============================================================
// DATA TYPE: FLOAT
// Stores decimal numbers with single precision.
// ============================================================

#include <iostream>
using namespace std;

int main()
{
    float price = 70.9437;

    cout << price;    // Output: 70.9437

    return 0;
}



// ============================================================
// DATA TYPE: BOOL
// A bool variable stores only two values:
// true  -> 1
// false -> 0
// ============================================================

#include <iostream>
using namespace std;

int main()
{
    bool isSafe = false;

    cout << isSafe;   // Output: 0

    return 0;
}




// ============================================================
// DATA TYPE: DOUBLE
// Double stores decimal numbers with higher precision than float.
// ============================================================

#include <iostream>
using namespace std;

int main()
{
    double price = 100.6555;

    cout << price;    // Output: 100.6555

    return 0;
}



// ============================================================
// CONVERSION OF CHAR TO INTEGER (ASCII VALUE)
// Every character has an ASCII value.
//
// Example:
// 'A' -> 65
// 'a' -> 97
// '0' -> 48
// ============================================================

#include <iostream>
using namespace std;

int main()
{
    char name = 'A';

    int value = name;

    cout << value;    // Output: 65

    return 0;
}



// ============================================================
// TYPE CASTING
// Converting one data type into another.
//
// Explicit Type Casting:
// We manually convert the data type.
//
// Syntax:
// (datatype)variable
// ============================================================

#include <iostream>
using namespace std;

int main()
{
    double price = 1235.1511516;

    int newPrice = (int)price;

    cout << newPrice;     // Output: 1235

    return 0;
}




// ============================================================
// PRINTING BOOLEAN VALUES USING boolalpha
//
// By default:
// true  -> 1
// false -> 0
//
// boolalpha prints:
// true
// false
// ============================================================

#include <iostream>
using namespace std;

int main()
{
    bool itIsFun = true;
    bool itIsNot = false;

    cout << boolalpha;

    cout << itIsFun << "\n";
    cout << itIsNot;

    return 0;
}




// ============================================================
// DATA TYPE: STRING
// A string stores multiple characters (text).
//
// To use string, include:
// #include <string>
// ============================================================

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string myName = "Hrituraj Kaushik";

    cout << myName;

    return 0;
}




// ============================================================
// AUTO KEYWORD
//
// The auto keyword automatically detects the data type
// based on the value assigned to the variable.
//
// Examples:
// auto x = 10;      -> int
// auto y = 5.5;     -> double
// auto z = 'A';     -> char
// ============================================================

#include <iostream>
#include <string>

using namespace std;

int main()
{
    auto integerX = 234;
    cout << integerX << "\n";

    auto characterA = 'W';
    cout << characterA << "\n";

    auto floatC = 30.54;
    cout << floatC << "\n";

    auto doubleD = 45.5476097409457;
    cout << doubleD << "\n";

    auto stringY = string("Hrituraj Kaushik");
    cout << stringY;

    return 0;
}
