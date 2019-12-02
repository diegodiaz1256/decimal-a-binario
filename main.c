#include <string.h>
#include <math.h>
#include <stdio.h>
void binario (int num);
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
    printf("%c\n",*a);
    a++;
    return pow(2,len-1)+decimal(a,len-1);
  }else if('0'==*a){
    a++;
    return decimal(a,len-1);
  }
}
void binario(int num){
   int aux;
   
  if(num==0){
    return;
  }
  aux=num%2;
  num=num/2;
  binario(num);
  printf("%d\n",aux);
}
