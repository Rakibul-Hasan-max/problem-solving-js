// // brute force approch, algorithm
// //sum of maximum subarray
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main() {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};

//     int maxSum = INT_MIN;

//     for(int st = 0; st < n; st++) {
//         int currSum = 0;
//         for(int end = st; end<n; end++){
//             currSum += arr[end];
//             maxSum = max(maxSum, currSum);
//         }
//     }

//     cout << "Maximum subarray sum is: " << maxSum << endl;

//     return 0;
// }




// // kadanes algorithm
// // sum of maximum subarray
// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};

//     int currSum = 0;
//     int maxSum = INT_MIN;

//     for(int i = 0; i < n; i++) {
//         currSum += arr[i];

//         maxSum = max(maxSum, currSum);

//         if(currSum < 0) {
//             currSum = 0;
//         }
//     }

//     cout << "Maximum subarray sum = " << maxSum << endl;

//     return 0;
// }




// // kadanes algorithm
// // sum of maximum subarray

// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main() {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};

//     int currSum = 0;
//     int maxSum = INT_MIN;

//     for(int val : arr) {
//         currSum += val;
//         maxSum = max(maxSum, currSum);

//         if(currSum < 0) {
//             currSum = 0;
//         }
//     }

//     cout << "Maximum subarray sum = " << maxSum << endl;

//     return 0;
// }





// //pair sum problem using brute force approach
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairSum(vector<int> nums, int target) {
//     vector<int> ans;
//     int n = nums.size();
    
//     for(int i = 0; i<n; i++) {
//         for(int j = i+1; j<n; j++) {
//             if(nums[i] + nums[j] == target) {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }

//     return ans;
// }

// int main() {

//     vector<int> nums = {2, 7, 11, 15};
//     int target = 13;

//     vector<int> ans = pairSum(nums, target);
//     cout << ans[0] << ", " << ans[1] << endl;
//     return 0;
// }




//pair sum problem using 2 pointer approach
#include <iostream>     //0(n)
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    
    int i = 0, j = n-1;

    while(i < j) {
        int pairSum = nums[i] + nums[j];
        if(pairSum == target) {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if(pairSum < target) {
            i++;
        }
        else {
            j--;
        }
    }

    return ans;
}

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}

