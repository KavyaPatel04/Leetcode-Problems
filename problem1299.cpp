class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int r = -1;
        for(int i = n-1; i>=0; --i){
            int current = arr[i];
            arr[i] = r;
            r = max(r, current);
        }
        return arr;
    }
};