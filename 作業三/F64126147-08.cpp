#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int a;
  cin>>a;
  if (a<0)
    cout<<a*(-1);
  if (a>=0)
    cout<<a;  
  return 0;
}
