#include  <iostream>

using namespace std;

int main()
{
	// implementation must be without using loops
	int s1, e1, s2, e2, intersection_st, intersection_end;
	cin >> s1 >> e1 >> s2 >> e2;

	if(e1 < s2 || e2 < s1)
	{
		cout << -1 << endl;
		return 0;
	}

	else
	{
		s1 > s2 ? intersection_st = s1  : intersection_st = s2;
		e1 > e2 ? intersection_end = e2 : intersection_end = e1;

		cout << intersection_st << " " << intersection_end << endl;
	}

	return 0;
}