# Dijkstra Shortest Path Algorithm

## Overview

In this project I implemented **Dijkstra’s algorithm**, which is used to find the shortest distance from a starting node to every other node in a weighted graph.

The algorithm is considered a **greedy algorithm** because at every step it picks the node with the smallest current distance and expands from there. It keeps updating distances to neighboring nodes until the shortest path to every node has been found.

One important rule for Dijkstra’s algorithm is that **all edge weights must be non-negative**.

## How the Algorithm Works

The algorithm follows these general steps:

1. Set the starting node's distance to **0**.
2. Set the distance of all other nodes to **infinity** since their shortest paths are not known yet.
3. Use a **priority queue** to keep track of the node with the smallest current distance.
4. Remove the node with the smallest distance from the queue.
5. Check each of its neighboring nodes.
6. If going through the current node gives a shorter path to a neighbor, update that neighbor's distance.
7. Add the updated neighbor back into the priority queue.
8. Repeat this process until the queue is empty.

At the end of the algorithm, the shortest distance from the starting node to every other node has been determined.


## Data Structures Used

This implementation uses several common C++ data structures.

- **vector**  
  Used to store the graph as an adjacency list.

- **pair<int,int>**  
  Used to store a node and the weight of the edge connecting it.

- **priority_queue**  
  Used to efficiently select the node with the smallest current distance.

The graph itself is stored using an **adjacency list**, which is a common way to represent graphs. 

## Time Complexity

The time complexity of Dijkstra’s algorithm when using a priority queue is:
O((V + E) log V)

Where:

- **V** is the number of vertices (nodes)
- **E** is the number of edges

## Implementation

The algorithm is implemented in **C++**.

The source code for the implementation can be found in:
src/dijkstra.cpp


## What I Learned

Working on this project helped me better understand:

- how **greedy algorithms** make decisions
- how **graphs** can be represented in code
- how **priority queues** help improve performance
- how shortest path algorithms are used in real applications like navigation systems


## Program Output

Below is a screenshot of the program running in VS Code.

![Dijkstra Program Output](dijkstra_output.png)