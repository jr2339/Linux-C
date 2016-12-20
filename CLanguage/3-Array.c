#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    /*=========================================String==========================================*/
    char message[12] = "Hello World"; // this is how we declare an array of char which is String
    printf("message is '%s'\n", message);
    printf("the 2nd char in String is %c\n", message[1]);
    printf("the 12th char in String is %c\n", message[11]); // 12th element should be an empty space

    /*=========================================Pointer==========================================*/
    char* read = (char*)malloc(12*sizeof(char));
    char* copy = read;
    char* message_pointer;
    message_pointer = message;
    printf("the 1st method to represent string is using message pointer: '%s'\n",message_pointer);
	while(*message_pointer !='\0'){
		*copy = *message_pointer;
		copy++;
		message_pointer ++;
	}
	if(*message_pointer == '\0'){
		*copy = '\0';
		copy++;
	}
	printf("Now we can see the message-pointer at here is:  '%s'\n",message_pointer);
	printf("the 2nd method to represent string is using loop: '%s'\n",read);


    return 0;
}
