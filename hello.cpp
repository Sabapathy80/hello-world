#include <stdio.h>
#include <conio.h>
using namespace std;

class Base1{
int m_nVal;
public:
Base1();
~Base1();
void display();
};

void Base1::display()
{
  cout<< "Value of m_nVal is: " << m_nVal <<endl;
}

class Derived: public Base1{
int m_nVal1;
public:
Derived(int n):m_nVal1(n), m_nVal(n*2){};
~Derived();
void display()
{
  super::display();
  cout<< "Value of m_nVal1 is: " << m_nVal1 <<endl;
}
};
int main()
{
cout<<"Hello world";
Derived obj;
obj.display();
_getch();
return 0;
}
