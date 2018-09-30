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
    //printf("destination: %s\nsource:      %s\n\n", dest, source);
    *(dest+i) = *source++;
    i++;
  }  
  return dest;
}


int mystrcmp(char *s1, char *s2){
  int i = 0;
  while(*(s1+i) && *(s2+i) && *(s1+i) == *(s2+i)){
    //printf("s1: %c\n", *(s1+i));
    //printf("s2: %c\n", *(s2+i));
    i++;
  }
  //printf("s1: %c\n", *(s1+i));
  //printf("s2: %c\n", *(s2+i));
  return *(s1+i)-*(s2+i);
}

char * mystrchr(char *s, char c){
  while(*s){
    //printf("%p: %c \n", s, *s);
    if (*s == c){
      return s;
    }
    s++;
  }
  return 0;
}

char * mystrstr(char *s1, char * s2){
  while(*s1++){
    if(s1 == s2){
      int i = 0;
      while(*(s2+i) && *(s1+i) == *(s2+i)){
	i++;
      }
    }
  }
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
  printf("The length of \"%s\" is: %ld\n\n", s1, strlen(s1));
 
  printf("The length of \"%s\" is: %d\n", s2, mystrlen(s2));
  printf("The length of \"%s\" is: %ld\n\n", s2, strlen(s3));
  
  printf("The length of \"%s\" is: %d\n", s3, mystrlen(s3));
  printf("The length of \"%s\" is: %ld\n\n", s3, strlen(s3));
  printf("\n~~~~~~~~~~~~~~~~~~~~~\n");
  */
  

  /*
  printf("Testing mystrcpy\n~~~~~~~~~~~~~~~~~~~~~\n");
  //CANNOT INTO IMMUTABLE STRINGS
  //printf("destination: %s\n", mystrcpy(s1,s4));
  //printf("destination: %s\n\n", strcpy(s1,s4));
  
  printf("destination: %s\n", mystrcpy(s2,s5));
  //printf("destination: %s\n\n", strcpy(s2,s5));
  
  printf("destination: %s\n", mystrcpy(s5,s1));
  //printf("destination: %s\n\n", strcpy(s5,s1));
  
  printf("\n~~~~~~~~~~~~~~~~~~~~~\n");
  */
  

  /*
  printf("Testing mystrcat\n~~~~~~~~~~~~~~~~~~~~~\n");
  printf("destination: %s\n", mystrcat(s3,s4));
  //printf("destination: %s\n", strcat(s3,s4));
  
  printf("destination: %s\n", mystrcat(s3,s5));
  //printf("destination: %s\n", strcat(s3,s5));
  
  printf("destination: %s\n", mystrcat(s5,s4));
  //printf("destination: %s\n", mystrcat(s5,s4));
  printf("\n~~~~~~~~~~~~~~~~~~~~~\n");
  */
  

  /*
  printf("Testing mystrcmp\n~~~~~~~~~~~~~~~~~~~~~\n");
  printf("%d\n", mystrcmp(s2, s3));
  printf("%d\n", strcmp(s2, s3));
  printf("%d\n", mystrcmp(s4, s5));
  printf("%d\n", strcmp(s4, s5));
  printf("%d\n", mystrcmp(s5, s4));
  printf("%d\n", strcmp(s5, s4));
  printf("\n~~~~~~~~~~~~~~~~~~~~~\n");
  */
  
  
  /*
  printf("Testing mystrchr\n~~~~~~~~~~~~~~~~~~~~~\n");
  printf("%p\n", mystrchr(s1, 'H'));
  printf("%p\n", mystrchr(s1, 'H'));
  printf("%p\n", mystrchr(s1, 'e'));
  printf("%p\n", mystrchr(s1, 'e'));
  printf("%p\n", mystrchr(s1, 'o'));
  printf("%p\n", mystrchr(s1, 'o'));
  printf("%p\n", mystrchr(s1, 'x'));
  printf("%p\n", mystrchr(s1, 'x'));
  printf("\n~~~~~~~~~~~~~~~~~~~~~\n");
  */
  

  /*
  printf("Testing mystrcmp\n~~~~~~~~~~~~~~~~~~~~~\n");
  printf("%s compared to %s is: %d\n", s1, s2, mystrcmp(s1,s2));
  printf("%s compared to %s is: %d\n", s1, s2, strcmp(s1,s2));
  printf("%s compared to %s is: %d\n", s1, s4, mystrcmp(s1,s4));
  printf("%s compared to %s is: %d\n", s1, s4, strcmp(s1,s4));
  printf("%s compared to %s is: %d\n", s5, s3, mystrcmp(s5,s3));
  printf("%s compared to %s is: %d\n", s5, s3, strcmp(s5,s3));
  printf("\n~~~~~~~~~~~~~~~~~~~~~\n");
  */

  printf("Testing mystrstr\n~~~~~~~~~~~~~~~~~~~~~owo\n");
  printf("mystrstr(s3,s4) : %s\n", mystrstr(s3,s4));
  printf("mystrstr(s3,s5) : %s\n", mystrstr(s3,s5));
  printf("mystrstr(s5,s4) : %s\n", mystrstr(s5,s4));

  return 0;
}
