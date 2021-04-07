typedef struct queue pqueue_t;
static void pqinsert(pqueue_t *pq, float p);
static void sortHeap(pqueue_t *pq);
static float* toString(pqueue_t *pq);
static void pq_destroy(pqueue_t *pq);
static pqueue_t* pqcreate();
static void swap(int *x,int *y);
static int checkSize(pqueue_t *pq);
