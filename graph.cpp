#include <iostream>
#include "graph.h"

virtual bool isEmpty()=0;
    virtual bool isDirected()=0;
    virtual bool addVertex(Node vertex) =0;
    virtual bool addEdge(Node vertex1, Node vertex2)=0;
    virtual bool removerVertex(Node vertextoRemove)=0;
    virtual bool removeEdge(Node vertex1, Node vertex2)=0;