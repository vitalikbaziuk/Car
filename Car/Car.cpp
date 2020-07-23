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
	string GetName()
	{
		return name;
	}
	int GetGraduationYear()
	{
		return graduationYear;
	}
	float GetEngineCapacity()
	{
		return engineCapacity;
	}
	int GetPrice()
	{
		return price;
	}
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
	void DeleteCar2000()
	{
		for (vector<Car>::iterator it = cars.begin(); it != cars.end(); it++)
		{
			if (it->GetGraduationYear() <= 2000)
			{
				it = cars.erase(it);
			}
		}
	}
	void Show()
	{
		for (vector<Car>::iterator it = cars.begin(); it != cars.end(); it++)
		{
			cout << it->GetName() << endl;
			cout << it->GetGraduationYear() << endl;
			cout << it->GetEngineCapacity() << endl;
			cout << it->GetPrice() << endl;
			cout << endl;
		}
	}
};

int main()
{
	carDealership car;

	car.AddCar("car", 2005, 3.5, 1000);
	car.AddCar("car2", 1998, 3.0, 5000);
	car.AddCar("car3", 2007, 3.0, 5000);

	car.Show();

	car.DeleteCar2000();

	car.Show();

	return 0;
};