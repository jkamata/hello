#include <stdio.h>
#include <stdlib.h>
#include "two.h"

struct BBB {
  int a;
};

HANDLE test() {
  HANDLE ret = (HANDLE)malloc(sizeof(struct BBB));
  ret->a=111;
  return ret;
};

void prTest(HANDLE h) {
  int a = h->a;
  printf("%d\n",a);
}
