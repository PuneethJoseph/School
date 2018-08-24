//Creational Design Pattern
//Factory Design Pattern
//https://www.daniweb.com/programming/software-development/threads/471498/design-patterns-using-c-11
//https://www.tutorialspoint.com/design_pattern/design_pattern_interview_questions.htm
//https://www.programmerinterview.com/index.php/c-cplusplus/c-declarations/
#include "stdafx.h"
#include <iostream>
#include <memory>
using namespace std;

class Vehicle{
public:
	virtual void display() = 0;
};
std::unique_ptr<Vehicle> CreateVehicle(int impl);

class TwoWheeler : public Vehicle{
	void display(){
		cout << "I am Two Wheeler" << endl;
	}
};
class FourWheeler : public Vehicle{
	void display(){
		cout << "I am Four Wheeler" << endl;
	}
};
std::unique_ptr<Vehicle> CreateVehicle(int impl) {
	if (impl == 1) {
		return std::unique_ptr<Vehicle>(new TwoWheeler());
	}
	else {
		return std::unique_ptr<Vehicle>(new FourWheeler());
	};
};
int main() {
	auto foo1 = CreateVehicle(1);
	foo1->display();
	auto foo2 = CreateVehicle(2);
	foo2->display();
	return 0;
}