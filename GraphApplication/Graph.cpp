#include "Graph.h"


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
