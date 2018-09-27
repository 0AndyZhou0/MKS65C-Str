#include <stdio.h>

int mystrlen(char * str){
  int len = 0;
  while(*str++){
    len++;
  }
  return len;
}

int main(){
  char * s1 = "HeLlO";
  char s2[] = "HeLlO";
  char s3[256] = "HeLlO";

  printf("s1 = %s\ns2 = %s\ns3 = %s",s1,s2,s3);
  printf("strlen(s1)%d\nmystrlen(s1)%d\n",strlen(s1),mystrlen(s1));
  printf("strlen(s2)%d\nmystrlen(s2)%d\n",strlen(s2),mystrlen(s2));
  printf("strlen(s3)%d\nmystrlen(s3)%d\n",strlen(s3),mystrlen(s3));
}
