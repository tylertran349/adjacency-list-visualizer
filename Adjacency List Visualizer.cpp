#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> list[], int start, int end) {
	list[start].push_back(end);
	list[end].push_back(start);
}

void printGraph(vector<int> list[], int endNode) {
	for(int i = 0; i < endNode; i++) {
		cout << "Adjacency list of vertex " << i << ":" << endl;
		cout << i;
		for(auto x : list[i]) {
			cout << "->" << x;
		}
		cout << endl;
	}
}

int main() {
	int vertices = 5;
	vector<int> adjacencyList[vertices];
	addEdge(adjacencyList, 0, 1);
	addEdge(adjacencyList, 0, 4);
	addEdge(adjacencyList, 1, 4);
	addEdge(adjacencyList, 3, 4);
	addEdge(adjacencyList, 1, 3);
	addEdge(adjacencyList, 1, 2);
	addEdge(adjacencyList, 2, 3);
	printGraph(adjacencyList, vertices);
}
