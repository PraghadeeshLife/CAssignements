// Program to concatenate two strings with some limits

#include <stdio.h>

char* concatenatetwostrings(char* a, char* b, int c, int d){
  char* new_string = (char*)malloc(sizeof(char)*(c+d));
  int count = 0;
  for(int i=0; i<c && a[i] != '\0'; i++){
    new_string[count] = a[i];
    count += 1;
  }

  for(int j=0; j<d && b[j] != '\0'; j++){
    new_string[count] = b[j];
    count += 1;
  }

  return new_string;
}

int main(void) {
  printf("%s \n", concatenatetwostrings("Praghadeesh", "Kernel", 3, 4));
  return 0;
}
