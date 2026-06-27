#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
  // Outer loop
  for (int i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n";  // Executes 2 times
    
    // Inner loop
    for (int j = 1; j <= 3; ++j) {
      cout << " Inner: " << j << "\n";  // Executes 6 times (2 * 3)

     /* First time it executes when ( i = 1 )  --> then "j" executes three times ( j<=3 )
        second time it executes when ( i = 2 )  --> then "j" again executes three times ( j<=3 )
        when it goes for the third time condition of "i" will break ( i <= 2 )
      */

    }
  }
  return 0;
}


#include<iostream>
using namespace std;

int main(){
  // Outer loop runs 4 times (i = 1, 2, 3, 4)
  for (int i = 1; i <= 4; i++)
  {
    cout << "My name is Hrituraj Kaushik " << i << "\n";
    
    // Inner loop runs 5 times for EVERY outer loop turn
    for (int j = 1; j <= 5; j++) // Fixed: changed i++ to j++
    {
      cout << "From section 2I" << "\n";
    }
  }
  return 0;
}


#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
  for(int i = 1; i<=10; i++){
    for(int j = 1; j<=10; j++){
      cout<<i*j<<" ";
    }
    cout<<"\n";
  }
  return 0 ;
}
