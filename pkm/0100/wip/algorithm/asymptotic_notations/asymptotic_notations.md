## Asymptotic Notations

### From Definition Point of View

#### Big Oh Notation Definition

$$
f(n)\  = \  O (g(n)) \\
iff \\
f(n)\  \leq \ c.g(n) \ \forall n\ ,\ n\  \geq \ n_{0}\\
such\ that\\
\exists\ 2\  + ve\ constants\ c > 0\ \&\ n_{0}\  \geq \ 1 \\
$$


##### Example 1
![Big Oh Example 1](./images/Big%20Oh%20Example%201.jpg)

##### Example 2
![Big Oh Example 2](./images/Big%20Oh%20Example%202.jpg)

##### Example 3
![Big Oh Example 3](./images/Big%20Oh%20Example%203.jpg)

#### Big Omega Notation Definition

$$
f(n)\  = \ \Omega(g(n)) \\
iff \\
f(n)\  \geq c.\ g(n) \ \forall n\ ,\ n\  \geq \ n_{0} \\
such\ that \\
\exists\ 2\  + ve\ constants\ c > 0\ \&\ n_{0}\  \geq \ 1 \\
$$

##### Example 1
![Big Omega Example 1](./images/Omega%20Example%201.jpg)

##### Example 2
![Big Omega Example 1](./images/Omega%20Example%202.jpg)

##### Example 3
![Big Omega Example 1](./images/Omega%20Example%203.jpg)

#### Theta Notation Definition 

$$
f(n) = \ \Theta(g(n)) \\
iff \\
f(n) \leq c_{1}.\ g(n) \ \ \&\& \ \ f(n) \geq c_{2}.\ g(n) \\
\forall n,\ n \geq n_{0} \\
$$

In Other Words

$$
if\ f(n) = O (g(n)) \ \&\& \ if\ f(n) = \Omega(g(n)) \\
then \\
f(n) = \Theta(g(n))
$$

### From Graphical Point of View

#### Big Oh Notation Graph
![Big Oh Graphically](./images/Big%20Oh%20Graphical%20Representation.jpg)

#### Big Omega Notation Graph
![Big Oh Graphically](./images/Omega%20Graphical%20Representation.jpg)

#### Theta Notation Graph
![Big Oh Graphically](./images/Theta%20Graphical%20Representation.jpg)

### From Upper and Lower Bound Point of View

#### Big Oh Notation
![Big Oh Notation](./images/Big%20Oh%20Notation.jpg)

#### Big Omega Notation
![Big Omega Notation](./images/Omega%20Notation.jpg)

#### Theta Notation
![Theta Notation](./images/Theta%20Notation.jpg)

#### Little Oh Notation
![Little Oh Notation](./images/Little%20Oh%20Notation.jpg)

#### Little Omega Notation
![Big Omega Notation](./images/Little%20Omega%20Notation.jpg)

### Notes on Notation

- $\Theta$ is possible $iff$ $O$ is possible $\&\&$  $\Omega$ is possible.
- $O$ means Right side is bigger by Taking constant help.
- $\Omega$ means Left side is bigger by Leaving constant help.
- If you know $O$, then you already know $\Omega$ and $\Theta$.
- Why are we taking constant help ? Because System to System, only Constant difference is there. For example, i5 or i7.
- If 2 functions are Mathematically Equal, then they are asymptotically also equal. But the reverse is not true.
- If $o \ (little\ Oh)$ or $\omega\ (little\ omega)$ is possible then, $\Theta$ is not possible.

### Little Here and There
- I think a great way to remember the below 2 points are as follows
    - Points to remember
        - $O$ means Right side is bigger by Taking constant help.
        - $\Omega$ means Left side is bigger by Leaving constant help.
    - Trick
        - Don't read $O$ as Big Oh, read it as **Order of** and read $\Omega$ as Omega(as it is, no change)
        - So $f(n) = O (g(n))$ will be read as $f(n)$ is **Order of** $g(n)$, *which is like, $f(n)$ has to listen to $g(n)$*, so $g(n)$ is bigger.
        - Similarly $f(n) = \Omega (g(n))$ will be read as $f(n)$ is **Omega of** $g(n)$, *which is like, $f(n)$ is the leader of $g(n)$*, so $f(n)$ is bigger.
        - If you know  $O$ and $\Omega$, then you also know $o$ and $\omega$ and as well as $\Theta$ 
