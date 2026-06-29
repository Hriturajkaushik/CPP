#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // Outer loop
    for (int i = 1; i <= 2; ++i)
    {
        cout << "Outer: " << i << "\n"; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j)
        {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)

            /*
               First time it executes when (i = 1)  --> then "j" executes three times (j <= 3)
               Second time it executes when (i = 2) --> then "j" again executes three times (j <= 3)
               When it goes for the third time, the condition of "i" will break (i <= 2)
            */
        }
    }
    return 0;
}




#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Multiplication Table of " << i << ":\n";

        // Print the table values side-by-side
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << " ";
        }
        cout << "\n";
    }
    return 0;
}

/* OUTPUT
Multiplication Table of 1:
1 2 3 4 5 6 7 8 9 10 
Multiplication Table of 2:
2 4 6 8 10 12 14 16 18 20 
            .
            .
            .
            . 
Multiplication Table of 9:
9 18 27 36 45 54 63 72 81 90 
Multiplication Table of 10:
10 20 30 40 50 60 70 80 90 100 

*/


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 4; j++)
        {
            cout << "* ";
        }
           cout << "\n";
    }
    return 0;
}

/*  
OUTPUT
* * * * 
* * * * 
* * * * 
* * * * 
* * * * 
*/



#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*  OUTPUT
* 
* * 
* * * 
* * * * 
* * * * * 
*/



#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    for( int i = 1; i<=5; i++){

        for( int j = 1; j<=i; j++);{
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}
/*  OUTPUT
1
12
123
1234
12345
*/