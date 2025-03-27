#include <iostream> // for cout, cin
#include <fstream> // for file I/O
#include <string>
using namespace std;
int main() {
	string s1;
	// build an output file
	ofstream outFile;
	// create a file in a directory that is writable. "\" must be coded as "\\"
	outFile.open("c:\\Users\\thesp\\Desktop\\Test.txt"); // to overwrite
	// outFile.open("c:\\Users\\thesp\\testOutFile.txt", ios::app); // to append
	if (outFile.fail()) {
		cout << "File open failed.\n";
		system("pause");
		exit(1);
	}
	// Get input
	cout << "Enter words(q to quit): ";
	while (cin >> s1) {
		// Write data to the file
		if (s1 == "q") {
			break;
		}
		else {
			//outFile << s1;
			outFile << s1 << endl;
		}
	}
	outFile.close();

	ifstream inFile;
	// Open an input file
	inFile.open("c:\\Users\\thesp\\Desktop\\Test.txt");
	// exit with error if open fails
	if (inFile.fail()) {
		cout << "File open failed.\n";
		system("pause");
		exit(1);
	}
	cout << "Using a while loop to read the whole file:\n";
	while (inFile >> s1) {
		//cout << s1;
		//cout << s1 << " ";
		cout << s1 << endl;
	}
	system("pause");
	return 0;
}