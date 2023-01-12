#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
char *strcat(char, *dest, char *src);
char *strncat(char, *dest, char *src int n);
char *strncpy(char, *dest, char *src int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *memcpy(char *dest, char *src, ubsigned int n);
char *strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif /* _MAIN_H_*/