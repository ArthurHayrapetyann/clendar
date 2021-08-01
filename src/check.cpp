#include "calend.hpp"
       //Checks if the date of our given month corresponds to reality
bool check(int a,int b, int years){
	if (b > 12){     
		cout << "Year has 12 manths" << endl;
		return false;
	}
	else if (b % 2 != 0 && a > 31){
		cout << "this manth has 31 days" << endl;
		return false;
	}
	else if(b % 2 == 0 && a > 30 && b != 2 && b!=8){
		cout << "this manth has 30 days" << endl;
		return false;
	}
	else if(years % 4 == 0 && b == 2 && a > 29){
		cout << "this manth has 29 days" << endl;
	return false;
	}
	else if(years %4 != 0 && b == 2 && a > 28){
		cout << "this manth has 28 days" << endl;
		return false;
	}else{
		return true;
	}
}
