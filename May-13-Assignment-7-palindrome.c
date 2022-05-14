// Program to check if it is a Palindrome or Not

#include <stdio.h>


int compare(const char *X, const char *Y)
{
    while (*X && *Y)
    {
        if (*X != *Y) {
            return 0;
        }
 
        X++;
        Y++;
    }
 
    return (*Y == '\0');
}

char* strrev(char* another_string){
  int the_lenght = strlen(another_string);
  char* new_string = (char*) malloc(the_lenght*sizeof(char));
  int another_count = 0;
  int another_length = the_lenght-1;
  while(another_string[another_count] != '\0'){
    new_string[another_length] = another_string[another_count];
    another_length--;
    another_count++;
  }
  
  return new_string;
}

int check_palindrome(char* string_one){
  char* reversed_string = strrev(string_one);
  return compare(string_one, reversed_string);
}


int main(void) {
 
  printf("1: Palindrome 0: Not a Palindrome OUTPUT: %d \n", check_palindrome("MALAYALAM"));
  printf("1: Palindrome 0: Not a Palindrome OUTPUT: %d \n", check_palindrome("praghadeesh"));
  return 0;
}
