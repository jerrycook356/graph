#pragma once
#include "GraphInterface.h"
#include <vector>

using namespace std;

template<class LabelType>
class Graph :public GraphInterface<LabelType>
{

private:

	int** adjMatrix;
	int vertices;
	

public:


	Graph(int numberOfVertices);

	int getNumVertices()const;
	int getNumEdges()const;
	bool add(LabelType start, LabelType end, int edgeWeight);
    bool remove(LabelType start, LabelType end);
	int getEdgeWeight(LabelType start, LabelType end)const;
	void breadthFirstTraversal(LabelType start, void visit(LabelType&));
	void depthFirstTraversal(LabelType start, void visit(LabelType&));
	void plowStreets();


};
#include "Graph.cpp"

