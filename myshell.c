#include <unistd.h>
#include "parser.h"

#define BUFFER_SIZE 100
#define SHELL_ACTIVE 1

int main() {
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;	
	char current_char;

	while(SHELL_ACTIVE) {
		bytes_read = read(STDIN_FILENO, buffer, BUFFER_SIZE);

	}
