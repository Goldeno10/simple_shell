#include "main.h"
/**
*main - Main Entry point
*@argc: Argument count
*@argv: List of Arguments
*Return: 0 (success) or -1 (failiure)
*/
int main(int argc, char *argv[])
{
	char *av;
	pid_t child_pid;
	char **arr = malloc(sizeof(char *) * 1024);
	size_t n = 1024, i = 0;
	char *tok;
	int status;

	if (argc < 0)
		return (1);
	printf("cisfun$ ");
	getline(&av, &n, stdin);
	tok = strtok(av, " ");
	while (tok != NULL)
	{
		arr[i] = tok;
		tok = strtok(NULL, " ");
		i++;
	}
	arr[i] = NULL;
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{
		if (execve(arr[0], arr, NULL) == -1)
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
	free(arr);
	return (0);
}
