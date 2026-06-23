#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
  int i = 0;
  while (i <= 10)
  {
    cout << i << "\n";
    i++;  
  }
  return 0;
}



#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
  int count = 0;
  while (count <= 5)
  {
    cout << count << "\n";
  }
  cout << "Happy Birthday";
  return 0;
}



#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
  int num;

  // this will keep asking user to enter a positive number and loop will end if the user gave 0 or negative number.

  do
  {
    cout << "Enter the number: ";
    cin >> num;
  } while (num > 0);
  return 0;
}
