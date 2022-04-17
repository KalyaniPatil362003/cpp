#include<iostream.h>
#include<conio.h>
class Demo
{
public:   int a;
	void read()
	{
	a=10;
	}
};
class Demo1:public Demo
{
public: int b;
       void display()
       {
       b=a*a;
       cout<<"value of b is:"<<b;
       }
};

void main()
{
clrscr();
Demo1 obj;
obj.read();
obj.display();
getch();
}