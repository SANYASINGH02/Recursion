
#include<bits/stdc++.h>
using namespace std;

int main()
{ 
#ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
    #endif
	
	int b=1,n=20;
  for(int i=2;i<=n;i++)
  	{if(i%2) 
  	  b=b&i;
  	  else b=b^i;
  	  cout<<i<<" "<<b<<endl;
  	}
	return 0;
}











int size,f=0; cin>>size;
int arr[size];
for(int i=0;i<size;i++)
	cin>>arr[i];

map<int,int> m;
int size=arr.size();
for(int i=0;i<size;i++)
{   int f=0;   
	m[arr[i]]++;
	if(m[arr[i]]>=2) continue;
		else answer.push_back(arr[i]);
}









int a=Point_calculateDistance;
int b=Point_calculateDistance;
int c=Point_calculateDistance;
if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))
	return yy






























/*void subsets(vector<string>& nums, int i, vector<string>& sub, vector<vector<string>>& subs) {
        subs.push_back(sub);
        for (int j = i; j < nums.size(); j++) {
            sub.push_back(nums[j]);
            subsets(nums, j + 1, sub, subs);
            sub.pop_back();
        }
    }
int main()
{
#ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
    #endif

	int n; cin>>n;
	string s,c=""; cin>>s;
	vector<string> nums;
	for(int i=0;i<s.size();i++)
	{   if(s[i]==',') {nums.push_back(c); c="";}
		else c+=s[i];
	}nums.push_back(c);
	int r=2;
vector<vector<string>> subs;
        vector<string> sub;
        subsets(nums, 0, sub, subs);
	for(auto x:subs[r]) cout<<x<<" ";

}

*/
/*
// utility function to form edge between two vertices
// source and dest
void add_edge(vector<int> adj[], int src, int dest)
{
	adj[src].push_back(dest);
	adj[dest].push_back(src);
}

// a modified version of BFS that stores predecessor
// of each vertex in array p
// and its distance from source in array d
bool BFS(vector<int> adj[], int src, int dest, int v,
		int pred[], int dist[])
{
	// a queue to maintain queue of vertices whose
	// adjacency list is to be scanned as per normal
	// DFS algorithm
	list<int> queue;

	// boolean array visited[] which stores the
	// information whether ith vertex is reached
	// at least once in the Breadth first search
	bool visited[v];

	// initially all vertices are unvisited
	// so v[i] for all i is false
	// and as no path is yet constructed
	// dist[i] for all i set to infinity
	for (int i = 0; i < v; i++) {
		visited[i] = false;
		dist[i] = INT_MAX;
		pred[i] = -1;
	}

	// now source is first to be visited and
	// distance from source to itself should be 0
	visited[src] = true;
	dist[src] = 0;
	queue.push_back(src);

	// standard BFS algorithm
	while (!queue.empty()) {
		int u = queue.front();
		queue.pop_front();
		for (int i = 0; i < adj[u].size(); i++) {
			if (visited[adj[u][i]] == false) {
				visited[adj[u][i]] = true;
				dist[adj[u][i]] = dist[u] + 1;
				pred[adj[u][i]] = u;
				queue.push_back(adj[u][i]);

				// We stop BFS when we find
				// destination.
				if (adj[u][i] == dest)
					return true;
			}
		}
	}

	return false;
}

// utility function to print the shortest distance
// between source vertex and destination vertex
void printShortestDistance(vector<int> adj[], int s,
						int dest, int v)
{
	// predecessor[i] array stores predecessor of
	// i and distance array stores distance of i
	// from s
	int pred[v], dist[v];

	if (BFS(adj, s, dest, v, pred, dist) == false) {
		cout << "Given source and destination"
			<< " are not connected";
		return;
	}

	// vector path stores the shortest path
	vector<int> path;
	int crawl = dest;
	path.push_back(crawl);
	while (pred[crawl] != -1) {
		path.push_back(pred[crawl]);
		crawl = pred[crawl];
	}

	// distance from source is in distance array
	cout << "Shortest path length is : "
		<< dist[dest];

	// printing path from source to destination
	cout << "\nPath is::\n";
	for (int i = path.size() - 1; i >= 0; i--)
		cout << path[i] << " ";
}

// Driver program to test above functions
int main()
{   
  #ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
    #endif
	// no. of vertices
	int v; cin>>v;
  char a; vector<int> adj[v];
	for(int i=0;i<v;i++)
	{ 
		/*char c[9]; int j=0;
		while(j<9 && c[j]!='\n')
		{
			cin>>c[j]; if(c[j]=='\n')
        break;
			adj[i+1].push_back(c[j]-'0');
			cout<<c[j]-'0'<<" ";
			j++;
		}*/int a;
	//	char name[8]; int input,count=0;
		//do{ cout<<a; cin>>a;}while(a);
	//	while (cin >> input)
   //     count++;
    //cout<<count<<endl;

	//	cout<<endl;
	

	

	/*
	int s, d; cin>>s>>d;
	printShortestDistance(adj, s, d, v);
	return 0;

*/