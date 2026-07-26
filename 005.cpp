#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 2; // 모든 3이상의 자연수는 1로 나눴을 때 0이 남으므로, 2로 시작.
    while(n%answer!=1)
        answer++;
    return answer;
}