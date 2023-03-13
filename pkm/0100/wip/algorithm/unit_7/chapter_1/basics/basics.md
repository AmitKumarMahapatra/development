# Basics of Graph for Algorithm Subject

## Theory
- A Graph $G(V,E)$ is a collection of set of Vertices $V$ and set of Edges $E$.

<div class="mxgraph" style="max-width:100%;border:1px solid transparent;"
    data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2023-03-13T20:16:49.239Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/110.0.0.0 Safari/537.36\&quot; etag=\&quot;X_Lf7s3Y5g0kmT-ZTwKL\&quot; version=\&quot;21.0.6\&quot; type=\&quot;google\&quot;&gt;&lt;diagram name=\&quot;Page-1\&quot; id=\&quot;Z5KtR-CiJ4TdcR5uFcHt\&quot;&gt;5Zhdb5swFIZ/DZebAoaGXK5Js0nVpkq5WNObyYLT4Apw5DiB7NfP1DYfdtImER2ZdhWfFx+D3/PomOCgaVZ+ZXidfKcxpI43iksHzRzPc0fBSPxUyl4qQTiWwoqRWE1qhAX5DTpTqVsSw6YzkVOacrLuihHNc4h4R8OM0aI77Zmm3buu8QosYRHh1FZ/kpgnUg31tir9G5BVou/sjtSVDOvJStgkOKZFS0J3DpoySrkcZeUU0so87YvMmx+5Wj8Yg5yfknCfP9w/Pb38Kuc3P/Acdi/BJvukVtnhdNvd8IbvtQViGeG2CG6LhHBYrHFUXSlEwYWW8CwVkSuGeLOWJXgmJYi73qrFgXEojz61W3shIAKaAWd7MUUlID+QKYofd6LsLJpq+EpKWoXQGlb1X9UrNxaJgXLpDMc8yzHvuhzzb67MMWQ5hq7LMZMx5A7smG855l+XYyZjgzsWWI7ZhuXxl+pAEFFOc+iaxOg2jyt3ZiMRQUn4o7pSjZeV/jlQ0axsTZvtdZCLfTy2g1ZWFTZpr5HOk88JsXUMGbUQe6FbFsH7zZxjtgL+Xguza9uqXXCgdlpjkGJOdt3HPVRQdYcHSsRGGnQ8Ax3PYEJuU2W1zzNzoXF3IW9sLCR9sBZ65ave9uXIjftFrsanIWapEXwDH41qg+eyTedBVHtEzv+/kAsN5Mx+9sHIhR/S5c5B51JMe0QOnYjckRPsX0Nu4C7n2m9v/bS5807JS07kAZjzB2UOGcyhvtpc+JeZs99/++hzbXbcE7tch9Lre5Mbljfzb5N5Gp7M28TgbdIXbyJsPrDI6c1nKnT3Bw==&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}">
</div>

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

<div class="mxgraph" style="max-width:100%;border:1px solid transparent;"
    data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2023-03-13T20:16:49.239Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/110.0.0.0 Safari/537.36\&quot; etag=\&quot;X_Lf7s3Y5g0kmT-ZTwKL\&quot; version=\&quot;21.0.6\&quot; type=\&quot;google\&quot;&gt;&lt;diagram name=\&quot;Page-1\&quot; id=\&quot;Z5KtR-CiJ4TdcR5uFcHt\&quot;&gt;5Zhdb5swFIZ/DZebAoaGXK5Js0nVpkq5WNObyYLT4Apw5DiB7NfP1DYfdtImER2ZdhWfFx+D3/PomOCgaVZ+ZXidfKcxpI43iksHzRzPc0fBSPxUyl4qQTiWwoqRWE1qhAX5DTpTqVsSw6YzkVOacrLuihHNc4h4R8OM0aI77Zmm3buu8QosYRHh1FZ/kpgnUg31tir9G5BVou/sjtSVDOvJStgkOKZFS0J3DpoySrkcZeUU0so87YvMmx+5Wj8Yg5yfknCfP9w/Pb38Kuc3P/Acdi/BJvukVtnhdNvd8IbvtQViGeG2CG6LhHBYrHFUXSlEwYWW8CwVkSuGeLOWJXgmJYi73qrFgXEojz61W3shIAKaAWd7MUUlID+QKYofd6LsLJpq+EpKWoXQGlb1X9UrNxaJgXLpDMc8yzHvuhzzb67MMWQ5hq7LMZMx5A7smG855l+XYyZjgzsWWI7ZhuXxl+pAEFFOc+iaxOg2jyt3ZiMRQUn4o7pSjZeV/jlQ0axsTZvtdZCLfTy2g1ZWFTZpr5HOk88JsXUMGbUQe6FbFsH7zZxjtgL+Xguza9uqXXCgdlpjkGJOdt3HPVRQdYcHSsRGGnQ8Ax3PYEJuU2W1zzNzoXF3IW9sLCR9sBZ65ave9uXIjftFrsanIWapEXwDH41qg+eyTedBVHtEzv+/kAsN5Mx+9sHIhR/S5c5B51JMe0QOnYjckRPsX0Nu4C7n2m9v/bS5807JS07kAZjzB2UOGcyhvtpc+JeZs99/++hzbXbcE7tch9Lre5Mbljfzb5N5Gp7M28TgbdIXbyJsPrDI6c1nKnT3Bw==&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}">
</div>


#### Multi Graphs

##### Theory
- Multi Graph contains multiple edges between 2 vertices.
- Multi Graph contains self loop.
- Minimum Degree of any vertex in simple graph is $0$
- Maximum Degree of any vertex in simple graph is $\infty$


##### Diagrammatically

<div class="mxgraph" style="max-width:100%;border:1px solid transparent;"
    data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2023-03-13T20:26:17.564Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/110.0.0.0 Safari/537.36\&quot; etag=\&quot;pea5yiyNHFPALV4lqw1w\&quot; version=\&quot;21.0.6\&quot; type=\&quot;google\&quot;&gt;&lt;diagram name=\&quot;Page-1\&quot; id=\&quot;DD1x37b1eiySGMqjUHUF\&quot;&gt;7Zldk5owFIZ/jZftAAE/Lru6a2/c7YwX3b3qZCArmUHChKDQX99QEoEgFRBBZ3plcvL9nseTHJ2A5T5eUxi4G+Igb2JoTjwBq4lh6Jql8Y/UkmQWaz7LDDuKHdEpN2zxbyRHCmuEHRSWOjJCPIaDstEmvo9sVrJBSsmx3O2TeOVVA7hDFcPWhl7V+hM7zM2sc3ms1P4d4Z0rV9Y10bKHsrMwhC50yLFgAs8TsKSEsKy0j5fIS8WTumTjXmpaTxujyGdNBiz0d7zeRGSzCtBr+Pa2fl39+iJmOUAvKh84ZImUgE/D1eaVp6OLGdoG0E5bjtzh3OayvcdrOi/CMMhc8IljxFd9EpMjylBcu2v9pAWHCJE9YjThXcQAIJUW/BhS32PuDVOY3IIjpA0K/+9OM+cS8YJQqYViRkUx474Us/Q7UwxUFAP3pZjKGJiOrJhZUcy8L8VUxkZXzKooVhXMd76lFwKv+cRHZZH4uWnyziuarHwUW1ZxsWmViJod0UMqadYxxuy9UP4olPPxaUUOz7aInMoNpLiBH4NE1EaX4ziDdIfYpehVdWvBbdYZt0kbRR5k+FDe7jlfihV+EMwPkn/PFkpkUnHIjilGFa8yZSJTnWihTJTpUJmI+x8mhW5B2iGs37A5VdaZlq5YXshmzLk9adod5emVKFMS+c5fKrUS2F+tNmhLmsUwwbM2FM/mI/BsmkoU7MqzpZ3n7BLPfSE36xe5Duh0xbRH5EBD5GpuxgdDrmsI7Qu5+Y2iXBGeAksXolzxzs6xvXmUa4qcOSpy6uvY6inKAW1Y5BY3iXLNn3s1kA4X4Zo+EsfFbVqTWrTGTc1R9GFxk8t1z0nOBacbEFbKYkbAbdw3HFAomXW9UOfKREYz3FrnJEo41ucD5CR69XfCf7FsezAMsX0eZ+1KnNsl5b7zgj2vf7ibXt3gP9wt4AbqE2GIhFs3bgN309dAOeO592g9bvrzcEAbSrReXAU0r+Z/GGXd87/dwPMf&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}">
</div>

### Range of Simple Graph
- The simplest simple graph is Null Graph with $0$ edges
- The most complex simple graph is Complete Graph with $V*(V-1)$ edges.

<div class="mxgraph" style="max-width:100%;border:1px solid transparent;"
    data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2023-03-13T20:10:01.954Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/110.0.0.0 Safari/537.36\&quot; etag=\&quot;SsMOlCJlJtDx4K4IEtak\&quot; version=\&quot;21.0.6\&quot; type=\&quot;google\&quot;&gt;&lt;diagram name=\&quot;Page-1\&quot; id=\&quot;nA0l95bFJxJQVNfmfM_K\&quot;&gt;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&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}">
</div>

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