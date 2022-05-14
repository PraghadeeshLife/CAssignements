// Program to replace the character in string
#include <stdio.h>

int strlen(char* some_string){
  int count = 0;
  while(some_string[count] != '\0'){
    count++;
  }
  return count;
}


char* replace_character(char* string, char character, char new_character){
  char* new_string = (char*)malloc(strlen(string));
  int count = 0;
  while(string[count] != '\0'){
    if(string[count] == character){
      new_string[count] = new_character;
      // printf("%c", string[count]);
    }
    else{
      new_string[count] = string[count];
    }
    count++;
  }

  return new_string;
}

int main(void) {
  char* first = "Praghadeesh ";
  char replace_this = 'e';
  char with_this = 'E';
  printf("%s", replace_character(first, replace_this, with_this));
  return 0;
}
