# C++ Student Assigments (2024 Maths Workshop)

Useful linux commands

| **Command** | **Does this**                                        | **Examples**                   |
|-------------|------------------------------------------------------|--------------------------------|
| ~           | Represents the home directory                        |                                |
| pwd         | Prints the present working directory (folder)        | pwd                            |
| ls          | Lists all the files in the present working directory | ls ls -lrt                     |
| cd          | Change directory                                     | cd electronics                 |
| mkdir       | Make a directory                                     | mkdir electronics              |
| rm          | remove                                               | rm file.txt rm -rf electronics |
| ..          | One folder back                                      | cd ../                         |
| .           | Current directory                                    |                                |
| cp          | Copy a file                                          | cp electronics/file.txt .      |


---

# Command for compiling and running the code:

- **To compile, type on the terminal**: `g++ filename.cpp`  
  for instance, for the first exercise: `g++ 01-helloworld.cpp`   

- The compiler will compile and create an executable called:
`a.out`
in the same location as the file you are compiling

- To run the code: `./a.out`

- If you want to create an executable with a different name, say `hello`:  
`g++ -o hello 01-helloworld.cpp`   




