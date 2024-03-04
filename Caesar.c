#include <stdio.h>
#include <string.h>

//encrypt string using Caesar cipher
void encrypt(char *message, int shift) {
	char ch;
	int i;
	for (i = 0; message[i] !='\0'; i++) {
		ch = message[i];
		//Encrypt uppercase
		if (ch >= 'A' && ch <= 'Z')
			message[i] = ((ch -'A' + shift) % 26) + 'A';
		else if (ch >= 'a' && ch <= 'z')
			message[i] = ((ch - 'a' + shift) % 26) + 'a';
	}
}

int main() {
    char message[] = "message to be encrypted";
    int shift = 5;
    printf("Original: %s\n", message);
    encrypt(message, shift);
    printf("Encrypted: %s\n", message);
    return 0;
}
