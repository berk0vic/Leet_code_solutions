class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int t = nums1.size() + nums2.size();
        int arr[2000];

                for (int i = 0; i < nums1.size(); i++) {
                    arr[i] = nums1[i];
                }
                for (int i = nums1.size(); i < t; i++) {
                    arr[i] = nums2[i - nums1.size()];
                }
                
                sort(arr, arr + nums1.size() + nums2.size());
                
                if (t % 2 == 0) {
                    return (arr[(t / 2 ) - 1] + arr[(t / 2 )]) / 2.0;
                }
                else if (t % 2 == 1) {
                    return arr[((t + 1) / 2) - 1];
                }
                else {
                    return {};
                }               
    }
};
