#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
//Calculator Functions
void add(float num1 , float num2 ){
cout << num1 << " + " << num2 << " = " << num1+num2 << endl;}
void sub(float num1 , float num2 ){
cout << num1 << " - " << num2 << " = " << num1-num2 << endl;}
void division(float num1 , float num2 ){
cout << num1 << " / " << num2 << " = " << num1/num2 << endl;}
void multiply(float num1 , float num2 ){
cout << num1 << " * " << num2 << " = " << num1*num2 << endl;}
int main () {
int choose,power;
double num1,num2;
char restart ;
do{
cout << "Please choose the operation number : \n ";
cout << "1-Multiplication (*) \n ";
cout << "2-Division (/) \n ";
cout << "3-Subtraction (-) \n ";
cout << "4-Addition (+) \n ";
cout << "5-Power (^) \n ";
cout << "6-Square Root (√) \n ";
cout << "7-Exponent (e) \n ";
cout << "8-Exit \n ";
cin >> choose ;
switch (choose){
case 1 :
cout << "Enter two numbers : \n";
cin >> num1;
cout << endl;
cin >> num2;
multiply(num1,num2);
break;
case 2:
cout << "Enter two numbers : \n";
cin >> num1;
cout << endl;
cin >> num2;
if(num2!=0){
division(num1,num2);}
else{
cout << "Error \n";
}
break;
case 3:
cout << "Enter two numbers : \n";
cin >> num1;
cout << endl;
cin >> num2;
sub(num1,num2);
break;
case 4:
cout << "Enter two numbers : \n";
cin >> num1;
cout << endl;
cin >> num2;
add(num1,num2);
break;
case 5 :
cout << "Enter numbers you want to power : \n";
cin >> num1;
cout << endl;
cin >> num2;
cout << "choose from the list below : \n";
cout <<"1-"<<num1<<" ^ "<<num2<< endl ;
cout <<"2-"<<num2<< " ^ "<< num1<<endl;
cin >> power;
switch(power){
case 1 :
cout<<num1<<" ^ "<<num2<<" = "<<pow(num1,num2)<<endl;
break;
case 2 :
cout<<num2 << " ^ " << num1 << " = " <<  pow(num2,num1) << endl;
break;
default :
cout << "Invalid number \n";}
break;
case 6 :
cout << "Enter a number : \n";
cin >> num1;
cout << endl;
cout << "The square root of "<< num1 << " = " << sqrt(num1)<< endl;
break;
case 7 :
cout << "Enter a number : \n";
cin >> num1;
cout << endl;
cout << "The Exponent of "<< num1 << " = " <<exp(num1)<< endl;
break;
case 8 :
cout << "Thanks for using our Calculator \n";
return 0 ;
break;
default :
cout << "Invalid number \n";}
cout << "Do you want to restart ? (Y/N) \n";
cin >> restart;
}while (restart=='y'|| restart=='Y');
if(restart!='y'||restart !='Y'){
cout << "Thanks for using our Calculator \n"; }
}