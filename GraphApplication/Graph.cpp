#include "Graph.h"
#include <queue>


using namespace std;



template<class LabelType>
Graph<LabelType>::Graph(int numberOfVertices)
{
	adjMatrix = new int*[numberOfVertices];
	vertices = numberOfVertices;
	for (int i = 0;i < numberOfVertices;i++)
	{
		adjMatrix[i] = new int[numberOfVertices]();
		for (int j = 0;j < numberOfVertices;j++)
		{
			adjMatrix[i][j] = 0;
		}
	}
}

template<class LabelType>
int Graph<LabelType>::getNumVertices()const
{
	return vertices;
	
}

template<class LabelType>
int Graph<LabelType>::getNumEdges() const
{
	return 0;
}

template<class LabelType>
bool Graph<LabelType>::add(LabelType start, LabelType end, int edgeWeight)
{
	
	int weight = edgeWeight;
	

	adjMatrix[start][end] = 1;
	

	return true;
}

template<class LabelType>
bool Graph<LabelType>::remove(LabelType start, LabelType end)
{
	adjMatrix[start, end] = 0;
	return true;
}

template<class LabelType>
int Graph<LabelType>::getEdgeWeight(LabelType start, LabelType end) const
{
	return 0;
}

template<class LabelType>
void Graph<LabelType>::breadthFirstTraversal(LabelType start,  void visit(LabelType&))
{

}

template<class LabelType>
void Graph<LabelType>::depthFirstTraversal(LabelType start, void visit(LabelType&))
{

}

template<class LabelType>
void Graph<LabelType>::plowStreets()
{
	int start = 1;
	int end = 1;

	int limit = vertices;

	for (int i = 1;i < vertices;i++)
	{
		for (int j = 1;j < vertices; j++)
		{
			if (adjMatrix[i][j] == 1)
			{
				cout << endl << "Plowing from " << i <<" to "<<j;				
			}			

		}
	}

}
