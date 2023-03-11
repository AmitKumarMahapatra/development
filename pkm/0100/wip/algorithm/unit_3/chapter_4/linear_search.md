## Linear Search

### Input and Output
- Input : An array of $n-elements$, and an element $x$.
- Output : return the position of $x$ in the array if present, else return $-1$

### Example

| Array elements | 50 | 70 | 60 | 45 | 35 | 25 | 75 | 12 |
| -------------- | -- | -- | -- | -- | -- | -- | -- | -- |
| Indices        | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  |

$$
if \ x = 12, \ return \ 8 \\ 
if \ x = 10, \ return \ -1 \\
$$

### Implementation

```python
def linear_search(array,x):
    for i in range(0,len(array)):
        if(array[i] == x):
            return(i)
    return(-1)
```

### Analysis

#### Time Complexity

- Best Case
    - This case occurs if the element x found at the starting index
    - $T(n) = \Theta(1)$
- Worst Case
    - This case occurs if the element x is not found or found at the last index
    - $T(n) = \Theta(n)$
- Average Case
    - This case can be calculated by taking average of $n$ different scenario

$$
\begin{align*}
T(n) & = \frac{1+2+3+...+n}{n} \\
T(n) & = \frac{\frac{n*(n+1)}{2}}{n} \\
T(n) & = \frac{n+1}{2} \\
T(n) & = \Theta(n) \\
\end{align*}
$$

So we can write the below

$$
T(n) = O(n) \\
Or \\
T(n) = \Omega(1)
$$

#### Space Complexity
- In every case, this is $\Theta(1)$ because, we are not using any extra space.