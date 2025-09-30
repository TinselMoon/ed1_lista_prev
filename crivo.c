#include <math.h>
#include "list.h"

void crivo (int n) { 
  int i, sq = sqrt(n);       	
  List *l = create ();
  for(i = 2; i <= n; i++){
    l = insert_back(l, i);
  }
  /*for(i = 2; i < n/2; i++){
    List *tmp = l;
    while(tmp != NULL){
      tmp = 
    }
  }*/
  print(l);
  destroy (l);
}   

int main () {
  int n = 30;
  crivo (n);
  return 0;
} 
