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

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
  int age;
  cout << "Enter your age: ";
  cin >> age;
  bool citizen = true;

  if (age >= 18)
  {
    cout << "Valid for vote.";

    if (citizen)
    {
      cout << "Candidate is citizen";
    }
    else
      cout << "Not Citizen";
  }
  else
    cout << "Not valid.";

  return 0;
}