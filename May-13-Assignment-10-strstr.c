// Program to return the substring

#include <stdio.h>
#define pragha_sizeof(x) (char*)(&x+1) - (char*)(&x)

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

int strlen(char* some_string){
  int count = 0;
  while(some_string[count] != '\0'){
    count++;
  }
  return count;
}

char* strstr(char* one, char* two){
  while(*one != '\0'){
    if((*one == *two) && compare(one, two)){
      return one;
    }
    one++;
  }
  return NULL;
}



int main(void) {
  char* first = "Praghadeesh ";
  char* second = "deesh ";
  printf("%s", strstr(first, second));
  return 0;
}
