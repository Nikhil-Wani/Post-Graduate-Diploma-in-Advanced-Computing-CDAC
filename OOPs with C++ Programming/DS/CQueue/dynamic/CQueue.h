#include<stdexcept>
using namespace std;

template<class T>
class CQueue
{
 T* arr;
 int front;
 int rear;
 int size;
public:
 CQueue(int s);
~CQueue();
 bool AddQ(T ele);
 T DelQ() throw (runtime_error);
 bool IsEmpty();
 bool IsFull();
};
