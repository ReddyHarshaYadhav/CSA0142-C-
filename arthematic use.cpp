#include<iostream>
using namespace std;
class arthematic
{
    private:
    int a,b;
    int c,d,e;
    public:
    void getdetails(void);
    void sum(void);
    void sub (void);
    void mul (void);
    void putdetails (void);
};
void arthematic:: getdetails(void)
{
    cout<<"enter the number:";
    cin>>a>>b;
}
void arthematic:: sum(void)
{
    c=a+b;
    cout<<"the sum of the number:"<<c;
}
void arthematic::sub(void)
{
    d=a-b;
    cout<<"the difference of the number:"<<d;
}
void arthematic::mul(void)
{
    e=a*b;
    cout<<"the product of the number:"<<e;
}
void arthematic::putdetails(void)
{
    cout<<"arthematic operation\n";
    cout<<"Number:"<<a<<b<< ",Sum: "<<c<< ",Difference: "<<d<< ",product: "<<e;
}
int main()
{
    arthematic ai;
    ai.getdetails();
    ai.sum();
    ai.sub ();
    ai.mul();
    ai.putdetails();
    return 0;
}