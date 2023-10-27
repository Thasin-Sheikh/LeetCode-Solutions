class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {

        vector<string>ans;
        sort(folder.begin(),folder.end());
        for(int i=0;i<folder.size();i++)
        {
            if(ans.size()==0)
            {
                ans.push_back(folder[i]);
            }
            else
            {
                string cur=ans.back();
                string now=folder[i].substr(0,cur.size());
                if(cur==now&&folder[i][cur.size()]=='/')
                {
                    continue;
                }
                else

                {
                    ans.push_back(folder[i]);
                }
            }
        }
        return ans;
    }
};
