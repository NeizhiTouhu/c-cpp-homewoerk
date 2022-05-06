#include <iostream>
#include <math.h>
using namespace std;

class Point {
public:
	double x,y;
	Point(double x0=0, double y0=0):x(x0),y(y0){}
	~Point(){}
};



class Line: private Point
{
public:
	Point ps,pe;
	Line(Point pis, Point pie){
		ps.x=pis.x;
		ps.y=pis.y;
		pe.x=pie.x;
		pe.y=pie.y;
	}
	~Line(){}
	double Length(){
		return sqrt(pow(ps.x-pe.x,2)+pow(ps.y-pe.y,2));
	}
};

int main(void){
	Point p1(0,0),p2(3,4);
	Line line1(p1,p2);
	cout<<"The length of the line is "<<line1.Length();
	return 0;
}



