#include <iostream>
#include <fstream>
#include <string>
#include <xstring>


using namespace std;

class streng
{
	char *str;
};

int main()
{
	//file creation and writing
	ofstream FirstFile("Test.txt");
	FirstFile << "This is test file creating and writing to ...";

	//Reading file to a string variable
	ifstream lastFile("MyFile.txt");
	string textData;
	int noOfLines= 0;
	while (getline (lastFile, textData))
	{
		//print to console
		cout << textData<<endl;
		noOfLines++;
	}
	//find the number of characters in the file
	cout << noOfLines*textData.capacity() << endl;
	return 0;
}