#include<iostream.h>
#include<conio.h>
template<class T>
void swap(T a,T b)
{
  T t;
  t=a;
  a=b;
  b=t;
  cout<<"\nAfter swapping"<<endl;
  cout<<"A:->"<<a<<endl;
  cout<<"B:->"<<b<<endl;
}
void main()
{
  clrscr();
  cout<<"______________________Swapping for int value__________________________"<<endl;
  swap(10,20);
   cout<<"_____________________Swapping for floating value_____________________"<<endl;
  swap(10.20,20.10);
   cout<<"_____________________Swapping for character__________________________"<<endl;
  swap('k','v');
  getch();
}
