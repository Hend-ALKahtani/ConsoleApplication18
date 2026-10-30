#include <iostream>
using namespace std;
double calculateAvrage(int grade1, int grade2, int grade3)
{
	return (grade1 + grade2 + grade3) / 3;
}
int main()
{
	string studentName = "Hind";
	int grade1 = 85;
	int Grade2 = 90;
	int Grade3 = 80;

	double avrage = calculateAvrage(85, 90, 80);

	cout << "Student " << studentName << endl;
	cout << "Grade1 " << grade1 << endl;
	cout << "Grade2 " << Grade2 << endl;
	cout << "Grade3 " << Grade3 << endl;
	cout << "Avrage " << avrage;
}

