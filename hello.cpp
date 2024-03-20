#include <iostream>
#include <stdio.h>

using namespace std;

class Base1{
    protected:
int m_nVal;
public:
Base1(int n): m_nVal(n*2){};
// ~Base1();
void display();
};

void Base1::display()
{
  cout<< "Value of m_nVal is: " << m_nVal <<endl;
}

class Derived: public Base1{
int m_nVal1;
public:
Derived(int n):m_nVal1(n), Base1(n*2){};
// ~Derived();
void display()
{
  Base1::display();
  cout<< "Value of m_nVal1 is: " << m_nVal1 <<endl;
}
};
int main()
{
cout<<"Hello world";
Derived obj(100);
obj.display();
return 0;
}
