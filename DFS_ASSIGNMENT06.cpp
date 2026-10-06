#include <iostream>
using namespace std;

class Graph
{
private:
    int adj[5][5];

public:
    // Constructor
    Graph()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                adj[i][j] = 0;
            }
        }
    }

    // Create graph
    void createGraph()
    {
        int edges, source, destination;

        cout << "Enter number of edges: ";
        cin >> edges;

        cout << "Enter edges (source destination):" << endl;

        for (int i = 0; i < edges; i++)
        {
            cout << "Edge " << i + 1 << ": ";
            cin >> source >> destination;

            if (source >= 0 && source < 5 &&
                destination >= 0 && destination < 5)
            {
                // Undirected graph
                adj[source][destination] = 1;
                adj[destination][source] = 1;
            }
            else
            {
                cout << "Invalid vertex! Enter again." << endl;
                i--;
            }
        }
    }

    // Display adjacency matrix
    void displayMatrix()
    {
        cout << "\n5 x 5 Adjacency Matrix:\n";

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g;

    g.createGraph();
    g.displayMatrix();

    return 0;
}
