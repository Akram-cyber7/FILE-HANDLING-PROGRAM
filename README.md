# FILE-HANDLING-PROGRAM

*COMPANY* : CODETECH IT SOLUTIONS

*NAME* : AKRAM PARVEZ KHAN

*INTERN ID* : CT04DF2132

*DOMAIN* : C PROGRAMMING

*DURATION* : 4 WEEKS

*MENTOR* : NEELA SANTOSH

## DESCRIPTION OF TASK-1

 Task 1 – File Handling in C (CODTECH Internship)
 Objective:
The purpose of Task 1 was to understand and implement basic file handling operations in the C programming language. File handling is one of the most important concepts in C when working with data that needs to be saved or loaded from files instead of memory. This task helped me learn how to create a file, write data into it, read its contents, and append additional data—all using file I/O functions in C.

What I Learned:
Through this task, I explored how to use standard file handling functions like:

fopen() – to open or create a file

fputs() and fgetc() – to write and read characters

fclose() – to close the file after use

I also learned about different file modes:

"w" – write mode (creates or clears file)

"r" – read mode

"a" – append mode (adds data at the end)

These modes help us control how we want to interact with the file.

About the Program:
The program is fully interactive. It begins by asking the user to enter a file name (e.g., data.txt). Then, it displays a menu with the following options:

Create a File – This option creates a new file using the name provided by the user.

Write to File – It allows the user to input data and saves it to the file. If the file already contains something, it will be overwritten.

Read File – This reads and prints the contents of the file on the screen, line by line.

Append to File – Adds new data to the end of the existing content, without deleting anything.

Exit – Ends the program.

Each function is written separately to keep the program organized and easy to understand. The functions are named in a simple way like makeFile, writeToFile, readFromFile, and addToFile, so it’s beginner-friendly and readable.

 How to Run:
Save the file as file_task1.c

Compile using:
gcc file_task1.c -o file_task1

Run it using:
./file_task1

Enter any file name like notes.txt and start exploring file operations through the menu.

 Output:
The output is menu-based and shows clear prompts for each operation. You can write text to the file and then read or append more text. The contents are saved in a file in the same folder as the code.

 Conclusion:
This task gave me a strong understanding of how to manage data with files in C. File handling is very useful when dealing with permanent storage, and now I know how to use it in real projects. I also practiced working with input/output functions and got more comfortable with strings and file pointers in C.

This task is part of the CODTECH internship, and the code has been tested and works perfectly. All functions are well-commented, so anyone can understand and modify the code easily




## DESCRIPTION OF TASK-2 


 Task 2 – Singly Linked List in C (CODTECH Internship)
 Objective:
The goal of Task 2 is to understand and implement a singly linked list using the C programming language. A linked list is a dynamic data structure that allows flexible memory usage and efficient insertions/deletions. In this task, I implemented the basic operations on a singly linked list — including insertion, deletion, and traversal (display) — to build a simple and interactive program.

This helped me gain practical knowledge about how data is linked through pointers and how to manage memory manually, which is an essential part of understanding data structures in C.

 Program Overview:
The program starts with a simple menu-driven interface that runs in a loop. The user can choose to:

Insert a node – A new node is added at the end of the list.

Delete a node – A node with a specific value is searched and deleted.

Display the list – The current list is printed from head to tail.

Exit – Quit the program.

The linked list uses a structure (struct Node) where each node stores an integer value and a pointer to the next node. The head pointer always points to the beginning of the list.

The operations are written using separate functions for modularity:

insertNode() – Allocates memory, sets the value, and connects the node.

deleteNode() – Finds the node with the given value and removes it.

displayList() – Prints all values in the list from start to end.

All operations use basic pointer manipulation and standard functions like malloc() and free() for memory management.



## DESCRIPTION FOR TASK-3


Task 3 – Lexical Analyzer in C
📌 Objective:
The goal of this task was to build a basic Lexical Analyzer using C. The program reads a C source file and identifies:

Keywords (like int, return, if)

Operators (like +, =, *)

Identifiers (like variable names)

This is a simplified version of the first phase of a compiler.

 How It Works:
The user inputs the name of the file (e.g., input.c)

The program reads it character by character

It checks each word:

If it's a known keyword, it prints "Keyword"

If it’s not, it prints "Identifier"

It also prints any operators found



## DESCRIPTION FOR TASK-4

Task 4 – Run-Length Encoding (RLE) in C
This task involved implementing a simple Run-Length Encoding (RLE) algorithm in C, which is used for basic text file compression. The goal was to understand how data compression works by reducing repeated characters into a shorter format. For example, a string like aaabbbcc becomes a3b3c2.

Through this task, I learned how to process character streams from files, count repeating characters, and write the compressed version to a new file. I also learned how to reverse the process through decompression, reading the compressed data and reconstructing the original content. This required understanding how to convert between characters and numbers, and how to handle file input/output efficiently.

I gained hands-on experience with functions like fgetc(), fputc(), fprintf(), and fscanf(), which are essential for working with files in C. I also practiced using loops, conditionals, and basic string/character manipulation techniques.

One important takeaway was learning how even simple logic can be used to reduce file size and save space. RLE is not suitable for all types of data, but it’s a good starting point for understanding more advanced compression algorithms.

Overall, this task strengthened my knowledge of file handling and introduced me to the real-world application of data compression. It also helped improve my problem-solving skills, especially in designing both compression and decompression logic in one program.




