
## Boilerplate Code

```c++
#include<iostream>
using namespace std;

int main(){
    // your logic
    return 0;
}
```

## Hello World!! in c++

```c++
#include<iostream>
using namespace std;

int main(){
    cout << "Hello World!!"
         << endl;
    return 0;
}
```

- [C++ Compiler download and set up steps](https://www.cs.odu.edu/~zeil/cs250PreTest/latest/Public/installingACompiler/)
- g++ command to compile the hello_world.cpp file
- command is `g++ hello_world.cpp`
- it will produce a file called `a.out`.
- run the `a.out` file using the command `./a.out` and it will print the output on the cmd
- `a.out` is the default name. It can be changed by using `g++ -o name_of_the_file.out hello_world.cpp` command.
- then run `./name_of_the_file.out`


- In `c++` if we are dividing 2 integers, then we will always get the result as an integer, does not matter in which datatype the result is stored.
    ```c++
    int numerator = 10;
    int denominator = 3;
    int n_result;
    float f_result;

    n_result = numerator / denominator;
    f_result = numerator / denominator;

    cout << (n_result);
    cout << (f_result);
    cout << (n_result / 1.0)
    ```

- pre-processor are the directives which gives the instructions to the compiler to pre-process some code  before actual compilation starts.
- The directive begins with #
- `#include` tells the compiler to include the header file in the source code before compilation.
- There are other kind of directives as well.
    - `#define` directive tells to create a symbolic constant. The symbolic constants are called Macros.
        ```c++
        #define PI 3.14

        int main(){
            float radius, area;
            area = radius * radius * PI;
            return 0;
        }
        ```
    - All subsequent occurrences of macro in the source code will be replaced by the replacement text before compilation.
        ```c++
        int main(){
            float radius, area;
            area = radius * radius * 3.14;
            return 0;
        }
        ```
- The actual code is compiled be the compiler.

- Keywords cannot be used as an identifier.
- In c++, there are total 95 keywords.

- command line argument for main
    ```c++
    #include<iostream>
    int main(int argc, char* argv[]){
        return 0;
    }
    ```
- `main` is not a keyword in c++
- `main` is not predefined, but it is pre-declared.We can say this is pre-declared because `main` is the starting point of any program. So it must be declared somewhere and we are just providing the definition to the function.
- In c++, your code is linked against a small runtime library that constitutes the true starting point of the program.
- It is this small library that calls the main -- it's hardcoded to do so.

## Namespace and Header files in c++
TO BE WRITTEN


