# Graph Representation

## Theory
- The basic building block of any type of Data Structure is either [Array]() or [Linked List]().
- For example, we can implement [Stack]() using both Array as well as Linked List.
- Graph can also be represented using Array *(specifically 2D Array, i.e Matrix)* as well as Linked List.
- Depending upon the requirement and the given graph, we can decide which we should go with. Both implementation has some merits and some demerits.
- Every programming language offers these 2 building blocks.

### Diagrammatically

<pre class="mermaid">
    graph LR
        A((A)) --- B((B))
        A((A)) --- C((C))
        A((A)) --- D((D))
        C((C)) --- D((D))
        B((B)) --- D((D))
</pre>


### Matrix Representation

$$
\begin{bmatrix}
    0 & 1 & 1 & 1 \\
    1 & 0 & 0 & 1 \\
    1 & 0 & 0 & 1 \\
    1 & 1 & 1 & 0 \\
\end{bmatrix}
$$

#### Usage
- It is a static representation.
- Matrix representation always takes $O(V^2)$ Space.
- So if the graph is a Sparse Graph, then most of the values in the matrix will be $0$.
- So it is a better implementation if the graph is a dense or complete graph.

#### Implementation

### Adjacency List Representation

![Insert Image here]()

#### Usage
- It is a dynamic representation.
- List representation always takes $O(E + V)$ Space.
    - If it is a null graph, $O(E + V)$ becomes $O(V)$ as $E=0$
    - If it is a complete graph, $O(E + V)$ becomes $O(V^2)$ as $E = V^2$
- So it is a better representation for Sparse Graph.

#### Implementation

## Use Cases in both Representation

### Example 1
Given a graph $G(V,E)$ , what is Time to find all the adjacent vertices of vertex $A$

- Matrix representation will take $O(V)$ in every case.
- List representation will take 
    - $O(1)$ if the graph is a null graph *(Best Case)*
    - $O(V)$ otherwise  *(Average/Worst Case)*

### Example 2
Given a graph $G(V,E)$ , what is Time to find degree of every vertex in the graph.

- Matrix representation will take $O(V^2)$ in every case.
- List representation will take
    - $O(V)$ if the graph is a null graph *(Best case)*
    - $O(V.(V-1)) = O(V^2)$ if a complete graph *(Average/Worst case)*
    - So We can safely say it is going to take $O(V+E)$ time. 

### Example 3
Given a graph $G(V,E)$ , what is Time to find whether 2 vertices A and B are adjacent or not.

- Matrix representation will take $O(1)$ time always.
- List representation will take 
    - $O(1)$ time in *Best Case*
    - $O(V)$ time in *Average / Worst case*

## Note
- So in advance if it is known, the graph is dense, then we should go with [Matrix Representation](#matrix-representation).
- In advance if it is known, the graph is a sparse, then we should go with [List Representation](#adjacency-list-representation)
- If the type of graph is not known in advance, then we should go with [List Representation](#adjacency-list-representation)