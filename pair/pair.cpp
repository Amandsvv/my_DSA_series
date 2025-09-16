#include<iostream>
#include<vector>

using namespace std;

int main (){
    pair<int,int> p = {1,3};
    cout<<"first element is : "<<p.first<<endl;
    cout<<"second element is : "<<p.second<<endl;

    //like this we can also make a pair of pair

    pair <int,pair<int,int>> p1 = {1,{2,3}};
    cout<<p1.first<<endl; // first value as element
    cout<<p1.second.first<<endl; //second value's first value 
    cout<<p1.second.second<<endl; //second value's second value 

    // like this we may also create an vector of pairs

    vector<pair<int,int>> el = {{1,3},{3,5},{5,7}};

    for(auto p : el){
        cout<<p.first<<" "<<p.second<<endl;
    }

    // we can insert values in these also 

    el.push_back({7,9}); // we have t0o implies here that we are apssing a pair
    el.emplace_back(7,9); // but emplace back automatically create in plpace objects at time of insertion
    
    return 0;
}