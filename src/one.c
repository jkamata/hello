#include <stdio.h>
#include "two.h"


int main(int a,char *v[]){

  HANDLE h=NULL;
  h=test();
  prTest(h);
  delText(h);
  return 0;
}





