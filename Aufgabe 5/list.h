class Heap{

private:
int*_value;
  int head;
  int next;
  int _size;
  int temp;
  int after;

 public :
  Heap(int value);
  ~Heap();
  void _insert(int data);
  void sortH();
  int minimum();
  void extractMin();
  void toScreen();
  bool getError();
   bool isFull();
   void increase();
   void sortHeap();
   void _swap (int *x,int *y);
   char test01(void);
   char test02();
   char test03();
};

