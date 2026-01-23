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
        }else{
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
    LRUCache cache(2);

    cache.put(1,1);
    cache.put(2,2);
    cout<<cache.get(1)<<endl;

    cache.put(3,3);
    cout<<cache.get(2)<<endl;

    cache.put(4,4);
    cout<<cache.get(1)<<endl;
    cout<<cache.get(3)<<endl;
    cout<<cache.get(4)<<endl;

    return 0;
}