#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int a;
  int b;
  int c;
  int d;
  float e;
  cin>>a;
  cin>>b;
  c=a/b;
  d=a%b;
  e=(float)b/2;
  if (d>=e)
    c=c+1; 
  cout<<c;
  return 0;;
}