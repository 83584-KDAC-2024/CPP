#include<iostream>
using namespace std;

class Box
{
    private:
  int length, breadth, height;

    public:
    Box()
    {
        length = 10;
        breadth = 20;
        height = 30;
    }
    Box(int value)
    {
        length = value;
        breadth = value;
        height = value;
    }
    Box(int l, int b, int h )
    {
        length = l;
        breadth = b;
        height = h;
    }
    double calculateArea()
    {
        return length * breadth * height;
    }
};

int main()
{
    int v,l,b,h;
    int c;
    do
    {
        cout<<".//.........................................................//\n";
        cout<<"Enter the choice where \n 0.Exit \n 1. to enter single value for all sides \n 2.Enter different values for l,b,h";
        cin>> c;
        switch(c)
        {
            case 0:
            cout<<".....thank you....\n";
            break;
            case 1:
            {
                cout<<"enter the value of you want cube of \t";
                cin >> v;
                Box b2(v);
                cout<<"the volume  is "<<b2.calculateArea() <<"\n";
                break;
            }
            case 2:
            {

                cout<<"Enter the values of l,b,h";
                cin >> l >> b >> h;
                Box b3(l,b,h);
                cout<<"the volume is "<<b3.calculateArea()<<"\n";
                break;
            }
            default:
            cout<<"wrong choice";
            break;
        }
    }while (c !=0);
}