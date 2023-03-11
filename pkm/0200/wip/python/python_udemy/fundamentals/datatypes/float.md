## `float` Datatype
- We can use float data type to represent floating point values (decimal values)
- Example
    ```python
    f = 1.234
    type(f) # Output float
    ```
- We can also represent floating point values by using exponential form (Scientific Notation)
- For example, `f = 1.2e3`
- Instead of 'e' we can also use 'E'
- Example
    ```python
    f = 1.2e3
    print(f) # Output 1200.0
    ```
- The main advantage of exponential form is we can represent big values in less memory.
- We can represent int values in decimal, binary, octal and hexadecimal forms. But we can represent float values only by using decimal form.
    ```python
    f = 0B11.01
    # Output
    # File "<stdin>", line 1
    # f=0B11.01
    # SyntaxError: invalid syntax
    ```

    ```python
    f = 0o123.456
    # Output
    # File "<stdin>", line 1
    # f=0o123.456    
    # SyntaxError: invalid syntax
    ```

    ```python
    f = 0X123.456
    # Output
    # File "<stdin>", line 1
    # f=0X123.456    
    # SyntaxError: invalid syntax
    ```