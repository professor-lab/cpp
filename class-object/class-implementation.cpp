#include <iostream>
using namespace std;

class item
{
    int number; //private by default
    float cost; //private by default 
   public:
        void getdata(int a,float b);  //prototype declaration

        //function defined inside class
        void putdata(void)
        {
            cout<<"number : "<<number<<"\n";
            cout<<"cost : "<<cost<<"\n";
        }

};
//***************** Member function defination **********************/
void item :: getdata(int a,float b)  //use mambership lable 
{
    number=a;
    cost=b;
}
//*************************** main program  *************************************/
int main()
{
        item x;
        cout<<"\n object x \n";
        x.getdata(100,299.95);
        x.putdata();

        item y;  //create another function

         cout<<"\n object y \n";
        x.getdata(200,175.55);
        x.putdata();
    
    return 0;
}