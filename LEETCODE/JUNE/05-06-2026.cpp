// 3751. Total Waviness of Numbers in Range I



class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int x = 0;
        int to = 0;
        for (int i = num1; i <= num2; i++) {
            string s = to_string(i);
            if (s.size() < 3)
                continue;
            int y = 0;
            for (int i = 1; i + 1 < s.size(); i++) {
                int a = s[i - 1] - '0';
                int b = s[i] - '0';
                int c = s[i + 1] - '0';
                if (b > a && b > c)
                    y++;
                else if (b < a && b < c)
                    y++;
            }
            x += y;
            to += y;
        }
        return to;
    }
};
