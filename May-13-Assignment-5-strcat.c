// Program to Concatenate Two Strings

#include <stdio.h>

int strlen(char* some_string){
  int count = 0;
  while(some_string[count] != '\0'){
    count++;
  }
  return count;
}

int strcat(char* first, char* second){
  int the_length = strlen(first) + strlen(second);
  char* concatenated_string = (char*)malloc(sizeof(char)*the_length);
  int first_count = 0;
  int second_count = 0;
  int concat_count = 0;
  while(first[first_count] != '\0'){
    concatenated_string[concat_count] = first[first_count];
    first_count++;
    concat_count++;
  }
  while(second[second_count] != '\0'){
    concatenated_string[concat_count] = second[second_count];
    second_count++;
    concat_count++;
  }
  concatenated_string[concat_count] = '\0';
  return concatenated_string;
}

int main(void) {
  char* first = "Praghadeesh ";
  char* second = "Linux Device Drivers ";
  printf("%s", strcat(first, second));
  return 0;
}
