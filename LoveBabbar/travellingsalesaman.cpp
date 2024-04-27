#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to calculate the total distance for a given permutation of cities
int calculateDistance(const vector<vector<int>>& graph, const vector<int>& permutation) {
    int totalDistance = 0;
    int n = permutation.size();

    for (int i = 0; i < n - 1; ++i) {
        totalDistance += graph[permutation[i]][permutation[i + 1]];
    }

    // Add distance from the last city back to the starting city
    totalDistance += graph[permutation[n - 1]][permutation[0]];

    return totalDistance;
}
// Function to find the shortest path using naive approach
vector<int> findShortestPath(const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> cities(n);
    for (int i = 0; i < n; ++i) {
        cities[i] = i;
    }

    vector<int> shortestPath;
    int shortestDistance = INT_MAX;

    do {
        int distance = calculateDistance(graph, cities);
        if (distance < shortestDistance) {
            shortestDistance = distance;
            shortestPath = cities;
        }
    } while (next_permutation(cities.begin(), cities.end()));

    return shortestPath;
}

int main() {
    // Example graph representing distances between cities
    vector<vector<int>> graph = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    // Find the shortest path using the naive approach
    vector<int> shortestPath = findShortestPath(graph);

    // Output the shortest path
    cout << "Shortest Path: ";
    for (int city : shortestPath) {
        cout << city << " ";
    }
    cout << endl;

    return 0;
}
