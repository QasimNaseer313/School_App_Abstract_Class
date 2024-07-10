#include<iostream>
using namespace std;

class Employee {
protected:
	int ID;
	char Name[10];
	char gender;
	double salary;
public:
	virtual  double calcSalary()=0;
	void setId(){
		cin >> ID;
	}
	void setName(){

		cin >> Name;
	}
	void setgender(){

		cin >> gender;
	}
	void setsalary(){
		cin >> salary;
	}

	void enterDetails(){
		cout << "Enter Id (4 integers) ";
		setId();
		cout << "Enter name  ";
		setName();
		cout << "Enter gender ";
		setgender();
		cout << "Enter salary ";
		setsalary();
	}

	int getId(){
		return ID;
	}
	char* getName(){

		return Name;
	}
	char getgender(){
		return  gender;
	}
	double getsalary(){
		return salary;
	}

	void getDetails(){
		cout << "Id :" << getId() << endl;
		cout << "Name : " << getName() << endl;
		cout << "Gender : " << getgender() << endl;
		cout << "Salary : " << getsalary() << endl;
	}

};
class AdminEmployee: public Employee{
public:
	double calcSalary(){
		double BaseSalary = salary;
		double Allowances = 0.50;
		salary=salary+Allowances;
		return salary;
	}
};
class FacultyEmployee : public Employee{
public:
	double calcSalary(){
		double BaseSalary = salary;
		double Allowances = 0.10;
		salary = salary + Allowances;
		return salary;
	}
};
class FinanceEmployee : public Employee {
public:
	double calcSalary(){
		double BaseSalary = salary;
		double Allowances = 0.20;
		salary = salary + Allowances;
		return salary;
	}
};

int main(){
	int key;
	Employee* q;
	AdminEmployee Ae;
	FacultyEmployee Fe;
	FinanceEmployee FiE;


		cout << "-------------------------" << endl;
		cout << "Admin Employe " << endl;

		Ae.enterDetails();
        q = &Ae;
		q->calcSalary();
		Ae.getDetails();
		cout << "-------------------------" << endl;


		cout << "-------------------------" << endl;
		cout << " Faculty Employee " << endl;

		Fe.enterDetails();
		q = &Fe;
		q->calcSalary();
		Fe.getDetails();
		cout << "-------------------------" << endl;

		cout << "-------------------------" << endl;
		cout << "Finance Employee " << endl;

		FiE.enterDetails();
		q = &FiE;
		q->calcSalary();
		FiE.getDetails();
		cout << "-------------------------" << endl;

		cout << "you have seen details " << endl;

	system("pause");
	return 0;
}