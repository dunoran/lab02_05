// �ݺ��� ���� input �ޱ�
//�Է� ���� �͵� ���Ϳ� ����
//�򰥸��µ� auto �־��ָ� ������ ����
//�������� ����?
#include <iostream>
#include <vector>

using namespace std;
void main() {
	vector<int> vec;
	int num;
	
	while (cin >> num) {
		vec.push_back(num);
	}
	for (int i = 0; i < vec.size()-1; i++) {
		for (int j = 0; j < vec.size()-1; j++) {
			if (vec[j] < vec[j + 1]) {
				int k = vec[j];
				vec[j]=vec[j + 1];
				vec[j + 1] = k;
			
			}
		}
	}
	

	for (auto i : vec) {
		cout << i << endl;
	}
	system("pause");
}