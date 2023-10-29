class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        int i,j,k;
        string cur;
        vector<vector<string>>ans;
        sort(products.begin(),products.end());
        for(i=0;i<searchWord.size();i++)
        {
            cur+=searchWord[i];
            vector<string>a;
            for(j=0;j<products.size();j++)
            {
                string now=products[j].substr(0,cur.size());
                if(now==cur)
                {
                    a.push_back(products[j]);
                }
                if(a.size()==3)
                {
                    break;
                }
            }

            ans.push_back(a);
        }
        return ans;
    }
};
