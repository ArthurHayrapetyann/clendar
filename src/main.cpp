#include "calend.hpp"
	
	//Is a recursive function that takes the date we give and takes the corresponding function
int main(){
	int year;
	int day;
	int manth;
	string again;
	cout << "Day " <<  "Manth" << " Year" << endl;;
	cin >> day >>  manth >> year;
	int years = year-1900; 
	if (check(day,manth,years) == true ){
		cout << endl;
	 	Print(calend(day,manth,year));
		cout << endl;
	}
	cout << "again y/n  ";
	cin >> again;
	if (again == "y"){
		cout << endl;
		main();              //Recursive
	}else{
		return 0;
	}
	
}
