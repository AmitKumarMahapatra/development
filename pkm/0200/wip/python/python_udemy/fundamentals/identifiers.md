## Identifiers
- A Name in Python Program is called Identifier.
- It can be Class Name OR Function Name OR Module Name OR Variable Name.
- Example `a = 10`

## Rules to define Identifiers in Python
1. The only allowed characters in Python are
	- alphabet symbols(either lower case or upper case)
	- digits(0 to 9)
	- underscore symbol(_)
	- By mistake if we are using any other symbol like $ then we will get syntax error.
        ```python
        cash = 10 # correct
        ca$h =20 # incorrect
        ```
2. Identifier should not starts with digit
    ```python
    123total = 10 # correct
    total123 = 20 # incorrect
    ```
3. Identifiers are case sensitive.  Of course Python language is case sensitive language.
    ```python
    total=10
    TOTAL=999
    print(total) #10
    print(TOTAL) #999
    ```
4. There is no length limit for Python identifiers. But not recommended to use too lengthy identifiers.
5. We cannot use reserved words as identifiers
    ```python
    def = 10
    ```
6. Dollar ($) Symbol is not allowed in Python

### Note
1. If identifier starts with _ symbol then it indicates that it is private
2. If identifier starts with __(Two Under Score Symbols) indicating that strongly private identifier.
3. If the identifier starts and ends with two underscore symbols then the identifier is language defined special name, which is also known as magic methods.
4. Example
    ```python
    x = 10 # Normal Variable
    _x = 10 # Protected Variable
    __x = 10 # Private Variable
    __x__ = 10 # Magic Variable
    ```
    - `__add__()` has a meaning at Python Language Level.
    - This will be covered in OOPs Chapter