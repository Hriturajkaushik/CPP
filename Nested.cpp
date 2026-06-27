#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
  // Outer loop
  for (int i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n"; 
    
    // Inner loop
    for (int j = 1; j <= 3; ++j) {
      cout << " Inner: " << j << "\n"; 
    }
  }
  return 0;
}


#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
  for (int i = 1; i <=4; i++)
  {
    cout<<"My name is Hrituraj Kaushik"<<i<<"\n";
    for (int j = 1; j <=5 ; i++)
    {
      cout<<"From section 2I"<<"\n";
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


// ---------------FOR EACH LOOP-----------------

#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
  int arr[] = {1,2,3,4,6};
  for (int num:arr)
  {
    cout<<num;
  }
  return 0;
}