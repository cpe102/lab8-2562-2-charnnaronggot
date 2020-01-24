#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int i = 1 ;
	
	float Prev , Interest , Total , Payment , NewBa , Newin ;	
	cout << "Enter initial loan : " ;
	cin >> Prev ;
	cout  << "Enter interest rate pre year (%) : " ;
	cin >> Interest ;
	cout  << "Enter amount you canpay per year : " ;
	cin >> Payment ;


	
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
	
	for(;;){
		
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i ; 
	cout << setw(13) << left << Prev;		
		Newin = (Prev/100.00)*Interest ;
	cout << setw(13) << left << Newin;
		Total = Prev + Newin ;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;	
		if(Total - Payment  < 0 ){
			Payment = Total ;
		}
		NewBa = Total - Payment ;
	cout << setw(13) << left << NewBa;
	Prev = NewBa ;
	cout << "\n" ;
	i++ ;
	if(NewBa <=0)break; 
	}
	
	return 0;
}
