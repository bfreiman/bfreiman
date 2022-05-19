#ifndef Node_h_
#define Node_h_
#include "Edge.h"

class Node {
  public:
  	Node(double w, double next_layer_size, double prev_layer_size) {weight = w;}
  	double weight_ret() {return weight;}
  private:
  	double weight;
  	double bias;
    // Arrays of edges
    Edge* forward;
    Edge* backward;
};

std::ostream& operator<<(std::ostream& ostr, Node* node){
    ostr << "Node weight: " << node->weight_ret() << std::endl;
    return ostr;
}

#endif