#include<iostream>>
using namespace std;
int main(){

    int n,t;
    int arr[100];
    int flag;
    cin >> t;
    int ifinal,jfinal,kfinal;
    while(t){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n-i-1;j++){
                int sum=0;
                sum += arr[i] + arr[j];
                for(int k=0;k<n;k++){
                    if(sum==arr[k]){
                        ifinal=i+1;
                        jfinal=j+1;
                        kfinal=k+1;
                        flag=1;
                    }
                }
            }
        }
    t--;
    if(flag==1){

            cout << ifinal << "," << jfinal << "," << kfinal << endl;
        }
    else{
    cout << "No Sequence Found"<<endl;
    }
    }
}

