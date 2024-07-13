#include "graph.h"

int Graph::numVertices() const {
    return vertexCount;
}

int Graph::numEdges() const {
    int count = 0;
    for (const auto &row : adjMatrix) {
        for (int edge : row) {
            count += edge;
        }
    }
    return directed ? count : count / 2;
}

int Graph::indegree(int vertex) const {
    if (vertex >= vertexCount) return -1;
    int count = 0;
    for (const auto &row : adjMatrix) {
        count += row[vertex];
    }
    return count;
}

int Graph::outdegree(int vertex) const {
    if (vertex >= vertexCount) return -1;
    int count = 0;
    for (int edge : adjMatrix[vertex]) {
        count += edge;
    }
    return count;
}

int Graph::degree(int vertex) const {
    if (directed) {
        return indegree(vertex) + outdegree(vertex);
    } else {
        return outdegree(vertex);
    }
}

std::vector<int> Graph::neighbours(int vertex) const {
    std::vector<int> neighbors;
    if (vertex >= vertexCount) return neighbors;
    for (int i = 0; i < vertexCount; i++) {
        if (adjMatrix[vertex][i]) {
            neighbors.push_back(i);
        }
    }
    return neighbors;
}

bool Graph::neighbour(int vertex1, int vertex2) const {
    if (vertex1 >= vertexCount || vertex2 >= vertexCount) return false;
    return adjMatrix[vertex1][vertex2] == 1;
}