#include<stdexcept>
using namespace std;
#define SIZE 5
template<class T>
class Queue
{
 T arr[SIZE];
 int rear;
 int front;

public:
Queue();
~Queue();
bool AddQ(T ele);
T DelQ()throw (runtime_error);
bool IsFull();
bool IsEmpty();
};
