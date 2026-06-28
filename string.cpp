#include <iostream>
#include <string>

using namespace std;

int main()
{
    string greeting = "Hello";
    cout << greeting;
    return 0;
}

//-------------------------------------------------

// STRING CONCATENATION

// 1. The "+" operator can be used between strings to add them together to make a new string. This is called concatenation:

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstname = "Hrituraj";
    string lastname = " Kaushik";

    //  However, you could also add a space with quotes (" " or ' '):
    cout << firstname + "" + lastname;

    cout << firstname + lastname;

    string x = "10";
    string y = "20";
    cout << x + y;

    return 0;
}

// ---> We can also use APPEND function concatenate strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstname = "Hrituraj";
    string lastname = "Kaushik";
    string fullname = firstname.append(lastname);
    cout << fullname;

    cout << "\n";

    string x = "20";
    string y = "07";
    string year = x.append(y);
    cout << year;

    return 0;
}

//--------------------------------------------------------------------------

// LENGTH OF THE STIRNG

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string random = "nviubeuviubchbiubsuovcysdvyibryvhdvscisgciugwiovhbehjbvu;eviuwerjhiuyevwiucbvwcbwcbi;owhclbevubeuvbhlbvlbvlwvclywilcyv";
    cout << "Length of the string is: " << random.length();
    cout << "\n";
    cout << "Length of the string is:" << random.size();
    // we can also use SIZE in place of length.
    return 0;
}

//---------------- ------------------------ ----------------------- --------------

// ACCESS IN STRiNGS

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string txt = "Bankai"; // [B-0, a-1, n-2, k-3, a-4, i-5]
    // The number inside the square brackets is the position of the character in the string, starting from 0th index..
    cout << txt[0]; // O/P : B
    cout << txt[1]; // O/P : a
    cout << txt[2]; // O/P : n
    cout << txt[5]; // O/P : i
    return 0;
}

// STRING LIBRARY also has ((at)) function to find the something at given index

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string txt = "Marvel";
    cout << txt.at(0);
    cout << txt.at(2);
    return 0;
}

//-------------------To print the last character in the strings----------------------

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt = "Rasengann";
    cout << txt[txt.length() - 1]; // // It will print the last character of the string because the length of the string is 9 but the last character is at 8th index. So, we use length-1 to get the last character.
    return 0;
}

//-----------------change certain characters in the string-------------------------

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt = "Hritur@j";
    txt[6] = 'a';
    cout << txt;
    return 0;
}

//-----------------ESCAPE SEQUENCE IN STRING-------------------------

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string txt = "My name is "HriturajKaushik" ";
    // You can't directly use "" OR '' OR // in CPP

    string txt = "My name is \"Hrituraj Kaushik\""; // To use "" in the string
    cout << txt << "\n";
    string txt1 = "My name is \'Hrituraj Kaushik\' Hrituraj\'s"; // To use '' in the string
    cout << txt1 << "\n";
    string txt2 = "My name is \\Hrituraj Kaushik\\"; // To use // in the string
    cout << txt2;

    return 0;
}

//-----------------TAKING STRING INPUT-------------------------

#include <iostream>
#include <string>
using namespace std;
int main()
{ // Sample Input;
    string fullname;
    cout << "Your full name: "; // Your full name is: Hrituraj Kaushik
    cin >> fullname;
    cout << "Your full name is: " << fullname; // O/P;
    return 0;                                  // Your name is: Hrituraj Kaushik

    // Even though i give my full name it still showing the half of it
    //  Because the cin function terminate the SPACES,TABS etc.
}

// To overcome this problem we use GETLINE() function it reads and take the whole line in the input.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string fullname;
    cout << "Your name is: ";
    getline(cin, fullname);               // It will take the whole line
    cout << "Your name is: " << fullname; // print the whole line
    return 0;
}
