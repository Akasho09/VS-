#include <stdio.h>
#include <stdlib.h>
// #include <queue>

struct queue {
  int data ;
  int front ;
  int rear;
  int *array;
};
void enqueue ( struct queue *q,int d) {
q->array[q->front]=d;
q->front++;
}
int main (){
int n;
scanf ("%d",&n);
  //  queue <int > q;
struct queue q1;
int*array= (int*)malloc (n*sizeof(q1));
q1.front =q1.rear =-1;
int t=sizeof (q1);
printf ("%d\n",t);
q1.data=8;
printf ("%d\n",q1.data);
enqueue (&q1,10);
printf ("%d\n",q1.data);
q1.front--;
printf ("%d\n",q1.data);
}