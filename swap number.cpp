#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
  if( a == b )
  {
    return;
  }
    a = a + b ; 
    b = a - b ;
    a = a - b ;
}
int main() 
{
  int a = 2, b = 3;
  cout<<"Before Swapping: a = "<<a<<" and b = "<<b<<endl;
  swap ( a , b ) ;
  cout<<"After  Swapping: a = "<<a<<" and b = "<<b<<endl;
  return 0 ;
}