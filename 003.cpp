#include <string>
#include <numeric> // 추가
#include <vector>

double solution(std::vector<int> arr) {
    if (arr.empty()) return 0;
    // 0.0은 초기값, 여기서부터 arr의 모든 요소를 더함
    return std::accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
}