#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
  int x = 90;
  int y = 80;
  if (x > y)
  {
    cout << "X is Greater than Y";
  }
  return 0;
}

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
  int time;
  cout << "Enter the time: ";
  cin >> time;
  if (time >= 5)
  {
    cout << "Time is good";
  }
  else
    cout << "time is not good";
  return 0;
}

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
  int time;
  cout << "What time is it: ";
  cin >> time;
  if (time < 12)
  {
    cout << "Good Morning";
  }
  else if (time <= 18)
  {
    cout << "Good Afternoon ";
  }
  else
    cout << "Good Night";

  return 0;
}

//  There is another way to write the if else condition in C++

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
  int marks = 90;
  string result = (marks < 18) ? "Good score." : "Not good.";

  // ? "good score"  IT DEFINES THE IF CONDITION
  // :"not good"     IT DEFINES THE ELSE CONDITION

  return 0;
}



//-----------------------------Logical Operators------------------------------

#include<iostream>
#include<string?
#include<cmath>
using namespace std;

int main(){

  int a = 10;
  int b = 40;
  int c = 60;

  if(a>b && a>c){ // Both the conditions should be true to execute the if block
    cout<<"A is greater than B and C";
  }
  else if(b>a && b>c){
    cout<<"B is greater than A and C";
  }
  else
    cout<<"C is greater than A and B";

    return 0;
}

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

  int a = 100;
  int b = 200;
  int c = 400;

  if(a>b || a>c){ // Only one condition should be true to execute the if block
    cout<<"A is greater than B or C";

  else if(b>a || b<c){
    cout<<"B is greater than A or C";
  }
  else
    cout<<"C is greater than A or B";

    return 0;
  
  }
}

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

  int a = 99;
  int b = 37;

  if(!(a>b)){ // It will check the condition and if the condition is true then it will return false and if the condition is false then it will return true
    cout<<"A is not Greater than B";
  }
  else
    cout<<"A is Greater than B";

    return 0;
}

//----------------------------------EXAMPlES------------------------------

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
  int num;
  cout<<"enter a number: ";
  cin>>num;
  if(num%2==0){
    cout<<"Even number";
  }
  else
    cout<<"Odd number";

    return 0;
}



#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
  
  int age = 18;
  bool iscitizen = true;

  if(age == 18){
    cout<<"Old enougn to vote. \n";

    if(iscitizen){
      cout<<"And, you are a citizen so you can vote";
  }
    else{
      cout<<"Your are not a citizen so you can't vote";
    }
  }
    else{
      cout<<"You are not old enough to vote";
  }
  return 0;
}




#include<iostream>
#include<string>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    string country;
    cout << "Enter your country: ";
    cin >> country;

    if(age >= 18)
    {
        cout << "You are old enough to vote.\n";

        if(country == "India")
        {
            cout << "You are eligible to vote in India.";
        }
        else
        {
            cout << "You are not eligible to vote in India.";
        }
    }
    else
    {
        cout << "You are not old enough to vote.";
    }

    return 0;
}