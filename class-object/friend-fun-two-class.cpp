#include<iostream>
using namespace std;

class B;  //Foreard declaration

class A
{
        int x;
    public:
        void setvalue(int i)
        {
            x=i;
        }
        friend void max(A,B);

};
class B
{
    int a;
public:
    void setvalue(int i)
        {
            a=i;
        }
        friend void max(A,B);
};
void max(A m,B n)   //Defination of Friend
{
    if(m.x>=n.a)
        cout<<m.x;
    else
        cout<<n.a;
}
int main()
{
    B bb;
    bb.setvalue(10);
    A aa;
    aa.setvalue(20);
    max(aa,bb);
    
    return 0;
    
}

