int main(int argc, char *argv[]) {

	char buffer[] = argv[1];
	char* buffer_size = argv[2];	

	write(STDOUT_FILENO, buffer, buffer_size);
}
