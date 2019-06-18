#include<iostream>
using namespace std;

#define tab "\t"

/*
1. ВЫУЧИТЬ ТЕОРИЮ!!!!!
2. Написать метод Distance, определяющий расстояние до указанной точки; DONE
3. Написать функцию Distance, которая определяет расстояние между двумя точкам;
4. Написать метод Distance, определяющий расстояние до указанной точки в пространсте;
5. Написать функцию Distance, которая определяет расстояние между двумя точкам в пространсте;
*/

class Point
{

	double x;
	double y;
	double z;
public:
	double get_x() const
	{
		return x;
	}
	double get_y() const
	{
		return y;
	}
	double get_z() const
	{
		return z;
	}
	void set_x(double x)
	{
		if (x >= -100 && x <= 100)
		{
			this->x = x;
		}
		else
		{
			throw exception("Bad x");
			//this->x = 0;
		}
	}
	void set_y(double y)
	{
		this->y = y;
	}
	void set_z(double z)
	{
		this->z = z;
	}
	double distanceSpace(Point other)
	{
		/*double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double z_distance = this->z - other.z;
		return sqrt(x_distance*x_distance + y_distance * y_distance + z_distance * z_distance);*/
		return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2) + pow(this->z - other.z, 2));
	}
	double distance(Point other)
	{
		/*double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		return sqrt(x_distance*x_distance + y_distance * y_distance);*/
		return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
		//function sqrt - вычисляет квадратный корень
		//function pow (value, степень) - вычисляет степень данных чисел
	}
};

double Distance(Point A, Point B);
double DistanceSpace(Point A, Point B);

void main()
{
	setlocale(LC_ALL, "ru");
	//int a;
	Point A;
	//A.x = 2;
	//A.y = 3;
	A.set_x(1);
	A.set_y(2);
	A.set_z(3);
	cout << A.get_x() << tab << A.get_y() << endl;
	Point* pA = &A;
	cout << pA->get_x() << tab << pA->get_y() << endl;
	cout << (*pA).get_x() << tab << (*pA).get_y() << endl;
	Point B;
	B.set_x(-7);
	B.set_y(-2);
	B.set_z(4);
	cout << "----------------МЕТОД---------------" << endl;
	cout << A.distance(B) << endl;
	cout << "---------------ФУКЦИЯ---------------" << endl;
	cout << Distance(A, B) << endl;
	cout << "----------------МЕТОД(Пространство)---------------" << endl;
	cout << A.distanceSpace(B) << endl;
	cout << "---------------ФУКЦИЯ(Пространство)---------------" << endl;
	cout << DistanceSpace(A, B) << endl;

}
double Distance(Point A, Point B)
{
	/*A.get_x();
	A.get_y();
	B.get_x();
	B.get_y();*/
	//double x_distance = A.get_x() - B.get_x();
	//double y_distance = A.get_y() - B.get_y();
	//*double Oox = Ox * Ox;
	//double Ooy = Oy * Oy;
	//double Xx = Oox + Ooy;
	//return sqrt(Xx)*/
	//return sqrt(x_distance*x_distance+y_distance*y_distance);
	return sqrt(pow(A.get_x() - B.get_x(), 2) + pow(A.get_y() - B.get_y(), 2));
}

double DistanceSpace(Point A, Point B)
{
	//double x_distance = A.get_x() - B.get_x();
	//double y_distance = A.get_y() - B.get_y();
	//double z_distance = A.get_z() - B.get_z();
	//return sqrt(x_distance*x_distance + y_distance * y_distance + z_distance * z_distance);
	return sqrt(pow(A.get_x() - B.get_x(), 2) + pow(A.get_y() - B.get_y(), 2) + pow(A.get_z() - B.get_z(), 2));
}



