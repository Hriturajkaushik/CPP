#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int day;
    cout << "Enter the day: ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "There are only 7 days in a week. Please enter a valid day.";
        break;
    }

    return 0;
}


//---------------------EXAMPLE----------------------

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    int num;       
    cout<<"Enter a no. between 0-9 ";
    cin>>num;

   switch(num){

    case 0:
        cout<<"Zero";
        break;
    case 1:
        cout<<"One";
        break;
    case 2:
        cout<<"Two";
        break;
    case 3:
        cout<<"Three";
        break;
    case 4:
        cout<<"Four";
        break;
    case 5:
        cout<<"Five";
        break;
    case 6:
        cout<<"Six";
        break;
    case 7:
        cout<<"Seven";
        break;
    case 8:
        cout<<"Eight";
        break;
    case 9:
        cout<<"Nine";
        break;
    default:
        cout<<"Please enter a valid number between 0-9";
        break;
       }
       return 0;
}