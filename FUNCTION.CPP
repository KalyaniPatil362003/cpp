#include<iostream.h>
#include<conio.h>

template<class K>
void swap(K x,K y)
{
  K k;
  k=x;
  x=y;
  y=k;

  cout<<"x= "<<x<<endl;
  cout<<"y= "<<y<<endl;

}
void main()
{
 float l,m;
 int x,y;
 clrscr();
 cout<<"Value of L:";
 cin>>l;
 cout<<"Value of M:";
 cin>>m;
 cout<<"Value of X:";
 cin>>x;
 cout<<"Value of Y:";
 cin>>y;
 cout<<"----------------value Befor Swap-------------------------"<<endl;
 cout<<"L="<<l<<endl;
 cout<<"M="<<m<<endl;
 cout<<"X="<<x<<endl;
 cout<<"Y="<<y<<endl;
 cout<<"------------------------------value After swap----------------------"<<endl;
 swap(x,y);
 swap(l,m);
 getch();
}