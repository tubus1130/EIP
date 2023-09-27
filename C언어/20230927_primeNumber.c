#include <stdio.h>
void main() {
  int a[30];
  int i, j, count=0;

  for(i=0; i<30; i++) a[i] = i+1;

  a[0] = 0;

  for(i=2; i<=30; i++){
	  if(a[i-1] == 0)
		  continue;

	  for(j=i+1; j<=30; j++){
		  if(j % i == 0)
			a[j-1] = 0;
	  }
  }

  for(i=0; i<30; i++){
	  if(a[i] != 0)
		  count++;
  }

  printf("%d", count);
}
