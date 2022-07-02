#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str;
  getline(cin,str);
  int sum = 0;
  for(int i = 0;i < str.size(); i++)
  {
      sum += str[i] - '0';
  }
  string a[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  string result = to_string(sum);
  for(int i = 0; i < result.size() - 1; i++){
    cout << a[result[i] - '0'] << " ";
  }
  cout << a[result[result.size() - 1] - '0'];
}
