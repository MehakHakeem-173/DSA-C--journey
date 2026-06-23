#include<bits/stdc++.h>
using namespace std;


//class to find the frequency
class countFrequency{
public:

//function to find the frequency
void countFreq(int arr[], int n){

    //vector array to store the counted elements
    vector<bool> visited(n, false);

    //initialize maximum and miimum frequency and elements variable
    int minfreq = n, maxfreq = 0;
    int minele = 0, maxele = 0;

    //loop to travel through the array
    for(int i=0; i<n; i++){

        //if the element is alreay counted, continue
        if(visited[i] == true)
            continue;

        //count the frequency
        int count = 1;

        //loop to find the similar elements
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        
        }

        //finding maximim frequency and its element
        if(count > maxfreq){
            maxele = arr[i];
            maxfreq = count;
        }

        //finding minimum frequency and its elelment
        if(count < minfreq){
            minele = arr[i];
            minfreq = count;
            
        }

    }
    
    //printing the result
        cout << "maximum frequency is " << maxfreq << " of the element " << maxele << endl;
        cout << "minimum frequency is " << minfreq << " of the element " << minele << endl;

}

};

int main(){

    countFrequency fc;

    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    fc.countFreq(arr, n);
    
}