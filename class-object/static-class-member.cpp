#include<iostream>
using namespace std;

class item
{
private:
   static int count;
   int number;
public:
    void getdata(int a)
    {
        number=a;
        count++;
    }
    void getcount(void){
        cout<<"count : ";
        cout<<count<<"\n";
    }
};

int item::count;

int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(10);
    b.getdata(200);
    c.getdata(3000);

    cout<<"\n After reading Data \n";

    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}