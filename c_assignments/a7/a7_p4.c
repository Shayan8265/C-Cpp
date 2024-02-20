// a7_p4
#include <stdio.h>
#include <ctype.h>//for functions of to/islower and to/isupper
#include <string.h>

void to_upper(char* str);
void to_lower(char* str);
void upper_lower(char* str);

int main(){
    char str[50], ch;
    int i = 0;
    void (*function[])(char*) = {to_upper, to_lower, upper_lower};
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';
    while(i != 3){
        scanf("%c", &ch);
        getchar();
        //ascii to number use -49.
        i = ch - 49;
        (*function[i])(str);
    }
    return 0;
}

void to_upper(char* str){
    int i, length = strlen(str);
    for(i=0; i<length; i++){
        str[i] = toupper(str[i]);
    }
    puts(str);
}

void to_lower(char* str){
    int i, length = strlen(str);
    for(i = 0; i < length; i++){
        str[i] = tolower(str[i]);
    }
    puts(str);
}

void upper_lower(char* str){
    for(int i=0; i<strlen(str); i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]); 
        }
        else if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    puts(str);
}



// QUESTION;
// Write a program that reads a string and then repeatedly reads a command (one character) from
// the standard input.
// If you press '1', then the string is printed uppercase on the standard output.
// If you press '2', then the string is printed lowercase on the standard output.
// If you press '3', then lowercase characters are printed uppercase and uppercase characters are
// printed lowercase on the standard output.
// If you press '4', then the program should quit the execution.
// Your main function (where you read the commands) or your other functions may not contain
// any if or switch statements for mapping the command to which function should be called.
// Your main function should contain an endless while loop.
// Implement the solution using a function pointer array. The original string should not be changed.
// You can assume that the input will be valid. To pass the testcases your output has to be identical
// with the provided ones.