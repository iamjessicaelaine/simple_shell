# Project 0x17: C - Simple Shell
### A project by students at Holberton School in Tulsa, OK.

## About the Project:
For this project, we created a simple UNIX command interpreter in order to deepen our understanding of the C programming language which was used to code our simple shell. In addition to furthering our learning of C, we gained a broader perspective of how a shell functions.
Our command interpreter, HSH, is an implementation of a simple shell in C which shows how a shell works on a basic level. HSH is able toread a string from standard input that is then parsed into tokens that direct and guide the execution of the program/commands entered into standard input by the user. Unlike the GNU Bourne-Again SHell that our utility mimics, HSH does not handle piping, redirection, or other advanced features that the Linux shell handles and it is only able to handle simple command line strings.


## Why is this project useful?
By reviewing our code present in this project, an individual can also gain a better understanding of how the Linux shell that we all know and love functions on a basic level. 


## Getting Started
In order to use and experience our implementation of a simple shell, please use `gcc *.c -o hsh` and then `./hsh` to run it. Upon successful executio a command prompt ($) will print to the standard output and await a command or program with all of its relevant arguments to be entered into standard input by the user. After command line string is input, the user will need to press enter in order for the shell to read, parse, and execute as directed by the commmand line string. In order to exit the program, input the following in the program's command line:
> $ `exit`
and you will be returned to your terminal's shell.

## Contact Us
The main contributors to this project are Jessica Loyd and Yannick Ntwari, members of Cohort 17 at Holberton School in Tulsa. We will maintain this project on an as needed basis per the requirements of the course for this project. We can be reached by email at:
- **Jessica Loyd:** 4239@holbertonschool.com
- **Yannick Ntwari:** 2906@holbertonschool.com