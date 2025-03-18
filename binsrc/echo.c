#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	char* buffer = argv[1];
	int buffer_size = atoi(argv[2]);	

	write(STDOUT_FILENO, buffer, buffer_size);
	write(STDOUT_FILENO, "\n", 1);

	return 0;
}
