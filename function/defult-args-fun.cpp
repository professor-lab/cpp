#include <iostream>
using namespace std;

int main()
{
    float amount;
    float value(float p,int n,float r=0.15); //prototype
    void printline(char ch='=',int len=40); //prototype

    printline(); //use of defult values for argument

    amount=value(5000.00,5); ///defult 3rd argument

    cout<<"\n final value = "<<amount<<"\n";
    printline(); 

    return 0;
}
/*-------------------------------------------*/
float value(float p,int n,float r)
{
    int year=1;
    float sum=p;
    while (year<=n)
    {
        sum=sum*(1+r);
        year=year+1;
    }
    return(sum);    
}
void printline(char ch,int len)
{
    for(int i=1;i<=len;i++) printf("%c",ch);
    printf("\n");
    
}