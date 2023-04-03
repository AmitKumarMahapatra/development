## Tricky Examples

### Example 1

Check which are same and which are different among **Time Complexity**, **Space Complexity** and **Final Value** for the below two programs `fun_1` and `fun_2`.

```python
def fun_1(n):
    if(n <= 1):
        return(1)
    else:
        a = fun_1(n/2)
        b = fun_1(n/2)
        c = a + b
        return c
```

```python
def fun_2(n):
    if(n <= 1):
        return(1)
    else:
        c = 2 * fun_2(n/2)
        return c
```

#### Solution
- Value and Space Complexity for both programs are exactly same.
- Time complexity of `fun_1`

$$
T(n) = 2 * T(\frac{n}{2}) + c \\
Using \ Master \ Theorm \\
T(n) = \Theta(n)
$$

- Time complexity of `fun_2`

$$
T(n) =  T(\frac{n}{2}) + c \\
Using \ Master \ Theorm \\
T(n) = \Theta(log_{2}n)
$$


### Example 2

Find the time complexity of below program

```python
def A(n):
    if(n <= 1):
        return(n^10)
    else:
        for i in range(1,5):
            A(n/2)
        for j in range(1,n^2):
            x = y + z
        return(5*A(n/2) + 3*A(n/2) + LS(n))

def LS(n):
    for i in range(1,n+1):
        x = y + z

```

#### Solution

We can rewrite the above `function A` as below

```python
def A(n):
    if(n <= 1):
        return(n^10)
    else:
        A(n/2)
        A(n/2)
        A(n/2)
        A(n/2)
        for j in range(1,n^2):
            x = y + z
        result_1 = A(n/2)
        result_2 = A(n/2)
        result_3 = LS(n)
        result = (5 * result_3) + (3 * result_2) + result_3
        return(result)
```

Now we can write the time complexity recursive relation easily

$$
T(n) = 6 * T(\frac{n}{2}) + n^{2} \\
Using \ Master \ Theorm \\
T(n) = \Theta(n^{log_{2}6})
$$


