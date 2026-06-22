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


//---------------------Another Example-----------------------------

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    int num1;
    int num2;
    char op;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter the operator: ";
    cin>>op;

    switch(op){
        case '+':
            cout<<"Sum of"<<num1<<"and"<<num2<<" is = "<<num1 + num2;
            break;
        case '-':
            cout<<"Difference of"<<num1<<" and "<<num2<<" is = "<<num1 - num2;
            break;
        case '*':
            cout<<"Product of"<<num1<<" and "<<num2<<" is = "<<num1 * num2;
            break;
        case '/':
            if(num2 != 0){
                cout<<"Quotient of"<<num1<<" and "<<num2<<" is = "<<num1/num2;
            }
            else {
                cout<<"Division by 0 is not allowed.";
            }
        break;
    }
    return 0;
}

//---------------------Another Example-----------------------------

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    char grade;
    cout<<"Enter the grade: ";
    cin>>grade;

    switch(grade){
        case 'A':
            cout<<"Excellent";
            break;
        case 'B':
            cout<<"Good";
            break;
        case 'C':
            cout<<"Fair";
            break;
        case 'D':
            cout<<"Poor";
            break;
        case 'F';
            cout<<"Fail";
            break;
        default:
            cout<<"Gradr does not exist. Please enter a valid grade.";
    }
        return 0;
}
                                                       