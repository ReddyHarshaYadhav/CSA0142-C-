#include <iostream>
using namespace std;
int main()
{
    int n,m,a,sum=0;
    cout<<"enter a number:";
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        sum=sum+a;
    }
    if((m%sum)==0)
    cout<<"it is a harshad number";
    else
    cout<<"it is not a harshad number";
}
