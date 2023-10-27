class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        map<string,int>mp;
        vector<string>ans;
        vector<pair<int,int>>f;
        for(int i=0;i<folder.size();i++)
        {
            f.push_back({folder[i].size(),i});
        }
        sort(f.begin(),f.end());
        for(int i=0;i<f.size();i++)
        {
            string cur=folder[f[i].second],now;
            int c=0;
            string dhur;
            dhur=cur;
            while(dhur.size())
            {
                if(mp[dhur])
                {
                    c++;
                    break;
                }
                while(dhur.back()!='/')
                {
                    dhur.pop_back();
                }
                dhur.pop_back();
            }
            mp[cur]++;
            if(c==0)
            {

                ans.push_back(cur);

            }
        }
        return ans;
    }
};
