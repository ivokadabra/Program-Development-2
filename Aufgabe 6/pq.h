
template <class T>
class Pq{
private:
int value,priority,counter;
T*arr;
public:
Pq();
~Pq();
int extractMin();
void _insert(int val,int priority);
void _print();
void pq_removed(int a);
void pq_decreaseKey(int prir,int a);
};
