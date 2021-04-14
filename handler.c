#include "shell.h"
/**
  *inthandler - handles ^C.
  *@sig: signal passed.
  *
  *Return: void.
  */
void inthandler(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n", 1);
	def_prompt();
}
