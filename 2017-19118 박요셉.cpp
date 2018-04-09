// 반복문 통해 input 받기
//입력 받은 것들 벡터에 저장
//헷갈리는데 auto 넣어주면 적절히 쓸수
//오름차순 역순?
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