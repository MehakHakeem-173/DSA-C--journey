 #include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m){

        //vector array to store the Union
        vector<int> Union;

        //initialize two pointers for both arrays
        int i=0, j=0;

        //while both arrays reach the end
        while(i<n && j<m){

            //if element of array 1 is less then array2 
            if(arr1[i] < arr2[j]){
                if (Union.empty() || Union.back() != arr1[i]){
                    //add the element to Union
                    Union.push_back(arr1[i]);
                    //increment i
                    i++;
                }
            }

            //if index of array 2 is greather then do the same with array 2 instead
            else if(arr2[j] < arr1[i]){
                if(Union.empty() || Union.back() != arr2[i]){
                    Union.push_back(arr2[i]);
                    j++;
                }
            }

            //or if both arrays has the same element then take from one array and increment both
            else{
                if(Union.empty() || Union.back() != arr1[i]){
                Union.push_back(arr1[i]);
                i++, j++;
                }
            }

            while(i < n){
                if(Union.empty() || Union.back() != arr1[i]){
                    Union.push_back(arr1[i]);
                    i++;
                }
            }

            while(j < m){
                if(Union.empty() || Union.back() != arr2[j]){
                    j++;
                }
            }
        }
        return Union;
    }
};

int main (){
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    int n = 10, m = 7;

    Solution obj;
    vector<int> result = obj.findUnion(arr1, arr2, n, m);
    cout << "union of array 1 and array 2 : " << endl;
    for (int val : result)
    cout << val << " ";
    return 0;
}