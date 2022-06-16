					ALX Simple Shell project

simple_shell

A simple C shell project

Description: 
	This is a simple UNIX command interpreter that replicates functionalities of the simple shell (sh).
 This program was written entirely in C as a milestone project for Alx-Holberton School.

Installation:
	Clone this repository into your working directory. Files should be compiled with GCC and the following flags:
			 -Wall -Wextra -Werror -pedantic -Wno-format

			gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh	

Name "hsh" can be changed as you desire.	
Usage:
	 This program can run stand-alone, either in interactive or non-interactive mode.

Interactive Mode:
	Run the program and wait for the prompt "$" to appear. your commands can then be entered,
Exiting Interactive Mode:
	 Enter "exit" command or ctrl-D.

Non-Interactive Mode:
	 This prigram also runs in non interactive mode too, just echo your desired command and pipe it into the program,

					echo "ls" | ./hsh

where hsh is the name of your output file from the installion stage.
Usage guidline:
	The command should be simple with 
		no semicolons,
		no pipes,
		no redirections, 
		or any other advanced features. 
		

Credits:
	 Owaji-inyagham Ogbuluijah and Muhammad Ibrahim Baba.
