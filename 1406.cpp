#include <iostream>
#include <string>
#include <list>
using namespace std;
int m;
char op; //��ɾ�
char ch; //�߰��� ����
string s;
list<char> li;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> s;
	for (auto cur : s) {
		li.push_back(cur);
	}
	auto cur = li.end();
	cin >> m;
	while (m--) {
		cin >> op;
		if (op == 'L') {
			//��������
			//�� ���̸� ����
			if (cur != li.begin())
				cur--;
		}
		else if (op == 'D') {
			//����������
			//�� �ڸ� ����
			if (cur != li.end())
				cur++;
		}
		else if (op == 'B') {
			//���� ����
			//�� ���̸� ����
			if (cur != li.begin()) {
				cur--;
				cur = li.erase(cur);
			}
			
		}
		else if (op == 'P') {
			//���ʿ� ���� �߰�
			cin >> ch;
			li.insert(cur, ch);
		}
	}

	for (auto cur : li) {
		cout << cur;
	}

	return 0;
}