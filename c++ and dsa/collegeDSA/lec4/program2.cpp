#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vector1;
    vector<int> vector2(5);//all 5 elements pf the vector will be initialised to 0
    for(int i=0; i<5; i++){
        cout << vector2[i] << " ";
    }
    cout << endl;
    vector<int> vector3(5,10);
    vector3.push_back(50);
    for(int i=0; i<6; i++){
        cout << vector3[i] << " ";
    }
    cout << endl;
    
    swap(vector3[4], vector3[5]);
    for(int i=0; i<6; i++){
        cout << vector3[i] << " ";
    }
    
    cout << endl;
    int freq = count(vector3.begin(), vector3.end(), 10);
    cout << freq << endl;
    
    vector3.erase(vector3.begin() + 4);
    for(int j:vector3){
        cout << j << " ";
    }
    cout << endl;
    
    vector3.insert(vector3.begin()+3, 60);
    for(int K:vector3){
        cout << K << " ";
    }
    
    cout << endl;
    
    int idx = find(vector3.begin(), vector3.end(), 20) - vector3.begin();//index value of the required element will be returned else size of the vector will be returned
    cout << idx << endl;

    vector3[0] = 40;
    reverse(vector3.begin(), vector3.end());

    for(int m:vector3){
        cout << m << " ";
    }
    cout << endl;
    
    int sum = accumulate(vector3.begin(), vector3.end(), 0);
    int max = *max_element(vector3.begin(), vector3.end());
    int min = *min_element(vector3.begin(), vector3.end());

    cout << sum << endl << max << endl << min << endl;

    vector<int> vector4(10, 4);
    vector<int> new_vec(vector4.begin()+2, vector4.begin()+5);

    for(int n:new_vec){
        cout << n << " ";
    }
    
}