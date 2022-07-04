#include<iostream>
using namespace std;
int main(){
  int N, M;
  cin >> N >> M;
  int a[N];
  for(int i = 0; i < N; i++){
   cin >> a[i];
  }
  int lenth = sizeof(a) / sizeof(int);
  for(int i = lenth - 1; i >= 0; i--){
    a[(i + M) % lenth] = a[i];
  }
  for(int i = 0; i < lenth; i++){
    cout << a[i] << " ";
  }
  return 0;
}
