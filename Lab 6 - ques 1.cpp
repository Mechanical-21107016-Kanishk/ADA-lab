#include <bits/stdc++.h>
using namespace std;

void searchmat(vector<vector<int>> &mat,int m, int n, int x){
	if (n == 0){
		cout<<"Element not found";
    }

	int smallest = mat[0][0];
    int largest = mat[m - 1][n - 1];

	if (x < smallest || x > largest){
		cout<<"Element not found";
    }

	int i = 0;
    int j = n - 1;

	while (i < m && j >= 0){
		if (mat[i][j] == x) {
			cout << "Element found at (" << i << "," << j<<")"<<endl;
		}
		if (mat[i][j] > x){
			j--;
        } else{
			i++;
        }
	}
}

int main(){

    int searchele;
    cin>>searchele;
    vector<vector<int>> mat{{-4,-3,-1,3,5}, {-3,-2,2,4,6}, {-1,1,3,5,8}, {3,4,7,8,9}};
    int m = mat.size();
    int n = mat[0].size();

    searchmat(mat, m, n, searchele);
}
