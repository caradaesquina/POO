#include <iostream>
#include <string>
#include "bigint.h"

using namespace std;

void BigInt::leia()
{
	string a;
	cin >> a;
	len = a.length();
	for(int i = 0; i < len; i++)
	{
		num[i] = a[len-i-1] - '0';
	}
}

void BigInt::print()
{
	for(int i = len-1; i >= 0; i--)
		cout << num[i];
	cout << endl;
}

BigInt BigInt::soma(BigInt b)
{
	BigInt c;
	c.len = 0;

	for(int i = 0, vaiUm = 0; vaiUm || i < max(len, b.len); i++)
	{
		int x = vaiUm;
		if(i < len) x += num[i];
		if(i < b.len) x += b.num[i];
		c.num[c.len++] = x % 10;
		vaiUm = x / 10;
	}
	return c;
}

BigInt BigInt::subtrai(BigInt b)
{
	BigInt c;
	c.len = 0;

	for(int i = 0; i < max(len, b.len); i++)
	{
		int x = 0;
		if(i < len) x += num[i];
		if(i < b.len)
		{
			if(num[i] >= b.num[i])
				x -= b.num[i];
			else {
				x += 10 - b.num[i];
				num[i+1]--;
			}
		}

            c.num[c.len++] = x;
	}
	return c;
}
