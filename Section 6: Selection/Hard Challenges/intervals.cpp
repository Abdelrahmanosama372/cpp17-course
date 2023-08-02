#include  <iostream>

using namespace std;

int main()
{
	// implementation must be without using loops
	int x, s1, e1, s2, e2, s3, e3, count {0};

	cin >> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

	if(x >= s1 && x <= e1) count++;
	if(x >= s2 && x <= e2) count++;
	if(x >= s3 && x <= e3) count++;

	cout << count << endl;

	return 0;
}