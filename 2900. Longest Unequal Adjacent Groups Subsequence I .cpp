class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
          vector<string>ans;
          int v;
          v=groups[0];
          ans.push_back(words[0]);
          for(int i=1;i<groups.size();i++)
          {
              if(groups[i]!=v)
              {
                  v=groups[i];
                  ans.push_back(words[i]);
              }

          }
          return ans;
    }
};
