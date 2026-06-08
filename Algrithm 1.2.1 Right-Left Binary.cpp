#include <iostream>
using namespace std;

// 二进制快速幂 
long long quickpower(int base,int power){
	int result=1;
	while (power>0){
		if (power&1){
			result *= base;
		}
		base *= base;
		power >>= 1;
	}
	return result;
}

// 指数折半快速幂
long long quickpower2(int base,int power){
	int result=1;
	while (power>0){
		if (power%2==1){
			result *= base;
			power -= 1;
		}
		base *= base;
		power /= 2;
	}
	return result;
} 
int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,m;
  n = quickpower(2,8);
  m = quickpower2(2,8);
  cout << n << endl << m;
  return 0;
}
