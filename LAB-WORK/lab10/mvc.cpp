#include <bits/stdc++.h>

using namespace std;

class MVC
{
    int n,e;
    unordered_map<int,vector<int>> adj;
    vector<pair<int,int>> edges;
public:
    void randomizedRun()
    {
        vector<pair<int,int>> temp = edges;
        set<int> ans;
        while (temp.size() !=0)
        {
            int index = rand()% temp.size();
            auto selected = temp[index];
            ans.insert(selected.first);
            ans.insert(selected.second);
            for (int i = 0; i < temp.size(); i++)
            {
                if(temp[i].first == selected.first or temp[i].first == selected.second or temp[i].second == selected.first or temp[i].second == selected.second){
                    temp.erase(temp.begin()+i);
                    i--;
                }
            }
        }
        cout<<"MVC using Randomized Approximation : ";
        for(auto a : ans) {
            cout<<a<<" ";
        }
        cout<<endl;
    }
    int findMax(unordered_map<int,vector<int> >& temp){
        int index = 0;
        for(auto a :temp){
            if(temp[index].size() < a.second.size()){
                index = a.first;
            }
        }
        for(int  a:temp[index]){
            for (int i = 0; i < temp[a].size(); i++)
            {
                if(temp[a][i] == index){
                    temp[a].erase(temp[a].begin()+i);
                    break;
                }
            }
        }
        temp[index].clear();
        return index;
    }
    void greedyRun()
    {
        unordered_map<int,vector<int> > temp = adj;
        vector<pair<int,int> > tempe = edges; 
        vector<int> ans;
        while (tempe.size() != 0)
        {
            int index = findMax(temp);
            ans.push_back(index);
            for (int i = 0; i < tempe.size(); i++)
            {
                if(index == tempe[i].first){
                    tempe.erase(tempe.begin()+i);
                    i--;
                }else if(index == tempe[i].second){
                    tempe.erase(tempe.begin()+i);
                    i--;
                }
            }
        }
        cout<<"MVC using Greedy Approximation : ";
        for(auto a : ans) {
            cout<<a<<" ";
        }
        cout<<endl;
    }
    void takeInput()
    {
        cout<<"Enter No of vertices\n";
        cin>>n;
        cout<<"Enter No of edges\n";
        cin>>e;
        cout<<"Enter edges\n";
        for (int i = 0; i < e; i++)
        {
            int u,v;
            cin>>u>>v;
            edges.push_back({u,v});
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
};

int main()
{
    srand(time(0));
    MVC m;
    m.takeInput();
    m.randomizedRun();
    m.greedyRun();
}
