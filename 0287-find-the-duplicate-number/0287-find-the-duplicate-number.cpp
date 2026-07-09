class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int slow = 0, fast = 0;
        while(true){
            slow = a[slow];
            fast = a[fast];
            fast = a[fast];
            if(slow==fast){ //means cycle mil gyi
                slow = 0;
                while(fast!=slow){
                    slow = a[slow];
                    fast = a[fast];
                }return slow;
            }
        }return -1;
    }
};