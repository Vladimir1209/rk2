#include <iostream>
#include <vector>
using namespace std;

vector<int> func(vector<int> *a, vector<int> *b){
    vector<int> newvec;
    for(int i = 0; i < (*a).size(); ++i){
        newvec.push_back((*a)[i]);
    }
    for(int i = 0; i < (*b).size(); ++i){
        newvec.push_back((*b)[i]);
    }
    return newvec;
}

int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {10, 9, 8, 7, 6};
    vector<int> c = func(&a, &b);
    for(int i = 0; i < c.size(); ++i){
        cout << c[i] << endl;
    }
}
