#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car
{
private:
	string name;
	int graduationYear;
	float engineCapacity;
	int price;
public:
	Car() : name("NoName"), graduationYear(0), engineCapacity(0), price(0) {};
	Car(string name, int graduationYear, float engineCapacity, int price)
		: name(name), graduationYear(graduationYear), engineCapacity(graduationYear), price(price) {};
};

class carDealership
{
private:
	vector <Car> cars;
public:
	void AddCar(string name, int graduationYear, float engineCapacity, int price)
	{
		Car car(name, graduationYear, engineCapacity, price);
		cars.push_back(car);
	}
};

int main()
{
	carDealership car;

	car.AddCar("car", 2005, 3.5, 1000);
	car.AddCar("car2", 2007, 3.0, 5000);

	return 0;
}