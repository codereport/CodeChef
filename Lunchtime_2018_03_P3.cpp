// code_report Solution
// https://youtu.be/B_PcaHnqxn8?t=7m14s

#include <algorithm>
#include <iostream>

using namespace std;

int dmp (int a, int b, int c) 
{
	return abs ((a + c) / 2 - b);
}

int main () 
{
	int a, b, c, t; 
	cin >> t;
	
	while (t--) 
	{
		cin >> a >> b >> c;		
		cout << ((a + c) % 2 == 0 ? dmp (a, b, c) : min (dmp (a, b, c + 1), dmp (a, b, c - 1)) + 1) << endl;
	}

	return 0;
} 
