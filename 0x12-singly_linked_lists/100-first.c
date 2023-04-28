#include "lists.h"

void __attribute__((constructor)) before(void);
/**
 * before - execute before main
 * Return: void
 */
void before(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
