#include<iostream>
    class Node{

    public:
        int info;
        Node* next;
        Node* prev;

        Node(){}
        Node(int data): info(data), next(nullptr), prev(nullptr){}
        Node(int data, Node* next): info(data), next(next, prev(prev)){}
};

class Graph{
    virtual bool isEmpty()=0;
    virtual bool isDirected()=0;
    virtual bool addVertex(Node vertex) =0;
    virtual bool addEdge(Node vertex1, Node vertex2)=0;
    virtual bool removerVertex(Node vertextoRemove)=0;
    virtual bool removeEdge(Node vertex1, Node vertex2)=0;
    virtual int numvertices()=0;
    virtual int numEdge() =0;
    virtual int indegree(Node vertex)=0;
    virtual int outdegree(Node vertex)=0;
    virtual int degree(Node vertex) =0;
    virtual Node neighbours(Node vertex) =0;
    virtual bool neighbour(Node vertex1, Node vertex2)=0;
} ;