#ifndef Graph_h_
#define Graph_h_

class Graph {
  public:
  	Graph(double* l_sizes, unsigned int num_ls);
  private:
  	double* layer_sizes; //points at an array of # nodes in each layer
  	unsigned int num_layers;
  	Node** nodes[];
  	void initialize_graph();
};

Graph::Graph(double* l_sizes, unsigned int num_ls)
{
	layer_sizes = l_sizes;
  num_layers = num_ls;
	nodes[num_layers];
	for (unsigned int i = 0; i < num_layers; i++)
	{
		unsigned int layer_size = *(layer_sizes + i);
		Node* temp[layer_size];
		//Stack Smashing... ew
		nodes[i] = temp;
	}
	initialize_graph();
}

void Graph::initialize_graph()
{
	// Loop through the node layers to create bi directional edges
	for (unsigned int i = 0; i < num_layers - 1; i++)
	{
		unsigned int p = *(layer_sizes + i);
		unsigned int y = *(layer_sizes + i + 1);
		std::cout << "p" << p << std::endl;
		std::cout << "y" << y << std::endl;
		for (unsigned int z = 0; z < p; z++)
		{
			for (unsigned int l = 0; l < y; l++)
			{
				*(nodes[i][z]);
			}
		}
	}
}

#endif