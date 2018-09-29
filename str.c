#include <stdio.h>
#include <string.h>


int mystrlen(char *str){
  int len = 0;
  while(*str++){
    len++;
  }
  return len;
}

char * mystrcpy(char *dest, char *source){
  int i = 0;
  while(*(dest+i) || *(source+i)){
    *(dest+i) = *(source+i);
    i++;
  }
  return dest;
}

char * mystrcat(char *dest, char *source){
  return 0;
}


int mystrcmp(char *s1, char *s2){
  return 0;
}

char * mystrchr(char *s, char c){
  while(*s){
    printf("%p: %c \n", s, *s);
    if (*s == c){
      return s;
    }
    s++;
  }
  return 0;
}

char * mystrstr(char *s1, char * s2){
  return 0;
}


int main(){
  char *s1 = "Hello";
  char s2[] = "Hello";
  char s3[256] = "Hello";
  char s4[] = "Playo";
  char s5[256] = "asdfa";

  /*
  printf("The length of \"%s\" is: %d\n", s1, mystrlen(s1));
  printf("The length of \"%s\" is: %d\n", s2, mystrlen(s2));
  printf("The length of \"%s\" is: %d\n", s3, mystrlen(s3));
  */

  //printf("mystrcpy(s1,s2) : %s\n", mystrcpy(s1,s4));
  printf("mystrcpy(s2,s3) : %s\n", mystrcpy(s4,s5));
  //printf("mystrcpy(s1,s3) : %s\n", mystrcpy(s1,s5));
  
  /*
  printf("%p\n", mystrchr(s1, 'H'));
  printf("%p\n", mystrchr(s1, 'e'));
  printf("%p\n", mystrchr(s1, 'O'));
  printf("%p\n", mystrchr(s1, 'x'));
  */

  /*
  printf("%s compared to %s is: %d\n", s1, s2, strcmp(s1,s2));
  printf("%s compared to %s is: %d\n", s2, s3, mystrcmp(s2,s3));
  printf("%s compared to %s is: %d\n", s1, s3, mystrcmp(s1,s3));
  */

  return 0;
}
