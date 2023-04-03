## Substitution Method
Substituting the given function repeatedly until the given function is removed.

### Example 1

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        1 & \text{if n $\leq$ 1} \\
        T(n-1) + n & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

![](./images/Example%201.jpg)

### Example 2

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        1 & \text{if n = 1} \\
        T(n-1) * n & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

![](./images/Example%202.jpg)

### Example 3

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        2 & \text{if n = 0} \\
        T(n-2) + log(n) & \text{if n $\gt$ 0} \\
    \end{cases}
\end{equation}
$$

![](./images/Example%203.jpg)

### Example 4

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        2 & \text{if n = 0} \\
        T(n-2) + n^2 & \text{if n $\gt$ 0} \\
    \end{cases}
\end{equation}
$$

![](./images/Example%204.jpg)

### Example 5

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        1 & \text{if n = 1} \\
        T(\dfrac{n}{2}) + c & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

![](./images/Example%205.jpg)

### Example 6

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        1 & \text{if n = 1} \\
        T(\dfrac{n}{2}) + n & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

![](./images/Example%206.jpg)

### Example 7

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        1 & \text{if n = 1} \\
        7T(\dfrac{n}{2}) + n^2 & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

![](./images/Example%207.jpg)

### Example 8

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        2 & \text{if n = 2} \\
        2T(\dfrac{n}{2}) + nlog(n) & \text{if n $\gt$ 2} \\
    \end{cases}
\end{equation}
$$

![](./images/Example%208a.jpg)
![](./images/Example%208b.jpg)

### Example 9

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        2 & \text{if n = 2} \\
        \sqrt{n}\ T(\sqrt{n}) + n & \text{if n $\gt$ 2} \\
    \end{cases}
\end{equation}
$$

![](./images/Example%209.jpg)

### Example 10

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        1 & \text{if n = 1} \\
        2\ T(n-1) + n & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

![](./images/Example%2010a.jpg)
![](./images/Example%2010b.jpg)