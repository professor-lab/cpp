#include<iostream>
using namespace std;

class increment
{
private:
    int a;
public:
    increment();
    ~increment();
};

increment::increment()
{
    a=25;
    a++;
    cout<<"\n a ++ 1: "<<a;
    a++;
    cout<<"\n a ++ 2: "<<a;
    a++;
    cout<<"\n a ++ 3: "<<a;

}

increment::~increment()
{
    a--;
    cout<<"\n a --   1: "<<a;
    a--;
    cout<<"\n a --   2: "<<a;

}
int main()
{
    increment a;
}
