#include <iostream>
#include <cstdlib> // to get rand functions
using namespace std;

/*Write a complete program that asks the user for a seed and then
outputs a list of ten random numbers based on that seed.
The numbers should be floating point numbers in the range 0.0 to 1.0
(inclusive).*/

int main() {
	float seed;
	cout << "Input a seed: "; // user input
	cin >> seed;

	srand(seed);
	for (int i = 1; i <= 10; i++) { //loop the output so that it outputs ten times
		float random = rand(); //set the rand as a float
		cout << random / RAND_MAX << endl; //output so that its between 0.0 and 1.0
	}
}