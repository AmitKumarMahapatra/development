## Birth of Python
- Python is a **general purpose** **high level** **programming language**.
    - **general purpose** : Because it can be used in various fields
    - **high level** : Because it is human friendly not machine friendly
    - **programming language** : I am not talking about snake here.
- Python was developed by **Guido Van Rossam** in 1989 while working at National Research Institute at Netherlands (However Java came in 1995).
- But the official Date of Birth for Python is 20th February 1991.
- The name Python was selected from the TV Show "The Complete Monty Python's Circus", which was broadcasted in BBC from 1969 to 1974.
- Guido developed Python language by taking almost all programming features from different languages
    - **Functional Programming** Features from C
    - **Object Oriented Programming** Features from C++ (Java is not mentioned, because Java was not there at that point in time)
    - **Scripting Language** Features from Perl and Shell Script
    - **Modular Programming** Features from Modula-3 *(Outdated, not used anymore)*
    - Most of syntax in Python derived from C and ABC languages.
- So Python is an **All Rounder**.



## Hello World in Various Programming Languages
### Java Code
```java
public class HelloWorld { 
    public static void main(String[] args) { 
        System.out.println("Hello world"); 
    }
}
```
### C Code
```c
#include<stdio.h>
void main() {
    printf("Hello world"); 
}
```

### Python Code
```python
print("Hello World")
```

## Usage of Python
We can use everywhere. The most common important application areas are
- For developing Desktop Applications
- For developing web Applications
- For developing database Applications
- For Network Programming
- For developing games
- For Data Analysis Applications
- For Machine Learning
- For developing Artificial Intelligence Applications
- For IoT

### Note:
- Internally Google and Youtube use Python coding.
- NASA and Network Stock Exchange Applications developed by Python.
- Top Software companies like Google, Microsoft, IBM, Yahoo are using Python.

## Features of Python

### Simple and easy to learn
- Python is a simple programming language. When we read Python program, we can feel like reading english statements.
- The syntaxes are very simple and only 30+ (33 Keywords) keywords are available.
- When compared with other languages, we can write programs with very less number of lines. Hence more readability and simplicity.
- We can reduce development and cost of the project.


### Freeware and Open Source
- We can use Python software without any license (even free for business usages) and it is freeware.
- For Java, Oracle. For c#, Microsoft. However for Python, PSF (Non Profit Foundation).
- Java 11 Onwards, License must be required. C# is also licensed.
- Source code of Python is open, so that we can we can customize based on our requirement. For example, **Jython** is customized version of Python to work with Java Applications. Similarly for c#, **Iron Python** is another customization of python.

### High Level Programming language
- Python is high level programming language and hence it is programmer friendly language.
-Being a programmer we are not required to concentrate on low level activities like memory management and security etc.


### Platform Independent
- Once we write a Python program, it can run on any platform without rewriting once again.
- Internally PVM (Python Virtual Machine) is responsible to convert into machine understandable form.


### Portability:
- Python programs are portable, which means we can migrate from one platform to another platform very easily. Python programs will provide same results on any platform.
- *Example : SIM Card portability, that is, we can keep the number same, only thing that will change is vendor.*

### Dynamically Typed
- In Python we are not required to declare type for variables. Whenever we are assigning the value, based on value, type will be allocated automatically. Hence Python is considered as dynamically typed language.
- But Java, C etc are Statically Typed Languages because we have to provide type at the beginning only.
- This dynamic typing nature will provide more flexibility to the programmer.


### Both Procedure Oriented and Object Oriented
- Python language supports both **Procedure Oriented** (like C, pascal etc) and **Object Oriented** (like C++, Java) features. Hence we can get benefits of both like security and reusability etc.


### Interpreted
- We are not required to compile Python programs explicitly. Internally Python interpreter will take care that compilation.
- If compilation fails interpreter will raise syntax errors. Once compilation success then PVM (Python Virtual Machine) is responsible to execute.

### Extensible
- We can use other language programs in Python.
- The main advantages of this approach are
    - We can use already existing legacy non-Python code.
    - We can improve performance of the application.

### Embedded (Opposite of Extensible)
- We can use Python programs in any other language programs, which means, we can embedded Python programs anywhere.


### Extensive Library
- Python has a rich inbuilt library.
- Being a programmer we can use this library directly and we are not responsible to implement the functionality. Etc.


## Limitations of Python
- Performance wise not up to the mark because it is interpreted language.
- Not much helpful for Mobile Applications.

## Flavors of Python

### CPython
- This is provided by Python's Foundation Organization.
- It is the standard flavor of Python. 
- It can be used to work with C language Applications.

### Jython OR JPython
- It is for Java Applications. It can run on JVM

### IronPython
- It is for C#.Net platform

### PyPy
- The main advantage of PyPy is performance will be improved because JIT compiler is available inside PVM.
- This version needs to be used for speed.

### Ruby Python
- For Ruby Platforms

### Anaconda Python
- It is specially designed for handling large volume of data processing.

### Stackless
- Python for concurrency.


## Python Versions
- Python 1.0 V introduced in Jan 1994
- Python 2.0 V introduced in October 2000
- Python 3.0 V introduced in December 2008

### Note
Python 3 won't provide **backward compatibility** to Python2 i.e there is no guarantee that Python2 programs will run in Python3.