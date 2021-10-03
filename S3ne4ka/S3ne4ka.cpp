#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue q;

	if (q.empty()) cout << 1;
	else cout << 0;

	q.push(-5);
	if (!q.empty()) cout << 1;
	else cout << 0;
	if (q.front() == -5) cout << 1;
	else cout << 0;
	if (q.back() == -5) cout << 1;
	else cout << 0;

	q.pop();
	if (q.empty()) cout << 1;
	else cout << 0;

	q.push(1);
	if (!q.empty()) cout << 1;
	else cout << 0;
	if (q.front() == 1) cout << 1;
	else cout << 0;
	if (q.back() == 1) cout << 1;
	else cout << 0;

	q.push(2);
	if (!q.empty()) cout << 1;
	else cout << 0;
	if (q.front() == 1) cout << 1;
	else cout << 0;
	if (q.back() == 2) cout << 1;
	else cout << 0;

	q.push(3);
	if (!q.empty()) cout << 1;
	else cout << 0;
	if (q.front() == 1) cout << 1;
	else cout << 0;
	if (q.back() == 3) cout << 1;
	else cout << 0;

	q.pop();
	if (!q.empty()) cout << 1;
	else cout << 0;
	if (q.front() == 2) cout << 1;
	else cout << 0;
	if (q.back() == 3) cout << 1;
	else cout << 0;

	q.pop();
	if (!q.empty()) cout << 1;
	else cout << 0;
	if (q.front() == 3) cout << 1;
	else cout << 0;
	if (q.back() == 3) cout << 1;
	else cout << 0;

	q.pop();
	if (q.empty()) cout << 1;
	else cout << 0;
}