class Solution {
public:
    string countAndSay(int n) {
        string current = "1";

        for (int term = 1; term < n; ++term) {
            string next;
            int i = 0;

            while (i < static_cast<int>(current.size())) {
                int j = i;

                while (j < static_cast<int>(current.size()) &&
                       current[j] == current[i]) {
                    ++j;
                }

                next += to_string(j - i);
                next += current[i];
                i = j;
            }

            current = move(next);
        }

        return current;
    }
};
