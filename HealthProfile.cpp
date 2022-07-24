#include<iostream>
using namespace std;
class HealthProfile {
	string fname;
	string lname;
	string gender;
	int month;
	int day;
	int year;
	double weight;
	double height;
public:
	HealthProfile(string fname, string lname, string gender, int month, int day, int year, double weight, double height) {
		this->fname = fname;
		this->lname = lname;
		this->gender = gender;
		this->month = month;
		this->day = day;
		this->year = year;
		this->weight = weight;
		this->height = height;
	}
	string getFirstName() {
		return fname;
	}
	string getLastName() {
		return lname;
	}
	string getGender() {
		return gender;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
	int getYear() {
		return year;
	}
	double getWeight() {
		return weight;
	}
	double getHeight() {
		return height;
	}
	void setFirstName(string fname) {
		this->fname = fname;
	}
	void setLastName(string lname) {
		this->lname = lname;
	}
	void setGender(string gender) {
		this->gender = gender;
	}
	void setMonth(int month) {
		this->month = month;
	}
	void setDay(int day) {
		this->day = day;
	}
	void setYear(int year) {
		this->year = year;
	}
	void setWeight(double weight) {
		this->weight = weight;
	}
	void setHeight(double height) {
		this->height = height;
	}

	int getAge() {
		return 2022 - year;
	}
	int maxHeartRate() {
		return 220 - getAge();
	}
	void targetHeartRate(double& minRate, double& maxRate) {
		minRate = maxHeartRate() * 0.5;
		maxRate = maxHeartRate() * 0.85;
	}
	double getBMI() {
		return (weight * 703) / (height * height);;
	}
};
int main() {
	string fname, lname, gender;
	int month, day, year;
	double weight, height;
	cout << "Enter your first name: ";
	cin >> fname;
	cout << "Enter your last name: ";
	cin >> lname;
	cout << "Enter your gender: ";
	cin >> gender;
	cout << "Enter your date of birth" << endl;
	cout << "Month: ";
	cin >> month;
	cout << "Day: ";
	cin >> day;
	cout << "Year: ";
	cin >> year;
	cout << "Enter weight in pounds: ";
	cin >> weight;
	cout << "Enter height in inches: ";
	cin >> height;
	HealthProfile hr(fname, lname, gender, month, day, year, weight, height);
	cout << "First Name: " << hr.getFirstName() << endl;
	cout << "Last Name: " << hr.getLastName() << endl;
	cout << "Gender: " << hr.getGender() << endl;
	cout << "Date of Birth: " << hr.getMonth() << "/" << hr.getDay() << "/" << hr.getYear() << endl;
	cout << "Age (in years): " << hr.getAge() << endl;
	cout << "Maximum Heart Rate: " << hr.maxHeartRate() << endl;
	double minRate, maxRate;
	hr.targetHeartRate(minRate, maxRate);
	cout << "Target Heart Rate Range: " << minRate << "-" << maxRate << endl;
	cout << "Body Mass Index: " << hr.getBMI() << endl;
	return 0;
}