## Factorial of a number

### Implementation

```python
def factorial(n):
    if(n<=1>):
        return(1)
    else:
        return(n * factorial(n))
```

### Recurrence Relation for time

$$
\begin{equation}
\ T(n)=
    \begin{cases}
        1 & \text{if n $\leq$ 1} \\
        T(n-1) + c & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

#### Solution

$$
\begin{align*}
T(n) & = T(n-1) + c \\
T(n) & = T(n-2) + 2c \\
T(n) & = T(n-3) + 3c \\
....... \\
T(n) & = T(n-k) * kn \\
\\
Say, \ & n-k = 1  \implies k = n-1 \\
\\
T(n) & = T(1)+ (n-1)c \\
T(n) & = 1 + (n-1)c \\
T(n) &= \Theta(n)
\end{align*}
$$


### Recurrence Relation for value

$$
\begin{equation}
\ V(n)=
    \begin{cases}
        1 & \text{if n $\leq$ 1} \\
        n*V(n-1) & \text{if n $\gt$ 1} \\
    \end{cases}
\end{equation}
$$

#### Solution

$$
\begin{align*}
V(n) & = V(n-1) * n \\
V(n) & = V(n-2) * (n -1) * n \\
V(n) & = V(n-3) * (n-2) * (n -1) * n \\
....... \\
V(n) & = V(n-k) * (n-(k-1)) * (n-(k-2)) * ... \ *  (n-1) * n \\
\\
Say, \ & n-k = 1  \implies k = n-1 \\
\\
V(n) & = V(1) * 2 * 3 * ... \ *  (n-1) * n \\
V(n) & = 1 * 2 * 3 * 4 * ... \ * (n-1) * n \\
V(n) &= n! \\ 
V(n) &= O(n^n) \\
\end{align*}
$$