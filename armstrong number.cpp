#include<iostream>
using namespace std;
int main()
{
    int num,temp,rem,sum=0;
    cout<<"enter the number to checked :";
    cin>>num;
    temp=num;
    while (temp != 0)
    {
        rem=temp % 10;
        sum=sum+rem*rem*rem;
        temp=temp / 10;
    }
    if (sum==num)
    cout<<"/n"<<num<<"given num is armstrong number";
    else
    cout<<"/n"<<num<<"given num is not armstrong number";
    return 0;
}
    