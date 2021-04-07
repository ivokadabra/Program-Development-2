typedef struct stack stack_t;
static stack_t *createList();
static char isEmpty(stack_t *s);
static void push(stack_t *s,float value);
static int isFull(stack_t *s);
static void increase(stack_t *s);
static float top(stack_t *s);
static void pop (stack_t* s);
static void destroyStack(stack_t *s);
static void operation(stack_t *s,char c);
static void toScreen(stack_t *s);
