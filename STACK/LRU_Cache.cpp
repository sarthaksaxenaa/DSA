#include <bits/stdc++.h>
using namespace std;

class LRUCache {
    int cap;
    list<pair<int,int>> l;
    unordered_map<int,list<pair<int,int>>::iterator> mp;
public:
    LRUCache(int capacity){
        cap=capacity;
    }

    int get(int key){
        if(mp.find(key)==mp.end()) return -1;
        l.splice(l.begin(),l,mp[key]);
        return mp[key]->second;
    }

    void put(int key,int value){
        if(mp.find(key)!=mp.end()){
            mp[key]->second=value;
            l.splice(l.begin(),l,mp[key]);
        } else {
            if(l.size()==cap){
                mp.erase(l.back().first);
                l.pop_back();
            }
            l.push_front({key,value});
            mp[key]=l.begin();
        }
    }
};

int main(){
    int capacity,q;
    cin>>capacity>>q;
    LRUCache cache(capacity);
    while(q--){
        string op;
        cin>>op;
        if(op=="put"){
            int k,v;
            cin>>k>>v;
            cache.put(k,v);
        } else {
            int k;
            cin>>k;
            cout<<cache.get(k)<<" ";
        }
    }
    return 0;
}