#define SIZE 5
#include<stdexcept>
using namespace std;

template<class T>
class CQueue
{
 T arr[SIZE];
 int front;
 int rear;
public:
 CQueue();
~CQueue();
 bool AddQ(T ele);
 T DelQ() throw (runtime_error);
 bool IsEmpty();
 bool IsFull();
};
