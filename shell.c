#include "shell.h"
/**
*main - Main Entry point
*@argc: Argument count
*@argv: List of Arguments
*Return: 0 (success) or -1 (failiure)
*/
int main(int argc, char *argv[])
{
	char *av, **tok;
	pid_t child_pid;
	size_t n = 1024;
	int status;

	if (argc < 0)
		return (1);
	printf("cisfun$ ");
	getline(&av, &n, stdin);
	tok = tokenizer(av);
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{
		if (execve(tok[0], tok, NULL) == -1)
		{
			perror("Error: excec error");
			return (1);
		}
	}
	else
	{
		wait(&status);
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error: parent error");
			return (1);
		}
	}
	return (0);
}
