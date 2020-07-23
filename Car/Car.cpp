#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
	void SortByName()
	{
		sort(cars.begin(), cars.end(),
			[](Car& left, Car& right)-> bool
			{
				return left.GetName() < right.GetName();
			}
		);
	}
	void SortByGraduationYear()
	{
		sort(cars.begin(), cars.end(),
			[](Car& left, Car& right)-> bool
			{
				return left.GetGraduationYear() < right.GetGraduationYear();
			}
		);
	}
	void SortByEngineCapacity()
	{
		sort(cars.begin(), cars.end(),
			[](Car& left, Car& right)-> bool
			{
				return left.GetEngineCapacity() < right.GetEngineCapacity();
			}
		);
	}
	void SortByPrice()
	{
		sort(cars.begin(), cars.end(),
			[](Car& left, Car& right)-> bool
			{
				return left.GetPrice() < right.GetPrice();
			}
		);
	}

	void SearchByName(string name)
	{
		for (vector <Car>::iterator it = cars.begin(); it != cars.end(); it++)
		{
			if ((*it).GetName() == name)
			{
				cout << "Car name: " << (*it).GetName() << endl;
				cout << "Car graduation year: " << (*it).GetGraduationYear() << endl;
				cout << "Car engine capacity: " << (*it).GetEngineCapacity() << endl;
				cout << "Car price: " << (*it).GetPrice() << endl;
				cout << endl;
			}
		}
	}
	void SearchByGraduationYear(int graduationYear)
	{
		for (vector <Car>::iterator it = cars.begin(); it != cars.end(); it++)
		{
			if ((*it).GetGraduationYear() == graduationYear)
			{
				cout << "Car name: " << (*it).GetName() << endl;
				cout << "Car graduation year: " << (*it).GetGraduationYear() << endl;
				cout << "Car engine capacity: " << (*it).GetEngineCapacity() << endl;
				cout << "Car price: " << (*it).GetPrice() << endl;
				cout << endl;
			}
		}
	}
	void SearchByEngineCapacity(float engineCapacity)
	{
		for (vector <Car>::iterator it = cars.begin(); it != cars.end(); it++)
		{
			if ((*it).GetEngineCapacity() == engineCapacity)
			{
				cout << "Car name: " << (*it).GetName() << endl;
				cout << "Car graduation year: " << (*it).GetGraduationYear() << endl;
				cout << "Car engine capacity: " << (*it).GetEngineCapacity() << endl;
				cout << "Car price: " << (*it).GetPrice() << endl;
				cout << endl;
			}
		}
	}
	void SearchByPrice(int price)
	{
		for (vector <Car>::iterator it = cars.begin(); it != cars.end(); it++)
		{
			if ((*it).GetPrice() == price)
			{
				cout << "Car name: " << (*it).GetName() << endl;
				cout << "Car graduation year: " << (*it).GetGraduationYear() << endl;
				cout << "Car engine capacity: " << (*it).GetEngineCapacity() << endl;
				cout << "Car price: " << (*it).GetPrice() << endl;
				cout << endl;
			}
		}
	}

	int countCarEURO5() {
		int count = 0;
		for (vector <Car>::iterator it = cars.begin(); it != cars.end(); it++)
		{
			if ((*it).GetGraduationYear() >= 2009)
			{
				count++;
			}
		}
		return count;
	}
};

int main()
{
	carDealership car;

	car.AddCar("car", 2005, 3.5, 1000);
	car.AddCar("car2", 1998, 3.0, 5000);
	car.AddCar("car3", 2014, 3.0, 5000);
	car.AddCar("car4", 2013, 3.0, 5000);
	car.AddCar("car5", 2012, 3.0, 5000);

	car.Show();

	int a = car.countCarEURO5();
	cout << a << endl;

	return 0;
};