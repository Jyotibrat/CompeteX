class Solution {
public:
    int maxValidSplits(vector<int>& nums) {
        vector<int> v=nums;
        int n= v.size(),ans=0;

        for(auto i{-2}; ++i<n;){
            vector<int> a;
            for(auto j{-1}; ++j<n;){
                if(j!=i) a.push_back(v[j]);
            }
            int sz=a.size();
            if(sz<2)continue;

            vector<int> p(sz);
            vector<int> s(sz);
            p[0] = a[0];
            for(auto j{0}; ++j<sz;) p[j]=gcd(p[j-1], a[j]);

            s[sz-1]=a[sz-1];
            for(auto j{sz-2}; j>=0; --j) s[j]=gcd(s[j+1], a[j]);

            int c=0;

            for(auto j{-1}; ++j<sz-1;){
                if(p[j] == s[j+1]) c++;
            }
            ans=max(ans,c);
        }
        return ans;
    }
};