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




// kadanes algorithm
// sum of maximum subarray

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int currSum = 0;
    int maxSum = INT_MIN;

    for(int val : arr) {
        currSum += val;
        maxSum = max(maxSum, currSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    cout << "Maximum subarray sum = " << maxSum << endl;

    return 0;
}