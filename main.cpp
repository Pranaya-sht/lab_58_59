#include <iostream>
#include "graph.h"
using namespace std;

int main() {
    Graph g(true);  // Create a directed graph

    // Add vertices
    g.addVertex();
    g.addVertex();
    g.addVertex();
    g.addVertex();

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);

    // Display graph properties
    std::cout << "Graph is empty: " << g.isEmpty() << std::endl;
    std::cout << "Graph is directed: " << g.isDirected() << std::endl;
    

    

    

    

    return 0;
}