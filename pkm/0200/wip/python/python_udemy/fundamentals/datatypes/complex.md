## `complex` Datatype
- A complex number is of the form $a+bj$
- 'a' and 'b' contain Integers OR Floating Point Values.
- In mathematics, the general expression is $a+bi$, but in python the $iota$ symbol must be `j`
- Examples

$$
3 + 5j \\
10 + 5.5j \\
0.5 + 0.1j \\
$$

- In the real part if we use int value then we can specify that either by decimal, octal, binary or hexadecimal form.
- But imaginary part must be specified only by using decimal form.
- Example
    ```python
    a=0B11 + 5j
    print(a) # Output (3+5j)
    ```
    ```python
    a=3 + 0B11j
    print(a) 
    # Output SyntaxError: invalid syntax
    ```

- Even we can perform operations on complex type values.
- Example
    ```python
    a = 10 + 1.5j
    b = 20 + 2.5j
    c = a + b
    print(c)
    type(c)
    # Output
    # (30+4j)
    # <class 'complex'>
    ```

- Complex data type has some inbuilt attributes to retrieve the real part and imaginary part
- Example
    ```python
    c = 10.5 + 3.6j
    c.real # Output 10.5
    c.imag # Output 3.6
    ```
- We can use complex type generally in Scientific Applications and Engineering Applications