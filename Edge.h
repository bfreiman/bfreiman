#ifndef Edge_h_
#define Edge_h_
#include <iostream>
#include "Node.h"

class Edge {
  public:
  	Edge(double w) {weight = w;}
    double weight_ret() {return weight;}
    void set_right(Node* right);
    void set_left(Node* left);
  private:
    Node* left;
    Node* right;
    double weight;
  	double bias;
};

#endif