// Program to Compare two strings

#include <stdio.h>

int strlen(char* some_string){
  int count = 0;
  while(some_string[count] != '\0'){
    count++;
  }
  return count;
}

int strcmp(char* first, char* second){
  if(strlen(first) != strlen(second)){
    return strlen(first) - strlen(second);
  }
  int count = 0;
  while(first[count] != '\0' && second[count] != '\0'){
    if(first[count] > second[count]){
      return 1;
    }
    if(first[count] < second[count]){
      return -1;
    }
  }
  return 0;
}

int main(void) {
  char* first = "Kernel Masters";
  char* second = "Kernel Masters";
  char* third = "KERNEL MASTERS";
  printf("The comparision between %s and %s is %d \n", first, second, strcmp(first, second));
  printf("The comparision between %s and %s is %d \n", first, third, strcmp(first, third));
  return 0;
}
