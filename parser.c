char** parse_command(char* buffer) {
	//assuming most commands will only have 1 argument
	//remember to free this fella
	char** parsed_command = malloc(sizeof(char*) * 2);

	int index = 0;
	char current_char = '_';

	char command[32];

	while(current_char != ' ') {
		current_char = buffer[index];

		command[index] = buffer[index];	

		index++;
	}

	index++;
	while(current_char != '\n') {
		while(current_char != ' ') {

		}
	}
}
