#include <stdio.h>

/**
 * premain - function that runs before main
 *
 * Return: nothing
*/

void pre_main_message(void) __attribute__((constructor));

void pre_main_message(void) {
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
