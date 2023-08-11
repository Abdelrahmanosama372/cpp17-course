#include <iostream>
using namespace std;

char display_menu();
double add(double &num1, double &num2);
double subtract(double &num1, double &num2);
double multiply(double &num1, double &num2);
double divide(double &num1, double &num2);


int main()
{
	char operation;
	double num1,num2,result;
	while(1)
	{
		operation = display_menu();
		if (operation >= '1' && operation <= '4')
		{
			cout <<"Enter two numbers" <<endl;
			cin >> num1 >> num2;
			
			switch(operation)
			{
			case '1':
				result = add(num1,num2);
				break;
			case '2':
				result = subtract(num1,num2);
				break;
			case '3':
				result = multiply(num1,num2);
				break;
			case '4':
				result = divide(num1,num2);
				break;
			}

			cout << "resutlt = " << result <<endl;
		}
		else if (operation == '5')
			break;
		else
			cout << "Error enter valid option" << endl;

	}
}


char display_menu()
{
	char oper;
	cout<<"****************************************************"<<endl;
	cout<<"choose an operation"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"1) Add 2 numbers"<<endl;
	cout<<"2) subtract 2 numbers"<<endl;
	cout<<"3) multiply 2 numbers"<<endl;
	cout<<"4) divide 2 numbers"<<endl;
	cout<<"5) Exit"<<endl;
	cout<<"****************************************************"<<endl;
	cin >> oper;
	return oper;
}
double add(double &num1, double &num2)
{
	return num1+num2;
}
double subtract(double &num1, double &num2)
{
	return num1-num2;
}
double multiply(double &num1, double &num2)
{
	return num1*num2;
}
double divide(double &num1, double &num2)
{
	if( num2 != 0 )
		return num1/num2;
	return num1/0.00001;
}