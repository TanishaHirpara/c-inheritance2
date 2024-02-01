#include <iostream>
using namespace std;

class A
{
 	public:
 	int x;
 	void A()
 	{
	 
 	 cout<<"Enter value of x = ";
 	 cin>>x;
 }
 
};
class B : public A
{
 	public:
 	int a;
 	void B()
 	{
	 
 	 cout<<"Enter value of a = ";
 	 cin>>a;
 }
};
class C
 {
 	public:
 	int b;
 	void C()
 	{
	 
 	 cout<<"Enter value of b = ";
 	 cin>>b;
 }
};
class D : public B, public C   
{
 	public:
 	int y, sum;
 	void D()
 	{
	 
 	 cout<<"Enter value of y = ";
 	 cin>>y;
 	 
 	 sum = x + a + b + y;
 	 cout<<"sum is = "<<sum<<endl;
 	 }
 	 
};

int main()
{
	D d1;
	
	d1.B::A();
	d1.C::A();
	d1.B();
	d1.C();
	d1.D();
	
	 		
}               	

