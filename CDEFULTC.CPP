#include<iostream.h>
#include<conio.h>
class Box
{
	//c++ on defult constructor
	double weight,height,depth;
	public:
		Box()
		{
			cout<<"\n\nDefult constructor called";
			weight=3;
			height=4;
			depth=5;
		}
		Box(double w,double h,double d)
		{
			cout<<"\n\nParameterzied constructor called:";
			weight=w;
			height=h;
			depth=d;
		}
		Box(Box &b)
		{
			cout<<"\n\nCopy constructor is called:";
			weight=b.weight;
			height=b.height;
			depth=b.depth;
		}
		void volume()
		{
			cout<<"\nVolume of box is "<<weight*height*depth;
		}
};
void main()
{
	clrscr();
	Box b1;
	b1.volume();
	Box b2(4,5,6);
	b2.volume();
	Box b3(b1);
	b3.volume();
	getch();
}