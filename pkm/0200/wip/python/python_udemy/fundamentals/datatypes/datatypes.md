## Datatype in Python
- Data Type represents the type of data present inside a variable.
- In Python we are not required to specify the type explicitly. Based on value provided, the type will be assigned automatically.Hence Python is dynamically Typed Language.

### A Tricky way to state the above statements
- In Python, type concept is not applicable
- In Python, the concept is available, but we are not required to declare explicitly.

### Inbuilt Datatype in Python
1. Int
2. Float
3. Complex
4. Bool
5. Str

6. List
7. Tuple
8. Set
9. Frozenset
10. Dict

11. Bytes
12. Bytearray
13. Range
14. None

#### Note
- **Python contains several inbuilt functions**
- to check the type of object
    ```python
    nNumber = 10
    type(nNumber)
    # Output
    # <class 'int'>
    ```
- to get address of object
    ```python
    nNumber = 10
    id(nNumber)
    # Output
    # 1234567
    ```
- to print the value
    ```python
    nNumber = 10
    print(nNumber)
    # Output
    # 10
    ```
- In Python the following data types are considered as Fundamental Data types
    - `int`
    - `float`
    - `complex`
    - `bool`
    - `str`
- In Python, we can represent char values also by using str type and explicitly char type is not available.
    ```python
    c='a'
    type(c)
    <class 'str'>
    ```
- long Data Type is available in Python2 but not in Python3. In Python3 long values also
we can represent by using int type only.