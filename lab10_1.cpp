#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double loan, interest_rate, interest, pay, total;
	int i = 0;

	cout << "Enter initial loan: ";
	cin >> loan;
	total = loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest_rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	do{
		if(total == 0)	break;
		else i++;

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << total;

		interest = total*(interest_rate/100);
		cout << setw(13) << left << interest;

		total += interest;
		cout << setw(13) << left << total;

		if(pay >= total)	pay = total;
		cout << setw(13) << left << pay;

		total -= pay;
		cout << setw(13) << left << total;
		cout << "\n";

	}while(1);
	
	return 0;
}
