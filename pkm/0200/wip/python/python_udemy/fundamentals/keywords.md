## Keywords in Python

- In Python some words are reserved to represent some meaning or functionality. Such types of words are called reserved words.

- There are 33 reserved words available in Python.
    - `True`, `False`, `None`
    - `and`, `or`,`not`,`is`
    - `if`, `elif`, `else`
    - `while`, `for`, `break`, `continue`, `return`, `in`, `yield`
    - `try`, `except`, `finally`, `raise`, `assert`
    - `import`, `from`, `as`, `class`,`def`, `pass`, `global`, `nonlocal` `lambda`, `del`, `with`

### Note:
1. All Reserved words in Python contain only alphabet symbols.
2. Except the following 3 reserved words, all contain only lower case alphabet symbols.
    - `True`
    - `False`
    - `None`
- You can fnd all reserved words from keyword module in python.
    ```python
    import keyword
    print(keyword.kwlist)

    # Output
    # ['False', 'None', 'True', 'and', 'as', 'assert', 'break' 'class', 'continue', 'def', 'del', 'elif', 'else' 'except', 'finally', 'for', 'from', 'global', 'if' 'import', 'in', 'is', 'lambda', 'nonlocal', 'not', 'or' 'pass', 'raise', 'return', 'try', 'while', 'with', 'yield']
    ```
