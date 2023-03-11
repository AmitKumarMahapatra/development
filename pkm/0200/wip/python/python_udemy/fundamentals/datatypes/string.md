## `string` Datatype

### Basics
- **str** represents String data type.
- A String is a sequence of characters enclosed within single quotes or double quotes.
    ```python
    strName1 = 'IRONMAN'
    strName2 = "IRONMAN"
    print(strName1) # Output IRONMAN
    print(type(strName1)) # Output <class 'str'>
    print(strName1) # Output IRONMAN
    print(type(strName2)) # Output <class 'str'>
    ```


### Use of '''/""" *(triple quotes)*

#### Requirement 1
##### Issue 1
- By using single quotes or double quotes we cannot represent multi line string literals.

    ```python
    strName = "IRON
    MAN"
    print(strName)
    ```
##### Solution
- For this requirement we should go for triple single quotes(''') or triple double quotes(""")
    ```python
    strName = '''IRON
    MAN'''
    print(strName)
    ```

#### Requirement 2
##### Issue 2
- Quote within Quotes
    - We can use **''** *(single quote)* within **""** *(double quote)*.
    - Example:
        ```python
        strQuote = "IRONMAN is the best 'Avenger'"
        print(strQuote)
        ```
    - We can use **""** *(double quote)* within **''** *(single quote)*.
        ```python
        strQuote = 'IRONMAN is the best "Avenger"'
        print(strQuote)
        ```    
    - We cannot use **''** *(single quote)* within **''** *(single quote)*.
        ```python
        strQuote = 'IRONMAN is the best 'Avenger''
        print(strQuote)
        ```    
    - We cannot use **""** *(double quote)* within **""** *(double quote)*.
        ```python
        strQuote = "IRONMAN is the best "Avenger""
        print(strQuote)
        ```    
##### Solution
- We can also use triple quotes to use single quote or double quote in our String.
    ```python
    strQuote = """'IRONMAN' is the best "Avenger""""
    print(strQuote)
    ```

#### Requirement 3
- """/''' is mostly used in writing the docstring in a program
    ```python
    ```

### Slicing of Strings:
- slice means a piece.
- [ ] operator is called slice operator, which can be used to retrieve parts of String.
- string[begin:end] returns begin to end-1 (including both begin and end-1).
- Both `begin` and `end` index are optional. So `string[:]` is a valid syntax.
- If `begin` index is not specified, then it's default value is 0.
- If `end` index is not specified, it's default value is last index of the string.
- In Python Strings follows zero based index.
- The index can be either +ve or -ve.
- $+ve$ index means forward direction from Left to Right.
- $-ve$ index means backward direction from Right to Left.
- Slice operator never raise index error.
- A string, say, `strName = "IRONMAN"` is represented as below

    | \-7 | \-6 | \-5 | \-4 | \-3 | \-2 | \-1 |
    | --- | --- | --- | --- | --- | --- | --- |
    | I   | R   | O   | N   | M   | A   | N   |
    | 0   | 1   | 2   | 3   | 4   | 5   | 6   |

    ```python
    strName = "IRONMAN"
    print(strName[0])
    # Output 'I'
    print(strName[1])
    # Output 'R'
    print(strName[-1])
    # Output 'N'
    print(strName[-100])
    # Output IndexError: string index out of range
    print(strName[40])
    # Output IndexError: string index out of range
    print(strName[1:40])
    # Output 'RONMAN'
    print(strName[1:])
    # Output 'RONMAN'
    print(strName[:4])
    # Output 'IRON'
    print(strName[:])
    # Output 'IRONMAN'
    print(strName[5:1])
    # Output ""
    len(strName)
    # Output 7
    ```

#### Small Application of Slice Operator
Given a string, change the first character of the string to uppercase and print it.
```python
strName = "ironman"
sentence_case = strName[0].upper() + strName[1:]
print(sentence_case)
```
Given a string, change the last character of the string to uppercase and print it.
```python
strName = "ironman"
sentence_case = strName[0:(len(strName)-1)] + strName[len(strName)-1].upper()
print(sentence_case)
```
An alternative Approach using negative index
```python
strName = "ironman"
sentence_case = strName[0:(len(strName)-1)] + strName[-1].upper()
print(sentence_case)
```

### Operators for string

#### `+` Operator
- Both the arguments for the `+` operator must be  `string`.
- Otherwise we will get Type Error.
    ```python
    strArmor = "ARMOR"
    print(strArmor + "15")
    # Output ARMOR15
    print(strArmor + 15)
    # Output Type Error
    ```

#### `*` Operator
- This is called string repetition operator.
- `*` operator expects 1 string operator and another integer operator. But order is not important.
    ```python
    strQuotes = "Dude"
    print(strQuotes * 5)
    # Output 'DudeDudeDudeDudeDudeDude'
    print(5 * strQuotes)
    # Output 'DudeDudeDudeDudeDudeDude'
    print(strQuotes * strQuotes)
    # Output TypeError
    ```