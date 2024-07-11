#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int a;
  int h;
  int m;
  int s;
  cin>>a;
  h=a/3600;
  m=(a%3600)/60;
  s=(a%3600)%60;
  cout<<h<<"®É"<<m<<"¤À"<<s<<"¬í";
  return 0;
}
