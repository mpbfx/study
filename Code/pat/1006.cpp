#include<iostream>
using namespace std;
bool isPrime(int a){
  // 求质数的方法
  for(int i = 2; i * i <= a; i++){
    if(a % i == 0) return false;
  }
  return true;
}
int main(){
  int n;
  int sum = 0;
  cin >> n;
  // 1 不是质数
  for(int i = 5; i <= n; i++){
    if(isPrime(i - 2) && isPrime(i)) sum++;
  }
  cout << sum;
  return 0;
}
