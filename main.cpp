#include <iostream>
#include "Edge.h"
#include "Node.h"
#include "Graph.h"

int main()
{
	Node* parent = new Node(5, 0, 0);
	Node* child = new Node(4, 0, 0);
	Edge edge = Edge(3);
	std::cout << parent;
	delete parent;
	delete child;

	// Make the Graph with number of layers
	unsigned int num_layers = 4;
	unsigned int input_size = 3;
	unsigned int hidden_size = 4;
	unsigned int output_size = 1;
	double l_array[num_layers];
	double* layer_sizes = l_array;
	for (unsigned int i = 0; i < num_layers; i++)
	{
		if (i == 0)
		{
			*(layer_sizes + i) = input_size;
		}
		else if (i == num_layers - 1)
		{
			*(layer_sizes + i) = output_size;
		}
		else
		{
			*(layer_sizes + i) = hidden_size;
		}
	}
	Graph network = Graph(layer_sizes, num_layers);
	return 0;
}