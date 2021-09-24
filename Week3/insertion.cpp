#include<iostream>
using namespace std;
int main(){
    int t,n;
    int arr[100];
    cin >> t;
    while(t){
        cin >> n;
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int shifts=0,comparison=0;
        int key=0,j;
        for(int i=1;i<n;i++){
            key=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j--;
                shifts++;
                comparison++;
            }
            arr[j+1]=key;
            comparison++;
        }
        for(int i=0;i<n;i++)
            cout << arr[i] << " ";
            cout << endl;
        cout << "Shifts = " << shifts << endl;
        cout << "Comparisons = " << comparison << endl;
        t--;
    }
}
