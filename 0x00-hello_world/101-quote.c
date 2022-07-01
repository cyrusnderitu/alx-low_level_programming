#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char msg[] = "and that piece of art is useful\"-Dora Korpar, 2015-10-19";
syscall(SYS_write, msg);
return (0);
}
