# Corman Notations for Graph Algorithms

All the graph algorithms are referred from **Cormen**. So make yourself familiar with the conventions *(Notations and common functions)*

## Notations
- $G(V,E)$ represents a Graph
    - $V$ represents the set of all vertices in the Graph $G(V,E)$
    - $E$ represents the set of all edges in the Graph $G(V,E)$
- $\lvert E \rvert$ represents to number of edges in the Graph $G(V,E)$
- $\lvert V \rvert$ represents to number of vertices in the Graph $G(V,E)$
- $v$ represents a single vertex in the Graph $G(V,E)$
- $(u,v)$ represents a single edge from $u$ to $v$
- $w$ represents the weight of an edge $(u,v)$

### Adjacency List Notations
- $d[1..V]$ represents the array in which all vertices are stored when the Graph $G(V,E)$ is represented in adjacency list form.
- In every index of $d[1..V]$ array, we also keep all the attributes $(u.d \ and \ u.\pi)$ of the particular vertex $u$
- $Adj[u]$ represents the all vertices adjacent to vertex $u$ present in Graph $G(V,E)$  

## Assumptions
- Most of the graph algorithms in the Docs assume thats an input graph is represented in an adjacency list form.
- **Sparse Graphs** are those for which $\lvert E \rvert$ is much less than $\lvert V \rvert ^2$
- **Dense Graphs** are those for which $\lvert E \rvert$ is close to $\lvert V \rvert ^2$

## Functions

### `INITIALIZE-SINGLE-SOURCE(G,s)`
- This function initialize both $d$ and $\pi$ attributes of all the vertex $v \in G.V$ 
- Then it initializes the $s.d = 0$. because, the shortest path from source to itself is $0$.

    ```pseudo
    INITIALIZE-SINGLE-SOURCE(G,s)
        for each vertex v in G.V
            v.d = infinity
            v.pi = null
        s.d = 0
    ```