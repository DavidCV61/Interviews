#include <bits/stdc++.h>
 
 using namespace  std;
int lower_bound(vector<int> arr,int k){



	int s=0;
	int e=arr.size()-1;
	int ans=-1;
	while(s<=e){

		int mid=(s+e)/2;
		if(arr[mid]==k) {
			ans=mid;
			e=mid-1;
		}else if(arr[mid]>k){
			e=mid-1;
		}else s=mid+1;

	}	
	return ans;
}
int upper_bound(vector<int> arr,int k){



	int s=0;
	int e=arr.size()-1;
	int ans=-1;
	while(s<=e){

		int mid=(s+e)/2;
		if(arr[mid]==k) {
			ans=mid;
			s=mid+1;
		}else if(arr[mid]>k){
			e=mid-1;
		}else s=mid+1;

	}	
	return ans;
}
int main(){
vector <int> arr={0,1,1,2,3,3,3,3,4,5,5,5,10};
int n=arr.size();
cout<<lower_bound(arr,3)<<endl;
cout<<upper_bound(arr,3)<<endl;;


	
	return 0;

}
