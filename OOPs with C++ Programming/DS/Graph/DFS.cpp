//To find the BFS and DFS of the given graph
#include<stack>
#include<queue>
#include<iostream>
using namespace std;

class Graph
{

int a[10][10],vertex[10],n,e;
stack<int> stk;
queue<int> q;

public:

void accept()
{

	int i,j,k;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		a[i][j]=0;
		}
	}

	cout<<"ENTER NO OF VERTICES & EDGES OF UNDIRECTED GRAPH : ";
	cin>>n>>e;
	cout<<"\nENTER EDGES AS PAIR OF VERTICES"<<endl;
	for(k=1;k<=e;k++)
		{
		cout<<"\tEDGE"<<k<<" =>";
		cin>>i>>j;
		//for undirected graph
		a[i-1][j-1]=1;
		}
}
int adjvertex(int i)
{
for(int j=0;j<n;j++)
	if(a[i][j]==1&&vertex[j]==0)
		return j;
	return n;
}

int  visitall()
{

for(int i=0;i<n;i++)
	if(vertex[i]==0)
		return 0;
	return 1;
}

/*FUNCTION FOR BFS*/
void bfs()
{
int i,j,k,cur=0;//current vertex is starting vertex
for(i=0;i<n;i++)
	vertex[i]=0;//not visited
cout<<"BFS path => V "<<cur+1<<"\t";
q.push(cur);
vertex[cur]=1;//marking visited vertex
	while(!visitall())
		{
		if(q.empty())
			{
			cout<<"\nGRAPH IS DISCONNECTED";
			break;
			}
		cur=q.front();
		q.pop();
		//visit all vertices which are adjacent to current vertex
		for(j=0;j<n;j++)
			{
			//adjecent are not visited
			if(a[cur][j]==1&&vertex[j]==0)
				{
				cout<<"V"<<j+1;
				q.push(j);
				//marking visited vertex
				vertex[j]=1;
				}
			}
		}
}

/*FUNCTION FOR DFS*/
void dfs()
{
int i,j,k,cur=0;//current vertex is startting vertex
for(i=0;i<n;i++)
	vertex[i]=0;//not visited
cout<<"DFS path => V"<<cur+1;
stk.push(cur);
vertex[cur]=1;//marking visited vertex
	while(!visitall())
		{
		do
			{
			cur=adjvertex(stk.top());
			if(cur==n) stk.pop();
			}
		while(cur==n&&!stk.empty());
		if(stk.empty())
			{
			cout<<"\nGRAPH IS DISCONNECTED";
			break;
			}
		if(cur!=n)
			{
			cout<<" V "<<cur+1;
			stk.push(cur);
			vertex[cur]=1;//marking visited vertex
			}
		}
}
};
/*MAIN PROGRAM*/
int  main()
{

	Graph g;
	g.accept();
	g.dfs();
//	g.bfs();
	return 0;
}



