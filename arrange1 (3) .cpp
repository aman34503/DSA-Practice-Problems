#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){

      if(arr[j]==i)
      {
        int temp=arr[j];
        arr[j]= arr[i];
        arr[i]=temp;
        break;
      }
    }
  }
    for(int i=0; i<n; i++){
      if(arr[i] != i){
        arr[i] = -1;
      }
    }

    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }

  return 0;
}



// Optimize Solution - Time complexity o(n).

void fixArray(int arr[], int n)
{
 
    for (int i = 0; i < n;)
    {
        if (arr[i] >= 0 && arr[i] != i)
            arr[arr[i]] = (arr[arr[i]] + arr[i])
                          - (arr[i] = arr[arr[i]]);
        else
            i++;
    }
}

// Another Approach 

 int i=0;
    while(i<n){
        if(arr[i] == -1 || arr[i] == i)
            i++;
        else {
            int temp = arr[i];
            arr[i] = arr[arr[i]];
            arr[temp] = temp; 
        }
    }
    return arr;
