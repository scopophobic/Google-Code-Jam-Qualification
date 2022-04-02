#include<bits/stdc++.h>
#define he first
#define no second
#define r push_back
using namespace std;

long long a[100009], b[100009], c[100009], d[100009];
vector<int> e[100009];
queue<int> f;

void solve()
{
  long long g, h, m, o, p = 0;
  cin >> g;
  for(int q=0; q<=g; q++)
  {
    a[q] = b[q] = c[q] = d[q] = 0;
    e[q].clear();
  }
  for(int q=1; q<=g; q++) cin>>a[q];
  for(int q=1; q<=g; q++)
  {
    cin>>h;
    b[q] = h;
    e[h].r(q);
    d[h]++;
  }
  for(int q=0; q<=g; q++) if(d[q] == 0) f.push(q);
  while(!f.empty())
  {
    h = f.front();
    f.pop();
    m = 1<<30;
    for(int q=0; q<e[h].size(); q++)
    {
      if(c[e[h][q]] < m)
      {
        m = c[e[h][q]];
        o = q;
      }
    }
    if(m == 1<<30) m = 0;
    for(int q=0; q<e[h].size(); q++) if(q != o) p += c[e[h][q]];
    c[h] = max(a[h], m);
    d[b[h]]--;
    if(d[b[h]] == 0) f.push(b[h]);
  }
  cout<<p + c[0]<<"\n";
  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int u;
  cin>>u;
  for(int q=1; q<=u; q++)
  {
    cout<<"Case #"<<q<<": ";
    solve();
  }
  return 0;
}
