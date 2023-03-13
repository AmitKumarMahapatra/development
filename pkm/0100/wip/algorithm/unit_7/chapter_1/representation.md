# Graph Representation

## Theory
- The basic building block of any type of Data Structure is either [Array]() or [Linked List]().
- For example, we can implement [Stack]() using both Array as well as Linked List.
- Graph can also be represented using Array *(specifically 2D Array, i.e Matrix)* as well as Linked List.
- Depending upon the requirement and the given graph, we can decide which we should go with. Both implementation has some merits and some demerits.
- Every programming language offers these 2 building blocks.

## Undirected Graph

### Diagram

<div class="mxgraph" style="max-width:100%;border:1px solid transparent;"
    data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2023-03-13T18:48:57.819Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/110.0.0.0 Safari/537.36\&quot; etag=\&quot;5a0KLEhvbEAES2l1s0M-\&quot; version=\&quot;21.0.6\&quot; type=\&quot;google\&quot;&gt;&lt;diagram name=\&quot;Page-1\&quot; id=\&quot;9khUHUMUscuj2a9vPPXR\&quot;&gt;7ZlPb5swGMY/TY6bAEPCjmvousuiSTksOVrYBUuAkTEB+ulnih0wbtp0KwJtOdXv43/4eX+1MVmBbVo/MJjHPyjCycqxUL0CwcpxbMuzxJ9WaTrF8zedEDGCZKNe2JMnrHpKtSQIF1pDTmnCSa6LIc0yHHJNg4zRSm/2SBN91hxG2BD2IUxM9RdBPO5UXy2r1b9jEsVqZtuSNSlUjaVQxBDRaiCB+xXYMkp5V0rrLU5a85QvXb9vF2rPD8Zwxq/p4PEqRHmw29mHk13u1g1kT5/kKCeYlPqCC94oC8Qwwm0R3FUx4Xifw7CtqUTChRbzNBGRLYqwyLsUPJIai1nvzEdU82HGcT2Q5CM/YJpizhrRRNY6vrRP8uMof6s+G66U4kEilAZl/qPzyL1FoiBdeodjjuGYsyzHXHdhjgHDMW9Zjo0ZA+uZHXMNx9xlOTZmbHbHPMMxsCzHvPXov9Kf2bG14ZhpWIa+tkeoiDKaYd0kRssMte4ElohwTfhB1rTlY6t/9mQU1INmQaOCTKzjMAwGvdqw7/YcqX4Xs1HQkoX4lTWrFwjIIszf3uMx0t4NzNwOcue9kDulMZxATk76AftSQuUMPykRK+vRcXR03M2IiW7dstfwDWA80GY0kDMaqDPGGOiZr/Oy/xw5fxLkesyOAwDfQq6n7KhBNhdyYFHIuf5HIQfmRe7Lf7jLgSuRcxeF3D+zy6mb6+KYsycjzr2SOO9G3CTEmbf4ZRA33bHq3IiblTjzK8iHE7eoHe7aM/V2c5iGN/Mb0l/xduEaMP8JeePnnfyIsP+E3jXvf4gA978B&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}">
</div>

### Adjacency Matrix Representation 

$$
\begin{bmatrix}
    0 & 1 & 0 & 0 & 1 \\
    1 & 0 & 1 & 1 & 1 \\
    0 & 1 & 0 & 1 & 0 \\
    0 & 1 & 1 & 0 & 1 \\
    1 & 1 & 0 & 1 & 0 \\
\end{bmatrix}
$$

### Adjacency List Representation

<div class="mxgraph" style="max-width:100%;border:1px solid transparent;"
    data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2023-03-13T18:49:35.669Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/110.0.0.0 Safari/537.36\&quot; etag=\&quot;_n7pRJyvnCus4piGmdOZ\&quot; version=\&quot;21.0.6\&quot; type=\&quot;google\&quot;&gt;&lt;diagram name=\&quot;Page-1\&quot; id=\&quot;nF9jqBJ9WMrU9GW0f7H7\&quot;&gt;5ZxRb5swEMc/TR47AQZCHrO2azV1U6dqWveIwE2YSMiI0yT79INhE/C1iksFd0ueGh/gwN++H3dnNyN2udjd5OFq/iWLeTpyrHg3Ylcjx7Etzyr+lJZ9ZfGCcWWY5UksTzoYHpI/XF0prZsk5uvWiSLLUpGs2sYoWy55JFq2MM+zbfu0pyxtf+sqnHFgeIjCFFp/JLGYV9ZAPVZpv+XJbK6+2bbkkUWoTpaG9TyMs23DxK5H7DLPMlF9WuwueVqKp3Sprvv0ytH6xnK+FCYXfLuY3rPpZrr5dfu0/vzbYuwxvbDdqpvnMN3IJ/bk7Yq90iDPNsuYl91YI/ZxO08Ef1iFUXl0W4x6YZuLRVq07OIjvC15p888F3zXMMnbvOHZgot8X5yijvpSMjlnXCXh9jACrjTNG+IH0hbKMZ/VPR9kKT5IZd6ikgdUcsmpxFxslXygEiOnkuNjqzQGKjnkVLIDbJUCoJJNTyULWSXFRVJzqZZAqWRIb7c3lWygEhCJL+NpGS0UrSgN1+skauvSFpHvEvEoj5Sff5b2D55sXe0ap13tVWNZPMtjs9G4qmweLvvXUte9OiLrbJNH3MCHRJjPuDCYRjxuxUJwhBsj6L0wgsqW8zQUyXPbb18aVvkN91lSPFs9gTxHe7F52syonlxe1Yx49I7GWkeW1lGlDOjo3yyrH/sdE885PvEG986AmndSjECZTnp0lWDUgP8+1EnvGL4P+1MJRg3nQfqxKenHpEhfT5i9NqHeTXq9o75JP6FPenTvZDBa/fr97g5dKNciBntmEDe8EWODI0nd8nEkubSQZGuToWvwWd/Qax31jCTGwCSiF1fhMwlGn6cQMRz1OjU7iHgd01K+umj+Vq/zJ7iBAIOVYnSn099v+E5HsVDskguXYMp3HmjySaHJ1ZPcrmgKbGQ0GSTHQzudXurDdzqYyOGv9PnUAK46Pjs0TUihydOj6a5omjBcNLlwhYZEZcCnVuB0YWUAH+KgDGy4eNyfSjD1PQs8qdlBBE96dRcsv3Wt7ro65/rGk0GRAL26i+50FPdIgXoTukow9T0PNHmk0KTXmzqjSa83DY4mWCQgETmBmhO648HslwDEtciJGW5O7E8lg3XMk8RTQApPIHLSdxB2jZy8gXdAKT0oR07oTufB7JfeSh2+SjD1PQs0qdlBBE0gcuqKJj1yGhxNBkUC7KgJ3+lg5ktvpQ5fJYNF35NEE62tO/pKXWc06St1g6MJFglIJHVgYz6648HsF7/mpCd19bREU+k0d0UfxxPtzc6u3xFPIKnTOdc3nv6Dzc7oTqcGlxSa9KQOX6XT/Ne8o2hS40AETXpS1xlNIKkbGE2+QZEAO6nDdzqY+RJQiRzAz3RnuE9rZ7ie1HVGE0jqhkYTLBKQTOp6dLyiefi5m0rXw48Gseu/&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}">
</div>

### Implementation

## Directed Graph

### Adjacency Matrix Representation

$$
\begin{bmatrix}
    0 & 1 & 0 & 1 & 0 & 0 \\
    0 & 0 & 0 & 0 & 1 & 0 \\
    0 & 0 & 0 & 0 & 1 & 1 \\
    0 & 1 & 0 & 0 & 0 & 0 \\
    0 & 0 & 0 & 1 & 0 & 0 \\
    0 & 0 & 0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

### Adjacency List Representation

### Implementation


## Comparison Between both Representation

### Matrix Representation
- It is a static representation.
- Matrix representation always takes $O(V^2)$ Space.
- So if the graph is a Sparse Graph, then most of the values in the matrix will be $0$.
- So it is a better implementation if the graph is a dense or complete graph.

### List Representation
- It is a dynamic representation.
- List representation always takes $O(E + V)$ Space.
    - If it is a null graph, $O(E + V)$ becomes $O(V)$ as $E=0$
    - If it is a complete graph, $O(E + V)$ becomes $O(V^2)$ as $E = V^2$
- So it is a better representation for Sparse Graph.


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