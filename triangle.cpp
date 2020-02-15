#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	scanf("%d", &N);
	double a, b, c;

	while(N--) {
		scanf("%lf%lf%lf", &a, &b, &c);

		if(a + b < c || a + c < b || b + c < a) {
			printf("Oh, No!");
		} else {
			double s = (a + b + c) / 2.0;
			printf("%0.2lf\n", sqrt(s * (s-a) * (s-b) * (s-c)));
		}
	}

	return 0;
}
