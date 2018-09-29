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
    //printf("destination: %s\nsource:      %s\n\n", dest, source);
    *(dest+i) = *(source+i);
    i++;
  }
  return dest;
}

char * mystrcat(char *dest, char *source){
  int i = mystrlen(dest);
  while(*source){
    printf("destination: %s\nsource:      %s\n\n", dest, source);
    *(dest+i) = *source++;
    i++;
  }
  
  return dest;
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
  char s5[256] = "Hi";

  /*
  printf("Testing mystrlen\n~~~~~~~~~~~~~~~~~~~~~\n");
  printf("The length of \"%s\" is: %d\n", s1, mystrlen(s1));
  printf("The length of \"%s\" is: %d\n", s2, mystrlen(s2));
  printf("The length of \"%s\" is: %d\n", s3, mystrlen(s3));
  printf("\n~~~~~~~~~~~~~~~~~~~~~\n");
  */
  

  /*
  printf("Testing mystrcpy\n~~~~~~~~~~~~~~~~~~~~~");
  printf("destination: %s\n", mystrcpy(s1,s4));
  printf("destination: %s\n", mystrcpy(s2,s5));
  printf("destination: %s\n", mystrcpy(s1,s5));
  printf("\n~~~~~~~~~~~~~~~~~~~~~\n");
  */

  /*
  printf("Testing mystrcat\n~~~~~~~~~~~~~~~~~~~~~\n");
  printf("destination: %s\nEND\n\n", mystrcat(s3,s4));
  printf("destination: %s\nEND\n\n", mystrcat(s3,s5));
  printf("destination: %s\nEND\n", mystrcat(s5,s4));
  printf("\n~~~~~~~~~~~~~~~~~~~~~\n");
  */

  
  /*
  printf("Testing mystrchr\n~~~~~~~~~~~~~~~~~~~~~\n");
  printf("%p\n", mystrchr(s1, 'H'));
  printf("%p\n", mystrchr(s1, 'e'));
  printf("%p\n", mystrchr(s1, 'O'));
  printf("%p\n", mystrchr(s1, 'x'));
  printf("\n~~~~~~~~~~~~~~~~~~~~~\n");
  */

  /*
  printf("Testing mystrcmp\n~~~~~~~~~~~~~~~~~~~~~\n");
  printf("%s compared to %s is: %d\n", s1, s2, strcmp(s1,s2));
  printf("%s compared to %s is: %d\n", s2, s3, mystrcmp(s2,s3));
  printf("%s compared to %s is: %d\n", s1, s3, mystrcmp(s1,s3));
  printf("\n~~~~~~~~~~~~~~~~~~~~~\n");
  */

  return 0;
}
