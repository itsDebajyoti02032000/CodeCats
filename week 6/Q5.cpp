#include <iostream>
using namespace std;

int numJewelsInStones(string J, string S) {
    int count = 0;
    for(int jewel = 0; jewel<J.length(); jewel++){
        for(int stone = 0; stone < S.length(); stone++){
            if(J[jewel] == S[stone]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    string J = "aA";
    string S = "aAAbbbb";
    int count = numJewelsInStones(J, S);
    cout << count << endl;
}
