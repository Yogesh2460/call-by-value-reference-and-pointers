#include <iostream>

using namespace std;

class pass
{
public:
    void fake(int x,int y)
    {

        int z=x;
        x=y;
        y=z;
        cout<<x<<y<<endl;
    }
    void fake1(int &x,int &y)
    {

        int z=x;
        x=y;
        y=z;
    }
    void fake2(int *x,int *y)
    {

        int *z=x;
        x=y;
        y=z;
    }

};
int main()
{
  int a,b;
  cout<<"Enter 2 values"<<endl;
  cin>>a>>b;
  pass ob;
  ob.fake(a,b);
  cout<<"Value after swapping"<<a<<b<<endl;
  ob.fake1(a,b);
  cout<<"Value after swapping"<<a<<b<<endl;
  int *c,*d;
  c=&a;d=&b;
  ob.fake2(&a,&b);
  cout<<"value after swapping"<<*c<<*d<<endl;
    return 0;
}

