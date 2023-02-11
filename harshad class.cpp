#include<iostream>
using namespace std;
class harshad
{
    private:
    int n,m,a,sum=0;
    public:
    void getdetails(void);
    void hars(void);
    void putdetails(void);
};
void harshad::getdetails(void)
{
    cout<<"enter the number to check:";
    cin>>n;
}
void harshad::hars(void)
{
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        sum=sum+a;
    }
}
void harshad::putdetails(void)
{
    if ((m%sum)==0)
    cout<<"it is a harshad number";
    else
    cout<<"it is not a harshad number";
}
int main()
{
    harshad ni;
    ni.getdetails();
    ni.hars();
    ni.putdetails();
    return 0;
}