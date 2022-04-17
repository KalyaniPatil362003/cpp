#include<iostream.h>
#include<conio.h>
class demo
{
protected:int a;
public:void read();
};
class demo1:public demo
{
protected:int b;
public:void read_1();
};
class demo2:public demo1
{
protected:int c;
public:void display();
};
void demo::read()
{
a=10;
}
void demo1::read_1()
{
b=10;
}

void demo2::display()
{
c=a*b;
cout<<"value of c is:"<<c;
}
void main()
{
clrscr();
demo2 D;
D.read();
D.read_1();
D.display();
getch();
}

