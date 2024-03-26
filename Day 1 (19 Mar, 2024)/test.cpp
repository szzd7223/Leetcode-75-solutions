#include <iostream>
#include <algorithm>
using namespace std;

string gcdOfStrings(string str1,string str2)
{
    if(str1+str2!=str2+str1){
    return "";
    }

    return str1.substr(0,__gcd(str1.length(),str2.length()));
}
int main(){
    string str1 = "AB";
    string str2 =  "ABAB";

    string result = gcdOfStrings(str1,str2);

    cout << result <<endl;

}