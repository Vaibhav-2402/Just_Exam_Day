#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////

class Base
{
    public:
    virtual void show()
    {
        cout<<"\n base ";
    }
};
/////////////////////////////////////////////////////////////////

class derived_1: public Base
{
    public:
    void show()
    {
        cout<<"\n Base 1 ";
    }
};
///////////////////////////////////////////////////////////////////////

class derived_2 : public Base
{
    public:
    void show()
    {
        cout<<"\n Base 2 ";
    }
};
/////////////////////////////////////////////////////////////////////////

int main()
{
    derived_1 dv1;
    derived_2 dv2;
    Base *ptr;

    ptr=&dv1;
    ptr->show();

    ptr = &dv2;
    ptr->show();

    return 0;
}