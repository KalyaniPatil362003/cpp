#include<iostream.h>
#include<conio.h>
template<class T>
class demo
{
  private:
	   T a,b;
  public:demo(T x,T y)
  {
  a=x;
  b=y;
  }
  void swap()
  {
  T t;
  t=a;
  a=b;
  b=t;
  cout<<"\nAfter swapping"<<endl;
  cout<<"value of A is:"<<a<<endl;
  cout<<"value Of B is:"<<b<<endl;
  }
};
void main()
{
  clrscr();
  demo <int> d(5,8);
  d.swap();

  demo <float> d1(1.2,3.4);
  d1.swap();

  demo <char> d2('A','B');
  d2.swap();

  getch();
}


