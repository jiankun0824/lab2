#include<string>
#include<iostream>
using namespace std;
class BMI
{
	public:
		BMI();
		void open();
		void calculate(float height,float mass);
		void bmi(float result);

	private:
		float height,mass;
};
