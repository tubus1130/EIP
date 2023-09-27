#include <stdio.h>
#include <string.h>

int soojebi(char *p, int size){
  int i;
    
  if( p == NULL || size < 0 ){
    return -1;
  }
  
  for(i=0;i<size;i++){
    if( i%4 == 0) printf("%c", *p );
  }
  
  return 1;
}

int main(){
  char *pStr = "hello soojebi";
  int ret;
  
  ret = soojebi(pStr, strlen(pStr));
  if(ret < 0){
      printf("error in soojebi function");
      return -1;
  }
  
  return 0;
}
