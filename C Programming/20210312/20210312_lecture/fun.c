#include "ll.h"
void init(){
    start = NULL;
};
int add(int n){
    node_t *p = start;
    start = (node_t*)malloc(sizeof(node_t));
    if (!start) return -1;
    start->data = n;
    start->next = p;
    return 0;
}
int addAfter(int n, int k){//n – е добавяната стойност
    node_t *q;
    node_t *p = start;//ptmestvame p, a ne start, za da ne zagubim na4aloto.
    while(p->data != k)
        p = p->next;
    q = (node_t *)malloc(sizeof(node_t));
    if(!q)return -1;
    q->data = n;
    q->next = p->next;
    p->next = q;    
    return 0;
}
int addPrev(int n, int k){
    node_t *q;
    node_t *p = start;
    while(p->data != k)
        p = p->next;
    q = (node_t *)malloc(sizeof(node_t));
    if(!q)return -1;
    q->next = p->next;
    q->data = p->data;
    p->next = q;
    p->data = n;
    return 0;
}
int addEnd(int n){
    node_t *p = start;
    node_t *q = (node_t *)malloc(sizeof(node_t));//zadelqme mqsto za novia element
    if(!q)return -1;
    while(p->next != NULL)
        p = p->next;
    p->next = q;
    q->data = n;//zadavame dannite v elementa
    q->next = NULL;//elementa 6te bade na kraq  
    return 0;
}
void printList(){
    node_t *ptr = start;
    while(ptr != NULL){
        printf("%d, ",ptr->data);
        ptr = ptr->next;
    }
}
void printAfter(node_t *curr){
    node_t *p = curr;
    while(p != NULL){
        printf("%d, ", p->data);
        p = p->next;
    }
}
void printCurr(node_t *curr){
    node_t *p = curr;
    printf("\ncurr = %d\n", p->data);
}
int dellFirst(int *n){
    node_t *p = start;
    if(NULL != start){
        *n = start->data;
        start = start->next;
        free(p);
        return 0;
    }else
        return 1;//Spisaka e prazen
}
node_t* dellElemReturnAfter(int *n, int k){
    node_t *q;
    node_t *p = start;
    while(p->data != k){
        if(p->next == NULL){
            return NULL;
        }else{
            q = p;
            /*dokato ne namerim tarseniq element
             sas stojnost k vzimame sledva6tiq*/
            p = p->next;
        }
    }
    *n = p->data;
    q->next = p->next;
    free(p);
    return  q->next;
}
void dellEnd(int *n){
    node_t *q;
    node_t *p = start;
    while(p->next != NULL){
        q = p;
        p = p->next;
    }
    *n = p->data;
    q->next = NULL;
    free(p);
}
node_t* search_iter(int k){
    node_t *p = start;
    while(p->data != k){
        if(p->next == NULL){
            return NULL;
        }else{
            p = p->next;
        }
    }
    return p;
}