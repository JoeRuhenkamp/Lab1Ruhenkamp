/*
 * Program:  <First Laboratory>
 * Author:   <Joe Ruhenkamp>
 * Date:     <1/25/2024>
 *
 */

#include <iostream>
#include <string>
using namespace std;


int main(void) {
	/*float width;
	float length;
	float area;
	length = 4.5;
	width = 3.35;
	area = length * width;
	cout << "Rectangle Area = " << area << "\n";

	cout << "Who's on First? \n";


	return 0;
}*/

	int row;
	int col;

	for (row = 2; row <= 3; row = row + 1) {
		for (col = 0; col <= 1; col = col + 1) {
			cout << row << col << " ";
		}
	}
}