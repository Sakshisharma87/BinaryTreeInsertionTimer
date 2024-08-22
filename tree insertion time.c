# include <stdio.h>
# include <stdlib.h>
# include <time.h>
struct node {
   int data;
   struct node *left, *right;
};

struct queue {
   struct node *add;
};

struct node *create_node(int data) {
   struct node *newNode = (struct node *)malloc(sizeof(struct node));
   newNode->data = data;
   newNode->left = newNode->right = NULL;
   return newNode;
}

struct queue *create_queue(int n) {
   struct queue *que = (struct queue *)malloc(n * sizeof(struct queue));
   int i;
   for ( i = 0; i < n; i++) {
       int data;
       printf("Enter data for node %d: ", i + 1);
       scanf("%d", &data);
       que[i].add = create_node(data);
   }
   return que;
}

void insert_node(struct queue que[], int n) {
   int i;
	for ( i = 0; i < n; i++) {
       struct node *current = que[i].add;
       if ((2 * i + 1) < n) {
           current->left = que[2 * i + 1].add;
       }
       if ((2 * i + 2) < n) {
           current->right = que[2 * i + 2].add;
       }
   }
}

int main() {
	
   int i, n; 
   printf("enter number of nodes of tree:\n");
   scanf("%d",&n);
   clock_t start,end;
   
    start=clock();
   struct queue *arr = create_queue(n);
   insert_node(arr, n);
   end=clock();

   double time=((double)(end-start))/CLOCKS_PER_SEC;
   printf("Time taken to insert %d nodes:-\n",n);
   printf("%f seconds",time);
   
   struct node *root = arr[0].add;


   printf("\n");

   for ( i = 0; i < n; i++) {
       free(arr[i].add);
   }
   free(arr);
   return 0;
}

