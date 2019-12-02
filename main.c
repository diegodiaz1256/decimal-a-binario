#include <string.h>
#include <math.h>
#include <stdio.h>
int decimal (char * a, int len);
int main(void) {
  char array[50];
  scanf("%s",array);
  int f =strlen(array);
  int o=decimal(array,f);
  printf("%d",o);
  return 0;
  binario(o);
}
int decimal(char * a,int len){
  if(len<0){
    return 0;
  }
  else if('0'!=*a){
    a++;
    return pow(2,len-1)+decimal(a,len-1);
  }else if('0'==*a){
    a++;
    return decimal(a,len-1);
  }
}
