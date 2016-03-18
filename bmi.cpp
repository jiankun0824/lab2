#include"class.h"
#include<fstream>
#include<string>
#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

test::test()
{
	ifstream infile("file.in",ios::in);
	if(!infile)
	{
		cerr<<"Failed opennig"<<endl;
	}
	float height,mass;
	cout<<"test"<<endl;	
	//infile>>height>>mass;
	
	while(1)
	{
		infile>>height>>mass;
		if(height==0 && mass==0)
		{
			cout<<"End of File"<<endl;
			exit(1);
		}
		else
		{
			calculate(height,mass);
		}
	}
		

}

test::test(float height,float mass)
{
	calculate(height,mass);
}



void test::calculate(float height,float mass)
{
	BMI(mass/(height*height*0.0001));
}

void test::BMI(float result)
{
	string category;
	if(result<15)category="Very severely underweight";
	if(result>=15 && result<16)category="Severely underweight";
	if(result>=16 && result<18.5)category="Underweight";
	if(result>=18.5 && result<25)category="Normal";
	if(result>=25 && result<30)category="Overweight";
	if(result>=30 && result<35)category="Obese Class I(Moderately obese)";
	if(result>=35 && result<40)category="Obese Class II(Severely obese)";
	if(result>=40)category="Obese Class III(Vert severeky obese)";

	ofstream outfile("file.out",ios::app);
	outfile<<result<<"\t"<<category<<endl;
	outfile.close();	
		
}

