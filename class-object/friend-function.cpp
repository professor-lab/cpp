#include<iostream>
using namespace std;

class sample
{
private:
    int a;
    int b;
public:
    void setvalue()
    {
        a=25;
        b=40;
    }
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a + s.b)/2.0;
}
int main()
{
    sample x; //object x
    x.setvalue();

    cout<<"Main value = "<<mean(x)<<"\n";
    return 0;
}
