#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector <int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set < int > s;
    sort(nums2.begin(), nums2.end());
    for(int i = 0; i < nums1.size() ; i++) {
        int l = 0;
        int r = nums2.size() - 1; 
        while(l <= r) {
            int mid = (l + r)/2;
            if(nums2[mid] == nums1[i]) {
                s.insert(nums1[i]);
                break;
            }
            if(nums2[mid] < nums1[i]) l = mid + 1;
            else r = mid - 1;
        }
    }
    vector < int > v(s.begin(), s.end());
    return v;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums1 = {4,9,5}, nums2 = {9,4,9,8,4};
    vector < int > d;
    d = intersection(nums1, nums2);
    for( auto val : d) {
       cout << val << ' ';
    }
    return 0;
}