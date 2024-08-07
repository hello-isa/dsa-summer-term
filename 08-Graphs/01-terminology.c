/*
Graph: non-linear data structure composed of vertices and edges.
        It is used to model relationships between various elements.

Vertex (or Node): An element.
Edge (or Arc): Connecting link between two vertices.
Degree: Number of edges connected to a vertex.
Path: Sequence of vertices where each consecutive pair is connected by an edge.
Cycle: Path that starts and ends at the same vertex, with no repeated vertices except for the starting and ending vertices.
Spanning Tree: Subgraph that is a tree (acyclic connected graph) and includes all vertices of the original graph.
Minimum Spanning Tree (MST): Spanning tree with the minimum possible sum of edge weights.

Connected Graph Vs Disconnected Graph
1. Connected Graph: Graph where there is a path between any pair of vertices.
2. Disconnected Graph: Graph with one or more isolated subgraphs.

Cyclic Graph vs Acyclic Graph
1. Cyclic Graph: A graph that contains at least one cycle.
                    It's possible to traverse through edges and return to the starting point by following a sequence of vertices and edges.
2. Acyclic Graph: A graph that does not contain any cycles.
                    There are no paths that start and end at the same vertex without revisiting any vertex in between. This means you cannot loop back to any vertex through a sequence of edges.

Three Types of Graphs
1. Undirected Graph: A graph where edges have no direction, it simply connects vertices.
                    If an edge exist between A and B:
                    (A, B) = (B, A)     -> Edge is bidirectional
2. Directed Graph: A graph where edges direction from one vertex to another.
                    (A, B) != (B, A)
3. Weighted Graph: A graph where edges have weights associated with them.

Implementation
1. Adjacency Matrix: Utilizes row and column (2D array). Suits dense graph (a.k.a. lots of edges) or when edge lookup is required.
                    Representation:     1  (or weight) if an edge exists, else 0.
                    Size:               V * V, where V is the number of vertices
                    Time complexity:    O(1)
                    Space complexity:   O(V^2)
2. Adjacency List: Similar to an open dictionary i.e. separate chaining (i.e. linked list implementation). Suits sparse graph or memory efficiency is a must.
                    Time complexity:    O(V)
                    Space complexity:   O(V + E), where E is the number of edges

Traversal
1. Depth-First Search (DFS): Explore one branch as far as possible before backtracking.
                                Remember: Keep in mind the conditions because the algorithm follows it.
2. Breadth-First Search (BFS): Visit the neighbors/siblings at the same level/breadth.

Shortest Path Algorithms
Dijkstra's Algorithm: Calculates the shortest path from specific starting node and destination node.
        Uses adjacency matrix.
        How it works:
        1. Select the node with the smallest known distance to visit first.
                For instance, given nodes are alphabet. Start with.
                A to itself hence: distance = 0.
        2. Once you've moved to the node, look at the neighbors. For each neighboring, sum the distance from the starting node.
        3. If the new total distance to a node is less than the previous total, store it in the Visited list.
        4. Continue the process until all nodes are visited.
Floyd-Warshall Algorithm: Calculates the shortest path from all pairs of vertices.
        Uses adjacency matrix.
        How it works:
        1. Initialization
        2. Iteration: number of nodes = number of iteration

Minimum Spanning Tree Algorithms (for weighted undirected graph)
Prim's Algorithm
        How it works:
        1. Start with an arbitrary vertex and grow the minimum spanning tree one edge at a time.
        2. At each step, select the edge with the smallest weight that connects a vertex, ensure no cycles are formed.
        2. Continue until all vertices are included in the tree.
Kruskal's Algorithm
        How it works:
        1. Sort all the edges in the graph by their weights (in ascending order).
        2. Add them to the minimum spanning tree one by one in increasing order of weight, as long as adding the edge does not form a cycle.
        3. Each node visited is stored in the Visited list.
*/
