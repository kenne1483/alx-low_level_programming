#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of program passed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always (Success)
 */
int main(int argc _attribute_((unused)), char *argv[])

{
        printf("%s\n", argv[0]);
        return (0);
}
