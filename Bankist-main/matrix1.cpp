#include <iostream>
using namespace std;
int main() {
cout<<"NAME:MANAN"<<endl;
cout<<"UID:21BCS9258"<<endl;
int n=3;
int arr[n][n];
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cin >> arr[i][j];
}
}
int sum_left = 0;
int sum_right = 0;
for (int i = 0; i < n; i++) {
sum_left += arr[i][i];
sum_right += arr[i][n - i - 1];
}
int diff = abs(sum_left - sum_right);
cout << diff << endl;
return 0;
}