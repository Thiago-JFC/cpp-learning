#include <iostream>
using namespace std;

int getUserAge();
void printUserAgeInMonths(int ageInYears);
bool validateAge(int age);

int main(){
	int userAge = getUserAge();
	printUserAgeInMonths(userAge);
}

int getUserAge(){
	int age;
	bool isAgeValid = false;

	while(!isAgeValid) {
		cout << "Type your age:" << endl;
		scanf("%d", &age);
		
		isAgeValid = validateAge(age);
	}

	return age;
}

bool validateAge(int age) {
	if( age > 0 ) return true;
	return false;
}

void printUserAgeInMonths(int ageInYears) {
	int ageInMonths = ageInYears * 12;
	cout << "You lived " << ageInMonths << " months" << endl;
}
