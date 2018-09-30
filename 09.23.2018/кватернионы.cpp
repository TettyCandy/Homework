#include <iostream>
using namespace std;

struct Quaternion
{
	double w;
	double x;
	double y;
	double z;
	
	Quaternion (double w1, double x1, double y1, double z1): w(w1), x(x1), y(y1), z(z1)  //�����������
	{		
	}
	Quaternion summ( Quaternion& a, Quaternion& b)                                       //�����
	{
		return Quaternion(a.w + b.w , a.x + b.x , a.y + b.y , a.z + b.z);
	}
	Quaternion diff( Quaternion& a, Quaternion& b)                                       //��������
	{
		return Quaternion(a.w - b.w , a.x - b.x , a.y - b.y , a.z - b.z);
	}
	Quaternion mul(Quaternion& a, Quaternion& b)                                         //���������
	{
		Quaternion c(0,0,0,0);
		c.w=a.w * b.w - a.x * b.x - a.y * b.y - a.z * b.z;   
		c.x=a.w * b.x + a.x * b.w + a.y * b.z - a.z * b.y;
		c.y=a.w * b.y - a.x * b.z + a.y * b.w + a.z * b.x;
		c.z=a.w * b.z + a.x * b.y - a.y * b.x + a.z * b.w;
		return c;
	}
	
};
int main()
{
	Quaternion a(1,2,1,3);
	Quaternion b(0,4,2,1);
	Quaternion c(0,0,0,0);
	c=c.mul(a,b);
	a=a.summ(a,b);
	cout<<a.w<<"+"<<a.x<<"i+"<<a.y<<"j+"<<a.z<<"k"<<endl;
	cout<<c.w<<"+"<<c.x<<"i+"<<c.y<<"j+"<<c.z<<"k"<<endl;
} 
