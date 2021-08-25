#ifndef SHELL
#define SHELL

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

/* Shell Functions */
char **str_to_2d(char *buff_str, char del[]);
void exe_new_process(char **args);
char *status_checker(char **args);
char *_getenv(const char *name);
char **cp_environ(void);
char *_is_ascii(char *buffer);

char *sep_check(char *buffer);
char *_prompt(char **envp);
void _printstring(char *color);
char *_searchpath(char **envi);
char **_tokpath(char *string);

/* Basic Functions */
int _putchar(char c);
int p_text(char *text);

/* Strings Functions */
char *_strdup(char *str);
int _strcmp(const char *s1, const char *s2);
char *_strcat(char *s1, char *s2);
unsigned int _strlen(char *s);

#endif /*SHELL*/
