void kmain(void)
{
	const char *str = "MTSA LIGHTWEIGHT KERNEL";
	char *vidptr = (char*)0xb8000; 	//video memory begins at this address.
	unsigned int i = 0;
	unsigned int j = 0;

	while(j < 80 * 25 * 2) {
		vidptr[j] = ' ';
		vidptr[j+1] = 0x07; 		
		j = j + 2;
	}

	j = 0;

	/* this loop writes the string to video memory */
	while(str[j] != '\0') {
		/* the character's ascii */
		vidptr[i] = str[j];
		vidptr[i+1] = 0x07;
		++j;
		i = i + 2;
	}
	return;
}
