# Type Casting

## Basics
- We can convert one type value to another type. This conversion is called Typecasting or Type conversion.
- The following are 5 inbuilt functions for type casting.
    1. `int()`
    2. `float()`
    3. `complex()`
    4. `bool()`
    5. `str()`


## `int()`
- We can use this function to convert values from other types to `int`.

### `float` to `int` conversion
- The digits after decimal symbol will be removed.
    ```python
    print(int(123.987))
    # Output 123
    ```

### `complex` to `int` conversion
- We cannot convert from complex type to int
    ```python
    print(int(10+5j))
    # Output TypeError: can't convert complex to int
    ```

### `boolean` to `int` conversion
- `True` is internally treated as 1. 
    ```python
    print(int(True))
    # Output 1
    ```
- `False` is internally treated as 0.
    ```python
    print(int(False))
    # Output 0
    ```

### `str` to `int` conversion
- String must contain only integral value in base-10.
- Example 1
    ```python
    print(int("10"))
    # Output 10
    ```
- Example 2
    ```python
    print(int("10.5"))
    # Output ValueError: invalid literal for int() with base 10: '10.5'
    ```
- Example 3
    ```python
    print(int("ten"))
    # Output ValueError: invalid literal for int() with base 10: 'ten'
    ```
- Example 4
    ```python
    print(int("0B1111"))
    # Output ValueError: invalid literal for int() with base 10: '0B1111'
    ```

### Note:
- We can convert from any type to int except complex type.
- If we want to convert `str` type to int type, compulsory `str` should contain only integral value and should be specified in base-10.

## `float()`
- We can use this function to convert values from other types to `float`.

### `int` to `float` conversion
- Any `int` value can be converted to `float`.
    ```python
    print(float(10))
    # Output 10.0
    ```
- Base does not matter here.    
    ```python
    print(float(0B1111))
    # Output 15.0
    ```

### `complex` to `float` conversion
- Can't convert `complex` to `float`
    ```python
    print(float(10+5j))
    # Output TypeError: can't convert complex to float
    ```

### `bool` to `float` conversion
- This is possible, because internally `bool` is stored as `int`. And we can convert any `int` to `float`.
    ```python
    print(float(True))
    # Output 1.0
    ```   
    ```python
    print(float(False))
    # Output 0.0
    ```

### `str` to `float` conversion
- The `str` should contain either `int` value or `float` value, but must be in base 10.
- Example 1
    ```python
    print(float("10"))
    # Output 10.0
    ```
- Example 2
    ```python
    print(float("10.5"))
    # Output 10.5
    ```
- Example 3
    ```python
    print(float("ten"))
    # Output ValueError: could not convert string to float: 'ten'
    ```
- Example 4
    ```python
    print(float("0B1111"))
    # Output ValueError: could not convert string to float: '0B1111'
    ```

### Note:
- We can convert any type value to float type except complex type.
- Whenever we are trying to convert str type to float type compulsory str should be either integral or floating point literal and should be specified only in base-10. 


## `complex()`
- We can use both verity of this function to convert values from other types to `complex`.
### Form 1 `complex(x)`
- We can use this function to convert `x` into complex number with real part `x` and imaginary part `0`.
- In case of strings, the `str` should contain either `int` value or `float` value, but must be in base 10.
- Examples
    ```python
    print(complex(10))          # Output (10+0j)
    print(complex(0B1010))      # Output (10+0j)
    print(complex(10.5))        # Output (10.5+0j)
    print(complex(True))        # Output (1+0j)
    print(complex(False))       # Output (0j)
    print(complex("10"))        # Output (10+0j)
    print(complex("10.5"))      # Output (10.5+0j)
    print(complex("ten"))       # Output ValueError: complex() arg is a malformed string
    print(complex("0B1111"))    # Output ValueError: complex() arg is a malformed string
    ```

### Form 1 `complex(x,y)`
- We can use this method to convert `x` and `y` into complex number such that `x` will be real part and `y` will be imaginary part.
- In this form, if the first argument is string, then can't take second argument.
- A loophole in the above rule would be, if we pass the second argument as string and first as integer. But in that case, there will be error saying complex() second argument can't be a string.
- Examples
    ```python
    print(complex(10, -2))      # Output (10-2j)
    print(complex(10.4, -2.6))  # Output (10.4-2.6j)
    print(complex(True, False)) # Output (1+0j)
    print(complex("10", "20"))  # Output complex() can't take second argument if the first is a string.
    print(complex(10, "20"))    # Output complex() second argument can't be a string.
    ```

## `bool`
- We can use this function to convert values from other types to `bool`.

### `int` to `bool` conversion
- If the `int` value is 0, it will return `False`, in all other case, it will return `True`.
    ```python
    print(bool(0))         # Output False
    print(bool(1))         # Output True
    print(bool(10))        # Output True
    ```

### `float` to `bool` conversion
- If the `float` value is 0.0, it will return `False`, in all other case, it will return `True`.
    ```python
    print(bool(0.0))       # Output False
    print(bool(10.5))      # Output True
    print(bool(0.00001))   # Output True
    print(bool(-0.00001))  # Output True
    ```

### `complex` to `bool` conversion
- If the `complex` value is 0+0j *(i.e both real and imaginary part are 0)*, it will return `False`, in all other case, it will return `True`.
    ```python
    print(bool(0+0j))      # Output False
    print(bool(0-0j))      # Output 
    print(bool(10-2j))     # Output True
    print(bool(0+1.5j))    # Output True
    ```

### `str` to `bool` conversion
- If the `str` value is '' *(empty string)*, it will return `False`, in all other case, it will return `True`.
    ```python
    print(bool(""))        # Output False 
    print(bool("True"))    # Output True
    print(bool("False"))   # Output True
    ``` 





    


## `str`
- We can use this function to convert values from other types to `str`.
- There are not any specific rule here except the case that, if `int` type is given in argument, does not matter which base, then it always returns in decimal form.
    ```python
    print(str(10))      # Output '10'
    print(str(0B1111))  # Output '15'
    print(str(10.5))    # Output '10.5'
    print(str(10+5j))   # Output '(10+5j)'
    print(str(True))    # Output 'True'
    ```