#include<iostream>
#include<cmath>
using namespace std;

int main(){
//user info
float principal;
float interest;
float time;
cout << "Principal: ";
cin>> principal;
cout << "Interest: ";
cin>> interest;
cout << "Time(years): ";
cin >> time;
//calculations
float interestInMonths = (interest/100.0)/12;
float timeInMonths = time*12.0;


float monthlyPayment = principal * (interestInMonths* pow((1+interestInMonths),timeInMonths)/(pow((1+interestInMonths),timeInMonths)-1));
printf("$ %f", monthlyPayment);

}
