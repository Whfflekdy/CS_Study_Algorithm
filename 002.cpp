#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int len = arr.size();
    /*for(int i=0; i<len; i++)
        answer+=arr[i];
    */
    for(int i: arr) // arr에 있는 원소를 순회(c++방식)
        answer+=i;
    if(len!=0)
        answer/=len;
    return answer;
}