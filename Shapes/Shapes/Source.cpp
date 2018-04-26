// Shape Classes 

#include "iostream";

using namespace std;

class square
{
public:
	square()
	{
		side = 1.0;
	}
	square(double s)
	{
		side = s;
	}
	double calcVal() { return side * side; }
private:
	double side;
};

class cube : public square
{
public:
	cube()
	{
		side = 1.0;
	}
	cube(double s)
	{
		side = s;
	}
	double calcVal() 
	{ 
		return side * side * side; 
	}
private:
	double side;
};

int main()
{
	square s(2.0);
	cube c(2.0);

	double area = s.calcVal();
	double volume = c.calcVal();

	cout << area << endl;
	cout << volume << endl;

	system("pause");

}