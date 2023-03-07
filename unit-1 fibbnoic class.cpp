#include <iostream>
using namespace std;
class fibbonacci
{
   private:
   int n1=0,n2=1,n3,n,i;
   public:
   void getdetails(void);
   void fibbo(void);
};
void fibbonacci::getdetails(void)
{
    cout<<"enter the number:";
    cin>>n;
}
void fibbonacci::fibbo(void)
{
    for(i=1;i<=n;i++)
    {
        cout<<n1<<" ";
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
}
int main()
{
    fibbonacci ni;
    ni.getdetails();
    ni.fibbo();
    return 0;
}
