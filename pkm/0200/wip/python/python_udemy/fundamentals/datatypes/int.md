## `int` Datatype in Python
- We can use int data type to represent whole numbers (integral values)
- In Python2 we have long data type to represent very large integral values.
- But in Python3 there is no long type explicitly and we can represent long values also by using int type only.

### Integral Value Representation
- We can represent int values in the following 4 ways
    1. Decimal form
    2. Binary form
    3. Octal form
    4. Hexadecimal form

#### Decimal Form (Base-10):
- It is the default number system in Python
- The allowed digits are: 0 to 9
- Example `a = 10`

#### Binary Form (Base-2):
- The allowed digits are : 0 & 1
- Literal value should be prefixed with 0b or 0B
- Example
    ```python
    a = 0B1111 
    b = 0B123 
    c = b111
    ```

#### Octal Form (Base-8):
- The allowed digits are : 0 to 7
- Literal value should be prefixed with 0o or 0O.
- Example
    ```python
    a = 0o123
    b = 0o786
    ```

#### Hexadecimal Form (Base-16):
- The allowed digits are: 0 to 9, a-f (both lower and upper cases are allowed)
- Literal value should be prefixed with 0x or 0X
- Example
    ```python
    a = 0XFACE
    a = 0XBeef
    a = 0XBeer
    ```

### Base Conversions
Python provide the following in-built functions for base conversions

#### `bin()`
 We can use bin() to convert from any base to binary
```python
bin(15) # Output '0b1111'
bin(0o11) # Output '0b1001'
bin(0X10) # Output 0b10000
```

#### `oct()`
We can use oct() to convert from any base to octal
```python
oct(10) # Output '0o12'
oct(0B1111) # Output '0o17'
oct(0X123) # Output '0o443'
```

#### `hex()`
We can use hex() to convert from any base to hexadecimal
```python
hex(100) # Output '0x64'
hex(0B111111) # Output '0x3f'
hex(0o12345) # Output '0x14e5'
```

### Note 
Being a programmer we can specify literal values in decimal, binary, octal and hexadecimal forms. But PVM will always provide values only in decimal form. *Hence, we do not need a base conversion function to convert into decimal*
