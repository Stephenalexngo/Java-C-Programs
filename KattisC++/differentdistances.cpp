#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vdb;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef pair<int,int> ii;
typedef stack<long long> sll;
typedef stack<long> sl;
typedef stack<char> sc;
typedef stack<int> si;
typedef stack<double> sdb;
typedef stack<string> ss;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

#define PI 3.14159265

int main() 
{ 
   // freopen("out.txt","wt",stdout);
	
   db x1,x2,y1,y2,p,ans;
   
   while(cin >> x1 >> x2 >> y1 >> y2 >> p, x1 != 0)
   {
   	  ans = (pow(abs(x1-y1),p))+(pow(abs(x2-y2),p));
   	  ans = pow(ans,1/p);
   
      printf("%.10lf\n",ans);	
   }
   	  
   return 0;
} 
