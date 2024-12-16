#include<iostream>
#include<vector>
#include<unordered_set>
#include<queue>
using namespace std;
int lengthOfLongestSubstring(string s) {
    unordered_set<int> hash_set;
    queue<int> container;
    int max_len = 0;
    int len = 0;
    for (char c : s)
    {
        if (hash_set.contains(c))
        {
            while (c != container.front())
            {
                hash_set.erase(container.front());
                container.pop();
                len--;
            }
            //hash_set.erase(container.front());
            container.pop();
            //len--;                
        }
        else
        {
            hash_set.insert(c);
            ++len;
            max_len = max(len, max_len);
        }
        container.push(c);
    }
    return max_len;
}
int main()
{
	//Entity entity("jih");
	//entity.PrintStr();
	
    //insert({ {1, 3},{6, 9} }, { 2,5 });
    vector<vector<int>> test;
    lengthOfLongestSubstring("abcabcbb");
}