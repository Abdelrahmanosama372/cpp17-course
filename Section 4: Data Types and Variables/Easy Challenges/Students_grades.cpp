#include <iostream>

using namespace std;

int main()
{
	string name_1,name_2;
	int ID_1, ID_2;
	int grade_1, grade_2;
	float average;

	cout << "What is student 1 name: ";
	cin >> name_1;
	cout << "His ID: ";
	cin >> ID_1;
	cout << "His Math exam grade: ";
	cin >> grade_1;

	cout << "What is student 2 name: ";
	cin >> name_2;
	cout << "His ID: ";
	cin >> ID_2;
	cout << "His Math exam grade: ";
	cin >> grade_2;

	average = (grade_1+grade_2)/2.0;

	cout << "\n";
	cout << "Students grades in math" << endl;
	cout << name_1 << " (with ID " << ID_1 << ") " << "got grade: " << grade_1 << endl;
	cout << name_2 << " (with ID " << ID_2 << ") " << "got grade: " << grade_2 << endl;
	cout << "Average grade is " << average << endl;



	return 0;
}