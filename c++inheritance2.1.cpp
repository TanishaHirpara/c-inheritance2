#include<iostream>
using namespace std;

class RBI{
	public :
		int r1;
		void setdata()
		{
			cout<<"Enter value of r1 = ";
			cin>>r1;
			
		}
		
};
class SBI : public RBI{
	public :
		int p1,n1,i1;
		void setter()
		{
			cout<<"Enter value of p1 = ";
			cin>>p1;
		    cout<<"Enter value of n1 = ";
		    cin>>n1;
		    
		    i1 = p1*r1*n1/100;
		    cout<<"intrest of SBI is = "<<i1<<endl;
		    
		}
};
class BOB : public SBI{
	public :
		int p2,n2,i2;
		void setData()
		{
			cout<<"Enter value of p2 = ";
			cin>>p2;
		    cout<<"Enter value of n2 = ";
		    cin>>n2;
		    
		     i2 = p2*r1*n2/100;
		    cout<<"intrest of BOB is = "<<i2<<endl;
		    
		    	
		}
};
class ICICI : public RBI{
	public :
		int p3,n3,i3;
		void getdata()
		{
			cout<<"Enter value of p3 = ";
			cin>>p3;
		    cout<<"Enter value of n3 = ";
		    cin>>n3;
		    
		    i3 = p3*r1*n3/100;
		    cout<<"intrest of ICICI is = "<<i3<<endl;
		    
		}
};

main()
{
	
	SBI b1;
	BOB c1;
	ICICI d1;
	
	b1.setdata();
	b1.setter();
	
	cout<<"\n------- "<<endl;
	
	c1.setdata();
	c1.setData();
	
	cout<<"\n------- "<<endl;
	
	d1.setdata();
	d1.getdata();
	
	
}
