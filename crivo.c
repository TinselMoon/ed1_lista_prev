#include <math.h>
#include "list.h"

void crivo (int n) { 
  int i, sq = (int)sqrt(n);
  List *l = create ();
  for(i = 2; i <= n; i++){
    l = insert_back(l, i);
  }
    List *item = l;
    while(item->data <= sq){
        for(List *atual = item->next; atual != NULL; atual = atual->next){
            if(!(atual->data % item->data)){
                atual = atual->prev;
                remove_queue(l, atual->next->data);
            }
        }
        item = item->next;
    }
  print(l);
  destroy (l);
}   

int main () {
  int n = 30;
  crivo (n);
  return 0;
}
