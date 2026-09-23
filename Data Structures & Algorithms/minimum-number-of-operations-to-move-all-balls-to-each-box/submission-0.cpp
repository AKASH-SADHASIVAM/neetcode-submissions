class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int>result(n , 0);
        for(int i = 0;i<n;i++){
            int count = 0;
            for(int j = 0;j<n;j++){
                if(boxes[j] == '1'){
                    count += abs(j-i);
                }
            }

            result[i] = count;
        }

        return result;
    }
};

// 0 1 2
// 1 1 0
// 