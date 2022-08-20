#include <cstdio>
#include <algorithm>

const int N = 3;
int capacity[N], milk[N];
/*
N is the number of buckets (which happens to be a constant value of 3)
capacity[i] is the maximum capacity of bucket i
milk[i] is the current amount of milk in bucket i
*/

void pour(int i, int j)
{
	int amt=std::min(milk[i], capacity[j]-milk[j]);
	// Amount of milk to pour is the minimum of the remaining milk in bucket i 
	// and the available capacity in bucket j
	milk[i] -= amt;
	milk[j] += amt;
}

int main()
{
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);
	for(int i=0;i<N;++i)
		scanf("%d%d", capacity+i, milk+i);
	for(int i=0;i<100;++i)
		pour(i%N, (i+1)%N); // Pour milk from one bucket to the next
	for(int i=0;i<N;++i)
		printf("%d\n", milk[i]);
	return 0;
}