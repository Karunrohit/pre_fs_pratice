
#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> parent;

int findParent(int a){
    if(parent.find(a)->second==a){
        return a;
    }
    return parent.find(a)->second = findParent(parent.find(a)->second);
}
void union1(int a,int b){
    a = findParent(a);
    b = findParent(b);
    if(a<b){
        parent.find(b)->second = a;
    }
    else{
        parent.find(a)->second = b;
    }
}
int main(){
    int num;
    cin>>num;
    vector<int> arr;
    for (int i = 0; i < num; i++) {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for (int i = 0; i < num; i++) {
        parent.insert({arr[i],arr[i]});
    }
    for (int i = 0; i < arr.size(); i++) {
        if(parent.find(arr[i]-1)!=parent.end()){
            union1(arr[i]-1,arr[i]);
        }
        if(parent.find(arr[i]+1)!=parent.end()){
            union1(arr[i]+1,arr[i]);
        }
    }
    map<int,int> m;
    for(int i=0;i<arr.size();i++){
        int x=parent.find(arr[i])->second;
        if(m.find(x)==m.end()){
            m.insert({x,1});
        }
        else{
            m.find(x)->second++;
        }
    }
    int count=0;
    for(auto i=m.begin();i!=m.end();i++){
        if(count<i->second){
            count=i->second;
        }
    }
    cout<<count;
}















//int main(){
//    int n;
//    cin >> n;
//    vector<int> arr;
//    for (int i = 0; i < n; i++) {
//        int temp;
//        cin >> temp;
//        arr.push_back(temp);
//    }
//    for(int i=0;i<n;i++){
//        parent.insert({arr[i],arr[i]});
//    }
//    for (int i=0;i<n;i++) {
//        if (parent.find(arr[i] - 1) != parent.end()) {
//            union1(arr[i] - 1, arr[i]);
//
//        }
//        if (parent.find(arr[i] + 1) != parent.end()) {
//            union1(arr[i] + 1, arr[i]);
//
//        }
//    }
//        map<int, int> m;
//
//        for (int i = 0; i < arr.size(); i++) {
//            cout << parent.find(arr[i])->second << " ";
//            int x = parent.find(arr[i])->second;
//            if (m.find(x) == m.end()) {
//                m.insert({x, 1});
//            }
//            else {
//                m.find(x)->second++;
//            }
//        }
//        int res = 0;
//        for (auto itr = m.begin(); itr != m.end(); itr++) {
//            if (itr->second > res) {
//                res = itr->second;
//            }
//        }
//
//        cout << res << endl;
//    }

//int main(){
//    int num;
//    cin>>num;
//    vector<int> arr;
//    for(int i=0;i<num;i++){
//        int temo;
//        cin>>temo;
//        arr.push_back(temo);
//    }
//    for(int i=0;i<num;i++){
//        parent.insert({arr[i],arr[i]});
//    }
//    for (int i=0;i<num;i++) {
//        if (parent.find(arr[i] + 1) != parent.end()) {
//            union1(arr[i] + 1, arr[i]);
//
//        }
//    }
//    map<int,int> m;
//    for (int i = 0; i < arr.size(); i++) {
//        cout << parent.find(arr[i])->second << " ";
//        int x=parent.find(arr[i])->second;
//        if(m.find(x)!=m.end()){
//           m.find(x)->second++;
//        }
//        else{
//            m.insert({x,1});
//        }
//    }
//    int res=0;
//    for(auto i=m.begin();i!=m.end();i++){
//            if(i->second>res){
//                res=i->second;
//            }
//    }
//    cout<<res;
//
//}