#include <iostream>
using namespace std;

class rect{
    public:
    int x,y;
    void call(){
    cout<<"Enter x and y"<<endl;
    cin>>x>>y;
    }
    };
    class area: public rect{
public:
    int a;
    void call(){
     a=x*y;
    cout<<"Area is "<<a<<endl;
    }
    };
    class perimeter:public area{
public:
    int p;
    void disp(){
    p=2*(x+y);
    cout<<"Perimeter is "<<p<<endl;
    }
    };
int main()
{perimeter o1;
o1.call();
o1.get();
o1.disp();
    return 0;
}
