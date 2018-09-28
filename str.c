#include <stdio.h>
#include <string.h>


int mystrlen(char * str){
  int len = 0;
  while(*str++){
    len++;
  }
  return len;
}

int main(){
  char * s1 = "HeLlO";
  char s2[] = "HeLlo";
  char s3[256] = "HeLlO";

  printf("The length of \"%s\" is: %d\n", s1, mystrlen(s1));
  printf("The length of \"%s\" is: %d\n", s2, mystrlen(s2));
  printf("The length of \"%s\" is: %d\n", s3, mystrlen(s3));

  /*
  printf("%s compared to %s is: %d\n", s1, s2, strcmp(s1,s2));
  printf("%s compared to %s is: %d\n", s2, s3, mystrcmp(s2,s3));
  printf("%s compared to %s is: %d\n", s1, s3, mystrcmp(s1,s3));
  */

  return 0;
}
