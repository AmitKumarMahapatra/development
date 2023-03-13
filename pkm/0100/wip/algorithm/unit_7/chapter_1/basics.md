# Basics of Graph for Algorithm Subject

## Theory
- A Graph $G(V,E)$ is a collection of set of Vertices $V$ and set of Edges $E$.
- Diagrammatically

    <pre class="mermaid">
        graph LR
            A((A)) --- B((B))
            A((A)) --- C((C))
            A((A)) --- D((D))
            C((C)) --- D((D))
            B((B)) --- D((D))
    </pre>
- Every vertex of a graph has a Degree. Degree is nothing but, the count of number of other vertices that a particular vertex is adjacent to by direct edges.
- In the above diagram, 
    - Vertex $A$ Degree is $3$
    - Vertex $B$ Degree is $2$
    - Vertex $C$ Degree is $2$
    - Vertex $D$ Degree is $3$
- More on this topic is discussed in [Graph Theory]() in [Discrete Mathematics]() Subject.

### Types of Graph
- There are 2 types of Graphs
    1. Simple Graph
    2. Multi Graph

- In Algorithm Subject, we mainly deal with Simple Graphs.

#### Simple Graphs

##### Theory
- Simple Graph does not contain multiple edges between 2 vertices.
- Simple Graph does not contain self loop.
- Minimum Degree of any vertex in simple graph is $0$
- Maximum Degree of any vertex in simple graph is $V-1$ assuming there are total $V$ number if vertices.

##### Diagrammatically

<pre class="mermaid">
    graph LR
        A((A)) --- B((B))
        A((A)) --- C((C))
        A((A)) --- D((D))
        C((C)) --- D((D))
        B((B)) --- D((D))
</pre>


#### Multi Graphs

##### Theory
- Multi Graph contains multiple edges between 2 vertices.
- Multi Graph contains self loop.
- Minimum Degree of any vertex in simple graph is $0$
- Maximum Degree of any vertex in simple graph is $\infty$


##### Diagrammatically

<pre class="mermaid">
    graph LR
        A((A)) --- B((B))
        A((A)) --- B((B))
        A((A)) --- D((D))
        A((A)) --- C((C))
        A((A)) --- D((D))
        C((C)) --- D((D))
        C((C)) --- D((D))
        C((C)) --- A((A))
        A((A)) --- A((A))
        D((D)) --- D((D))
        B((B)) --- D((D))
        B((B)) --- D((D))
</pre>

### Range of Simple Graph
- The simplest simple graph is Null Graph with $0$ edges
- The most complex simple graph is Complete Graph with $V*(V-1)$ edges.
- In algorithm, we should deal with these 2 extremes of simple graph, as they will provide a keen perspective for Time and Space Complexity.

    <pre class="mermaid">
        graph
            A((Simple Graphs)) --> C((Null Graph))
            A((Simple Graphs)) --> B((Complete Graph))
    </pre>

#### Null Graph

<pre class="mermaid">
    graph
        A((A))
        B((B))
        C((C))
        D((D))
</pre>

#### Complete Graph

<pre class="mermaid">
    graph LR
        A((A)) --- B((B))
        A((A)) --- D((D))
        A((A)) --- C((C))
        B((B)) --- C((C))
        B((B)) --- D((D))
        C((C)) --- D((D))
        
</pre>

### Degree and Edge Relation

For any graph $G(V,E)$ below equation holds

$$
\sum_{v=1}^{V} = 2* \lvert E \rvert
$$

#### Example

- This is because every edge is connecting $2$ vertices. So it is counted $2$ times while counting degree of all the vertices.

- Example
    <pre class="mermaid">
        graph LR
            A((A)) --- B((B))
            A((A)) --- C((C))
            A((A)) --- D((D))
            C((C)) --- D((D))
            B((B)) --- D((D))
    </pre>

    In the above simple graph, 

    Degree of $A = 3$

    Degree of $B = 2$

    Degree of $C = 2$

    Degree of $D = 3$

    $\sum_{v=1}^{4} = 3 +2 + 2 +3 = 10$

    Number of edges in the graph = $5$


- In case of multi graphs, self loops are counted 2 times while counting degree.

- Example
    <pre class="mermaid">
        graph LR
            A((A)) --- B((B))
            A((A)) --- B((B))
            A((A)) --- D((D))
            A((A)) --- C((C))
            A((A)) --- D((D))
            C((C)) --- D((D))
            C((C)) --- D((D))
            C((C)) --- A((A))
            A((A)) --- A((A))
            D((D)) --- D((D))
            B((B)) --- D((D))
            B((B)) --- D((D))
    </pre>

    In the above Multi graph, 

    Degree of $A = 8$

    Degree of $B = 4$

    Degree of $C = 4$

    Degree of $D = 8$

    $\sum_{v=1}^{4} = 8 + 4 + 4 + 8 = 24$

    Number of edges in the graph = $12$