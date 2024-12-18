# Simple Shell Documentation

## Overview
The **Simple Shell** project is a basic implementation of a Unix shell. It replicates some of the core functionalities of a shell, including executing commands, handling built-ins, and managing processes.

This program was written entirely in C as a milestone project for the ALX-Holberton School.

## Features
- Executes commands found in the system's PATH.
- Supports both absolute and relative paths for executable files.
- Implements basic built-in commands such as `exit`, `env`, and `cd`.
- Handles command-line arguments.
- Implements simple error handling.
- Supports both interactive and non-interactive modes.

## Files
The project includes the following files:

| File                       | Description                                   |
|----------------------------|-----------------------------------------------|
| `.gitignore`               | Specifies files to ignore in the repository  |
| `append_path.c`            | Appends a new path to an existing PATH       |
| `AUTHORS`                  | List of contributors to the project          |
| `checker.c`                | Validates user inputs and commands           |
| `execution.c`              | Executes user commands                       |
| `exit_cmd.c`               | Handles the `exit` built-in command          |
| `free_function.c`          | Frees allocated memory                       |
| `generate-authors.sh`      | Script to generate the `AUTHORS` file        |
| `handle_builtins.c`        | Manages built-in commands                    |
| `handle_signal.c`          | Handles signals (e.g., `Ctrl+C`)             |
| `man_simple_shell`         | Man page documentation for the shell         |
| `path.c`                   | Resolves the path of executable commands     |
| `print_env.c`              | Prints the environment variables             |
| `print_functions.c`        | Utility functions for printing               |
| `prompt_user.c`            | Displays the shell prompt to the user        |
| `README.md`                | Main documentation file                      |
| `shell.c`                  | Entry point for the shell program            |
| `shell.h`                  | Header file containing prototypes and macros |
| `string_functions_2.c`     | Additional string manipulation functions     |
| `string_functions.c`       | Basic string manipulation functions          |
| `test_path.c`              | Tests for PATH handling                      |
| `text.txt`                 | Placeholder file for temporary data          |
| `tokenizer.c`              | Splits input strings into tokens             |

## Installation
1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com/yourusername/simple_shell.git
   ```
2. Navigate to the project directory:
   ```bash
   cd simple_shell
   ```
3. Compile the code using GCC:
   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
   ```
   You can rename the output file `hsh` to any desired name.

## Usage
This program can run in both **interactive** and **non-interactive** modes.

### Interactive Mode
1. Run the shell by executing the compiled program:
   ```bash
   ./hsh
   ```
2. Use the shell interactively by typing commands. For example:
   ```bash
   $ ls -l
   $ pwd
   $ echo "Hello, World!"
   ```
3. To exit the shell, use the `exit` command or press `Ctrl+D`:
   ```bash
   $ exit
   ```

### Non-Interactive Mode
1. Pipe commands into the shell from another program or script:
   ```bash
   echo "ls" | ./hsh
   ```
2. The shell will execute the commands and exit automatically.

## Usage Guidelines
- Commands should be simple and without advanced features like:
  - Semicolons (`;`)
  - Pipes (`|`)
  - Redirections (`>` or `<`)
- The shell supports only basic command execution and built-ins.

## Built-in Commands
The Simple Shell supports the following built-in commands:

| Command    | Description                                  |
|------------|----------------------------------------------|
| `exit`     | Exits the shell                              |
| `env`      | Prints the environment variables             |
| `cd`       | Changes the current working directory        |

## Testing
1. Compile the test file (if included):
   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simple_shell_test
   ```
2. Run the tests:
   ```bash
   ./simple_shell_test
   ```

## Contribution Guidelines
We welcome contributions to enhance the Simple Shell project. To contribute:

1. Fork the repository and clone it to your local machine.
2. Create a new branch for your feature or bug fix:
   ```bash
   git checkout -b feature-or-bugfix-name
   ```
3. Commit your changes with clear and concise messages:
   ```bash
   git commit -m "Description of your changes"
   ```
4. Push to your fork and submit a pull request.

## Authors
- [Muhammad Ibrahim Baba](https://github.com/Goldeno10) - Contributor
- [Owaji-Inyagham Ogbuluijah](https://github.com/Ogbus) - Contributor

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments
- The creators of the Unix shell.
- Open-source contributors for their valuable tools and documentation.

