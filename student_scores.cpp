/*	
	I wrote this code so I can get some practice in with vectors. 
	Author: Jose Lara
	Date: 06/5/2024	
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {


	//Ask the user to enter the size of the vector 
	int size = 0; 

	cout << "How many students are taking the exam:"; 
	cin >> size;
	//create the vector 

	vector <int> scores(size); 

	//create a for loop to enter the users scores, while using push back
	for (int i = 0; i < size; i++) {
		int scores_to_add;

		cout << "Enter score for student " << i + 1 << ":"; 
		cin >> scores_to_add;

		scores.push_back(scores_to_add); 
	}
	//display the scores


	cout << "\nScores\n"; 
	cout << "--------\n"; 


	//by using a for loop we can iterate through every student
	for (int i = 0; i < size; i++) {
		cout << "Student " << i + 1 << " scored:" << scores.at(i + size) << endl;
	}
	

	return 0; 
}