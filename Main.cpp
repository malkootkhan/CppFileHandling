#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>


using namespace std;

int main()
{
	//file creation and writing
	ofstream FirstFile("Test.txt");
	FirstFile << "This is test file creating and writing to ...";

	//Reading file to a string variable
	ifstream lastFile("MyFile.txt");
	vector <string> textVec;
	string textData;
	int noOfLines= 0;

		while (getline(lastFile, textData))
		{
			//print to console
			cout << textData << endl;
			textVec.push_back(textData);

		}
		vector<string>::iterator itr = textVec.begin();
			while (itr== textVec.end())
			{
				cout << *itr << endl;
				itr++;
			}
		//find the number of characters in the file
		cout << textData.capacity()*textVec.size() << endl;


	return 0;
}