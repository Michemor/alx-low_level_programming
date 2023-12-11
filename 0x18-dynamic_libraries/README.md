# DYNAMIC LIBRARIES

## Learning Objectives

1. What is a dynamic library, how does it work, how to create one, and how to use it    
    - Dynamic libraries are shared libraries linked at run time
2. What is the environment variable $LD_LIBRARY_PATH and how to use it 
    - The path to your dynamic library is included in this variable
3. What are the differences between static and shared libraries
    - Static libraries are stored as object code and are included in the executable file of your programs after linking. 
    - Dynamic libraries are instead stored in memory and during linking only the memory locatio to the dynamic library is included
4. Basic usage nm, ldd, ldconfig
   - nm         -   lists symbols used in object files
   - ldd        -   lists dynamic dependencies of your program
   - ldconfig   -   
