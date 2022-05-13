// Program to Copy String using Pointer Arithmetic

#include <stdio.h>

int strlen(char* some_string){
  int count = 0;
  while(some_string[count] != '\0'){
    count++;
  }
  return count;
}

char* strcpy(char* source, char* destination){
  if (destination == NULL) {
        return NULL;
    }
    char *the_pointer = destination;
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return the_pointer;
}

int main(void) {
  char* the_source = "Praghadeesh";
  char the_destination[40];
  strcpy(the_source, the_destination);
  printf("The data in destination is %s \n", the_destination);
  return 0;
}
