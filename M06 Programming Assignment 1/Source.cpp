// M06 Text File Reader
// Author: Jacob Maxwell
// Date last updated: 03/01/2019
// Purpose: To read a text file and save duplicate words in a set
#include <iostream>
#include <string>
#include <set>
#include <fstream>
using namespace std;

int main() {

	set<string> myList;
	set<string>::iterator it;

	ifstream myInput;

	string data;

	myInput.open("TextFile.txt", ios::in);
	while (getline(myInput, data)) {

		myList.insert(data);

	}
	myInput.close();

	cout << "List of unique words" << endl;
	cout << "------------------------" << endl;

	for (it = myList.begin(); it != myList.end(); ++it) {
		cout << (*it) << endl;
	}

	system("pause");
	return 0;
}