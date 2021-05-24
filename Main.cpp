#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	//file creation and writing
	ofstream FirstFile("Test.txt");
	FirstFile << "This is test file creating and writing to ...";

	//Reading file to a string variable
	ifstream lastFile("MyFile.txt");
	string textData;
	while (getline (lastFile, textData))
	{
		//print to console
		cout << textData;
	}
	return 0;
}