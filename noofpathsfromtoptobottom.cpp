#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int count_paths(int m,int n)
{
	if(m==1 || n==1)
	{
		return 1;
	}
	return count_paths(m-1,n)+count_paths(m,n-1);
}
int main()
{
	int m,n;
	cin << m;
	cin << n;
	count_paths(m,n);
	return 0;
}