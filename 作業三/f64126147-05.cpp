#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int a;
  cin>>a;
  if (a>=0 && a<=26)
     cout<<char(a+96);
  else
    cout<<"error";
  return 0;
}
