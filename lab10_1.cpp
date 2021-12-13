#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double Interest,Balance,Interestsum,Total,Payment;
	cout << "Enter initial loan: ";
	cin >> Balance;
	cout << "Enter interest rate per year (%): ";
	cin >> Interest;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

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
	int i=1;
	while(Balance>0){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << Balance;
		cout << setw(13) << left << (Interestsum=(double)Balance*(Interest/100));
		cout << setw(13) << left << (Total=Balance+Interestsum);
		if(Payment>Total){
			Payment=Total;
		}
		cout << setw(13) << left << Payment;
		cout << setw(13) << left << (Balance=Total-Payment);
		cout << "\n";
		i++;	
	}
		
	
	return 0;
}
