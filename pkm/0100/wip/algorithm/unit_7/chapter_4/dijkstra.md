# Dijkstra's Algorithm

## Theory
- It is an algorithm that finds the **shortest path to all the nodes from the source** in a **directed weighted** graph $G(V,E)$ for the case in which **all edges are nonnegative** i.e. $w(u,v) \geq 0$ for each edge $(u,v) \in E$.

## Pseudo Code

```pseudo
DIJKSTRA(G,w,s)
    INITIALIZE-SINGLE-SOURCE(G,s)
    S = {}
    Q = G.V
    while Q != {}
        u = EXTRACT-MIN(Q)
        S = S U {u}
        for each vertex v in G.Adj[u]
            RELAX(u,v,w)
```

- Every vertex will have $2$ properties.
    1. $d$ which specifies the shortest distance to that vertex from source at any point in time.
    2. $\pi$ which specifies the parent of the node *(wording needs to be corrected)*



- 