#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    multimap<int,string> mm = {{1,"Geeks"},{2,"For"},{3,"Geeks"}};

    mm.insert({4,"C++"});
    mm.emplace(5,"java");

    auto it = next(mm.begin(),3);
    cout<<it->first << " : "<<it-> second<<endl;
    return 0;
}