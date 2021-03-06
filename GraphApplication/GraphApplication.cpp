// GraphApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Graph.h"
#include <sstream>


void getNumbers(string line,Graph<int>* graph)
{

	stringstream ss;
	
	string temp;
	temp = line.substr(1, 3);

	ss << temp;
	int vertex1 =0;
	int vertex2 =0;
	
	ss >> vertex1 >> vertex2;

	graph->add(vertex1, vertex2,0);

}


using namespace std;
int main()
{
	
	Graph<int>* graph =  new Graph<int>(7);
	
	ifstream cityFile;
	string line;
	int vertex1 = 0;
	int vertex2 = 0;
	char symbol = ' ';

	cityFile.open("./debug/CityFolder/city.txt");
	if (cityFile.is_open())
	{
		int i = 0;
		getline(cityFile, line);
		while (!line.empty())
		{
			getNumbers(line,graph);
			getline(cityFile, line);
			
		}


	}
	else
		cout << endl << "file not open";
	cityFile.close();
	graph->plowStreets();
}

