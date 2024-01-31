# UTTDUNUID
UTTDUNUID is an basic app in C++ which generates UUID, Token, Time, Day, Username and UserID

To compile in MacOS or Linux:

To compile and run the C++ program with the provided files, you can use a C++ compiler such as `g++`. Here's how you can do it in a Unix-like environment `(Linux or macOS)`:

Open a terminal and navigate to the directory where you have saved your `app_utils.h, app_utils.cpp, and main.cpp` files.

Compile the source files using `g++`:
````bash
g++ -c app_utils.cpp -o app_utils.o
g++ -c main.cpp -o main.o
````
This will create object files `(app_utils.o and main.o)` from the source files.

Link the object files to create the executable:
````bash
g++ app_utils.o main.o -o UTTDUNUID
````
This will generate an executable file named UTTDUNUID.

Run the executable:
````bash
./UTTDUNUID
````
This should execute your program and display the output on the terminal.

Note:````Make sure you have a C++ compiler installed on your system, and adjust the compilation commands accordingly if you are using a different compiler or platform.````

To Compile in Windows:

In a Windows environment, you can use the `g++` compiler from the `MinGW-w64 project or a Visual C++ compiler`. Here's how you can compile and run the C++ program using `MinGW-w64:`
Assuming you have `MinGW-w64` installed and added to your system `PATH`:

Open a Command Prompt and navigate to the directory where you have saved your `app_utils.h, app_utils.cpp, and main.cpp files`.

Compile the source files using `g++`:
````bash
g++ -c app_utils.cpp -o app_utils.o
g++ -c main.cpp -o main.o
````
Link the object files to create the executable:
````bash
g++ app_utils.o main.o -o UTTDUNUID
````
This will generate an executable file named `UTTDUNUID.exe`.

Run the executable:
````bash
UTTDUNUID.exe
````
This should execute your program and display the output in the Command Prompt.

If you are using Visual Studio's compiler, you can use the following commands in the Visual Studio Developer Command Prompt:
````bash
cl /EHsc /c app_utils.cpp
cl /EHsc /c main.cpp
link app_utils.obj main.obj /out:UTTDUNUID.exe
UTTDUNUID.exe
````
Note:`Adjust the commands accordingly based on your compiler and development environment.`
