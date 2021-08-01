#include "calend.hpp"
int calend(int a, int b, int c){
	int weakday;                       // save balance of all days begin 1.jan.1900
	int days;                          // save all days begin 1.jan.1900
	int days31= b/2+1;                 // save manths who has 31 days
	int years = c - 1900;              // save quantity of years
	int lengthyears = years/4;         // save quntity long years
	if (b > 2){			   // if manth then february
		if(b > 8){                 // if manth then october
			if( years % 4 == 0){
				days = lengthyears + (c-1901)*365+29+(days31-1)*31+(b-days31-1)*30+a; //count all days
			}else{
				days = lengthyears + (c-1901)*365+29+(days31-1)*31+(b-days31-1)*30+a;
			}
		}else{
			if(years % 4 == 0){
				days = lengthyears+(c-1901)*365+28+(days31-1)*31+(b-days31-1)*30+a;
			}else{
				days = lengthyears+(c-1901)*365+28+(days31-1)*31+(b-days31-1)*30+a;
			}}
	}else{                             //if manth perevious february or february
		if(years%4 == 0){	
			days = lengthyears - 1 + (days31-1)*31 + (c-1901)*365 + a;
		}
		else{
			days = lengthyears+ (days31-1)*31 + (c-1901)*365 + a;
		}
	}
	weakday = days%7;
	return weakday;
}


