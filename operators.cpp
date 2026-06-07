// Arithematic, increment and decrement operator

#include <iostream>
using namespace std;
int main()
{
    int sum1 = 100;
    int sum2 = sum1 + 100;
    int sum3 = sum2 + sum2;
    cout << sum1 << "\n";
    cout << sum2 << "\n";
    cout << sum3;
}

#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    cout << x + y << "\n";
    cout << x - y << "\n";
    cout << x * y << "\n";
    cout << x / y << "\n";
    cout << x % y << "\n";
    int z = 5;
    ++z;
    cout << z << "\n";
    int a = 9;
    --a;
    cout << a;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    float x = 10.0;
    float y = 3.0;
    cout << x / y;
    return 0;
}

//---------------Example--------------
#include <iostream>
using namespace std;

int main()
{
    int Peopleintheroom = 0;

    ++Peopleintheroom;  // 1
    ++Peopleintheroom;  // 2
    ++Peopleintheroom;  // 3

    cout << Peopleintheroom << "\n";

    --Peopleintheroom;  // 2

    cout << Peopleintheroom;

    return 0;
}

//------------------------------------------------------------------

// ===============================
// ASSIGNMENT OPERATORS
// ===============================

// += Operator
// Input: x = 5
// Output: 15

int x = 5;
x += 10;
cout << x;


// -= Operator
// Input: x = 5
// Output: -5

int x = 5;
x -= 10;
cout << x;


// *= Operator
// Input: x = 5
// Output: 50

int x = 5;
x *= 10;
cout << x;


// /= Operator
// Input: x = 5
// Output: 0
// (Integer division: 5/10 = 0.5 → 0)

int x = 5;
x /= 10;
cout << x;


// %= Operator
// Input: x = 5
// Output: 5
// (Remainder when 5 is divided by 10)

int x = 5;
x %= 10;
cout << x;



// There are 3 types of logical operators

//  1. AND && -> All the conditions must be TRUE
//  2. OR || -> One condition must be TRUE
//  3. NOT ! -> Reverse the condition (Make the condition from TRUE to FALSE and FALSE to TRUE)

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int a = 90;
    int b = 40;
    if (a > b && b < a)
    {
        cout << "Both the condition are true.";
    }
    return 0;
}



#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int a = 100;
    int b = 50;
    if (a < b || b < a)
    {
        cout << "One condition is true.";
    }
    return 0;
}



#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    if (!(a < b))
    {
    }
}


/-----------Example-------
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x = 50;
    cout << !(x > 45 && x < 60); // ---> Reverse the O/P from --- TRUE(1) -> FALSE(0) and FALSE(0) -> TRUE(1)

    return 0;
}


// Comparison Operators 

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    cout << (a > b) << "\n";  // 0
    cout << (a < b) << "\n";  // 1
    cout << (a >= b) << "\n"; // 0
    cout << (a <= b) << "\n"; // 1
    cout << (a == b) << "\n"; // 0
    cout << (a != b) << "\n"; // 1

    return 0;
}

// -----------------------------------------------------------------------------

// PRECEDENCE

/* () --->  Parentheses
*, /, % --->  Multiplication, Division, Modulus
+, - --->  Addition, Subtraction
>, <, >=, <= --->  Comparison
==, != --->  Equality
&& --->  Logical AND
|| --->  Logical OR
= --->  Assignment */