// Program to Count the number of characters in String

#include <stdio.h>

int strlen(char* some_string){
  int count = 0;
  while(some_string[count] != '\0'){
    count++;
  }
  return count;
}

int main(void) {
  printf("The length of the data is: %d", strlen("Praghadeesh"));
  return 0;
}
