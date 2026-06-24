#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{

    // Syntax
    // for(condition 1, condition 2, condition 3){

    // code to be executed

    //     }

    for (int i = 0; i < 10; i++)
    {
        cout << i << "\n"; // prints the nymber from (i=0) 0 to 9 (i<10) by increasing the value of 'i' after one completion of loop
    }
    return 0;
}



// Multiples of 2

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    for (int i = 0; i < 20; i = i + 2)
    {
        cout << i << "\n";
    }
    return 0;
}



//---------------------Sum of First 10 Natural Numbers--------------------------------

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    int sum = 0;
    for( int i = 0; i<=10; i++){ 
        sum = sum+i;
    }

    cout<<"sum is: "<<sum; // print the sum of the first 10 numbers
    return 0;
}


//------------------------------ Sum of Numbers in a Given Range----------------------------

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    int sum = 0;
    int num1;
    cout<<"Enter the first number from which you want to sum: ";
    cin>>num1;
    int num2;
    cout<<"Enter the second number to which you want the sum:  ";
    cin>>num2;

    for (int i = num1; i<=num2 ; i++)
    {
        sum += i;
    }

    cout<<"The sum of numbers from "<<num1<<" to "<<num2<<" is : "<<sum;

    return 0;
}





//   Double the number

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    for (int i = 1; i <= 20; i = i * 2)
    {
        cout << i << "\n";
    }
    return 0;
}




// Sum of the numbers

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum = sum + i;
    }
    cout << sum; // print the sum of all 10 numbers
    return 0;
}




// countdown

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int count;
    cout << "Enter the Count: ";
    cin >> count;
    for (int i = count; i >= 0; i--) // Loop will start from i = count and it will goes down to i<=0 [ go down because of the i--]
    {
        cout << i << "\n"; // It will print the value from the count to  0 and the loop will end
    }

    /*   sample input
          count = 5

          Sample o/p
           5
           4
           3
           2
           1
           0
        */
    return 0;
}




#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int count;
    cout << "Enter the Count: ";
    cin >> count;

    for (int i = 0; i <= count; i++) // This loop will start the value of i = 0 and it will go upto the entered value of count by the user [ upto beacuse of the i++]
    {
        cout << i << "\n"; // print the value of i from 0 to the entered count value
    }

    /*  sample inpur
            count = 5
            smaple output
            0
            1
            2
            3
            4
            5
    */
    return 0;
}





#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if (i%2==0)
        {
           cout<<i<<endl;  // Print the even number form 0 to 100
        }
        
    }
    return 0;
}



#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter the number you want to print the table: ";
    cin>>num;
    
    for(int i = 1; i<=10; i++){
        cout<<num<<"*"<<i<<"="<<num*i<<endl; // Print the table of entered number from 1 to 10
    }

    return 0;
}