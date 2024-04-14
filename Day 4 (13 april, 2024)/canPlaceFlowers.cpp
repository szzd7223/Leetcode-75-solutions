#include <iostream>
#include <vector>
using namespace std;   

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    vector<int> modifiedFlowerBed(flowerbed.begin(), flowerbed.end());
    modifiedFlowerBed.insert(modifiedFlowerBed.begin(), 0);
    modifiedFlowerBed.push_back(0);
    for(int i=1; i < (modifiedFlowerBed.size()-1); i++){
        if(modifiedFlowerBed[i]==0 && modifiedFlowerBed[i-1]==0 && modifiedFlowerBed[i+1]==0){
            modifiedFlowerBed[i] = 1;
            n--;
        }
    }
    return n <= 0;
}

int main()
{
    vector<int> flowerbed;
    int n,k;
    cout << "Enter number of flowers:" << endl;
    cin >> n;
    cout << "Enter number of 0 and 1:" << endl;
    cin >> k;
    for(int i=0; i<k; i++)
    {
        int number;
        cout << "Enter 0 or 1:" << endl;
        cin >> number;
        flowerbed.push_back(number);
    }
    bool result = canPlaceFlowers(flowerbed, n);
    cout << "can place flowers: " << (result ? "true" : "false") << endl;
    return 0;
}