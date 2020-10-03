#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string filename;
    cin>>filename;
	int count = 0;
	int countOfExceed = 0;
	int TotalBytes = 0;
	
	ifstream ifstream;
	ofstream ofstream;
	ifstream.open("filename.txt");

	while (!ifstream.eof()) {
		count++;
		ifstream >> filename;
		if (count % 7 == 0) {
			if (stoi(filename) > 5000) {
				countOfExceed++;
				TotalBytes += stoi(filename);
			}
		}
	}
	ifstream.close();

	ofstream.open("bytes_filename.txt");
	ofstream << to_string(countOfExceed) << endl;
	ofstream << to_string(TotalBytes) << endl;
	ofstream.close();
}