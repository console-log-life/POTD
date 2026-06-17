// 3612. Process String with Special Operations I



class Solution {
public:
    string processStr(string s) {
        string res;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '*'){
                if(!res.empty())res.pop_back();
            }else if(s[i] == '#'){
                if(!res.empty()){
                    res += res;
                }
            }else if(s[i] == '%'){
                reverse(res.begin(), res.end());
            }else{
                res.push_back(s[i]);
            }
        }
        return res;
    }
};
