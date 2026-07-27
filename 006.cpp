#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pnum = 0;
    int ynum = 0;
    
    for(char c: s){
        if(c== 'p' || c== 'P') pnum++;
        if(c== 'y' || c== 'Y') ynum++;
    }
    if(pnum != ynum) answer = false;

    return answer;
}