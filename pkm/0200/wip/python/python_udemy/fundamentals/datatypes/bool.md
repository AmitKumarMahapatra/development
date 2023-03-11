## `bool` Datatype
- We can use this data type to represent boolean values.
- The only allowed values for this data type are `True` and `False`
- Example
    ```python
    b = True
    type(b) # Output < class bool>
    ```
    ```python
    a = 10
    b = 20
    c = a<b
    print(c) # Output True
    ```
- Internally Python represents `True` as **1** and `False` as **0**
- Example
    ```python
    True+True # Output 2
    True-False # Output 1
    ```