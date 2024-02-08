/*
	Author: Jose Lara
	Date: 2/7/2024
	Purpose: Create a program that displays a simple menu. 
	The user will then decide what they want to do with the menu. 
	this program will only ask for two numbers at a time
*/	

#include <iostream>
#include <math.h>
using namespace std;

// create a function for the menu

void menu() {
	cout << "\n\tWelcome\n"; 
	cout << "1.) Addition\n"; 
	cout << "2.) Subtraction\n"; 
	cout << "3.) Multiply\n"; 
	cout << "4.) Divide\n"; 
	cout << "0.) Quit\n";
	cout << "*If you enter a character the program will end*" << endl;
}

//create a function for the sum 
double sum(float num1, float num2) {
	return num1 + num2; 
}

//create a function for the difference 
double difference(float num1, float num2) {
	return num1 - num2;
}

//create a function for the product 
double product(float num1, float num2) {
	return floor (num1 * num2 * 100 + 0.5)/100; 
}

//create a function for the quotient
double quotient(float num1, float num2) {

	// the denominator != 0 , create a while loop in order to prevent the code from running until the user enters a number other than 0 
	while (num2 == 0) {
		cout << "You can't devide by zero";
		cout << "\nEnter a new number: "; 
		cin >> num2; 
	}

	return floor(num1 / num2 * 100 + 0.5)/100; 
}

int main() {
	//create a variable to enter the users option 
	int userChoice; 
	char stopMenu;

	// create a double data type for the numbers the user enter, incase they choose to enter numbers with decimals
	float num1, num2; 
	
	//create a do while loop so the user gets to end the loop when theyre done 
	do {

		// call the menu function 
		menu();
		cout << "Enter your choice: ";
		cin >> userChoice;
		// create a while loop incase the user decides to enter a value that isnt on the menu
		while (userChoice > 4 || userChoice < 0) {
			cout << "Enter a valid choice: "; 
			cin >> userChoice; 
		}

		//create a switch statement so the users choice is executed
		switch (userChoice) {
			//case 1 is for addition     
		case 1:
			cout << "Enter a number: ";
			cin >> num1;
			cout << "Enter a number: ";
			cin >> num2;
			cout << "The sum is: " << sum(num1, num2) << endl;
			break;

			//case 2 is for subtraction 
		case 2:
			cout << "Enter a number: ";
			cin >> num1;
			cout << "Enter a number: ";
			cin >> num2;
			cout << "The difference is: " << difference(num1, num2) << endl;
			break;

			//case 3 is for multiplying
		case 3:
			cout << "Enter a number: ";
			cin >> num1;
			cout << "Enter a number: ";
			cin >> num2;
			cout << "The product is: " << product(num1, num2) << endl;
			break;

			//case 4 is for dividing
		case 4:
			cout << "\nEnter a number: ";
			cin >> num1;
			cout << "Enter a number: ";
			cin >> num2;
			cout << "The quotient is: " << quotient(num1, num2) << endl;
			break;
			
			//case 0 is to quit
		case 0:
			return 0;
		}

		cout << "Do you want to continue? (Y/N): ";
		cin >> stopMenu; 

	} while (stopMenu == 'y' || stopMenu=='Y');
		
	
	return 0; 

}