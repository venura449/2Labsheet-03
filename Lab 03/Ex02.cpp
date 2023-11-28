#include <iostream>
#include <iomanip>

using namespace std;

struct Marks {
	float mark1;
	float mark2;
	float caMark1;
	float caMark2;
};

void findMarks(float mark1, float mark2, float &caMark1, float &caMark2);

int main() {
	int i = 0;
	struct Marks student[5];

	for (i = 0; i < 5; i++) {
		cout << "Enter Mark 01 for St " << i + 1 << ":";
		cin >> student[i].mark1;
		cout << "Enter Mark 02 for St" << i + 1 << ":";
		cin >> student[i].mark2;
		findMarks(student[i].mark1, student[i].mark2, student[i].caMark1, student[i].caMark2);
	}

	cout << setw(10) << "Student" << setw(10) << "Marks1" << setw(10) << "Marks2" << setw(10) << "CA_Mark1" << setw(10) << "CA_Mark2"<<endl;

	for (i = 0; i < 5; i++) {
		cout <<fixed<<setprecision(0)<< setw(10) << i+1 <<fixed<<setprecision(0)<< setw(10) << student[i].mark1 << setw(10) << student[i].mark2 << setw(10) <<fixed<<setprecision(2)<< student[i].caMark1 << setw(10) <<fixed<<setprecision(2)<<student[i].caMark2 << endl;
	}

	

}

void findMarks(float mark1, float mark2, float &caMark1, float &caMark2) {
	caMark1 = (mark1 * 20) / 100;
	caMark2 = (mark2 * 30) / 100;
}
