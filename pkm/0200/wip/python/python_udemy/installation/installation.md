## Python Installation
- Python software foundation is responsible to manage the Python software
- [Official Website](https://www.python.org/)
- There are 2 versions of python 
    - Python 2.x [From 2020 onwards, there is no support for this version]
    - Python 3.x

### Why we need to add python to our PATH variable ?
- We might run python command from D: or from C: or from C:Desktop or from any location.
- Whenever, we run te python command, the python executable file (python.exe) will run.
- To run the executable file, OS needs to know the location of the executable file.
- Then OS first checks the PATH Environment variable and search the location of the executable file.
- If it can not find the location in the PATH variable, it will throw error saying, python is not recognized.
- In case of JAVA installation, we need to add the path variable explicitly. 
- In case of Python installation, we just need to check a checkbox and the PATH variable will be appended with the correct location.

### Ways we can run python code

#### Using Python IDLE
**IDLE** Stands for **Integrated Development Learning Environment**
It is a simple **REPL Tool**
R => Read (Read the python script)
E => Evolve (Evaluate the script)
P => Print (Print the result on the screen)
L => Loop (Repeat the above task again)
- Most of the programming language has this REPL tool to play with the programming language.
- This is used only for learning purpose.
    - In Java, we have **JShell** (Unfortunately, This came very late in Java 9)
    - In Swift, we have **Playground** tool for the same purpose.
![Insert an image here]()
- to ENTER into the python shell the command is `python` or `py`
- to EXIT from the python shell, the command is `exit()`

#### Running a Python file
to run python file in command prompt, 
python file_name.py
Or
PY file-name.py

### Best way to write python code is use an Editor

#### Examples
- VS Code
- Atom
- Edit Plus
- Sublime text
- Eclipse
- PyCharm
- Spyder
- Jupyter Notebook

#### Note
When you are starting learning Python, use Edit Plus, because on other editors, most of the code will be generated automatically. So it's better to start from scratch and make yourself habituate with the language and syntax. Once you are comfortable, you can choose any IDE.