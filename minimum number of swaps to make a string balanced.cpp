class Solution {
public:
   int minSwaps(string str) {
    string NEW = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '[') {
            NEW. push_back('[');
            }
        else {
            if (!NEW.empty() && NEW.back() == '[') {
                NEW.pop_back();
                }
            else{
                NEW. push_back(str[i]);
                }
            }
        }
    cout << NEW<< "\n";
    int open = NEW.size() / 2;
    return ((open + 1) / 2);
   }

};
