#include <iostream>
#include <vector>
using namespace std;


vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
{
    //find maximum candies
    int maxCandies = candies[0]; 
    for(int i=0; i<candies.size(); i++)
    {
        if(maxCandies<candies[i])
        {
            maxCandies = candies[i];
        }
        i++;
    }

    //find if extracandies+candies[j] > maxCandies
    vector<bool> result;
    for(int j=0; j<candies.size(); j++)
    {
        if((candies[j]+extraCandies)>=maxCandies)
        {
            result.push_back(true);
        }
        else
        {
            result.push_back(false);
        }
    }

    return result;
}

int main()
{
    int numberOfKids;
    vector<int> candies;
    int extraCandies;
    
    cout << "Enter number of kids" << endl;
    cin >> numberOfKids;

    for(int i=0; i<numberOfKids; i++)
    {
        int candiesForKid;
        cout << "enter the number of candies kid " << i << " have:" << endl;
        cin >> candiesForKid;
        candies.push_back(candiesForKid);
    }

    cout << "Enter number of extra candies:" << endl;
    cin >> extraCandies;

    vector<bool> result = kidsWithCandies(candies, extraCandies);

    for(bool b:result){
        cout << (b ? "true" : "false") << " ";
    }
    cout << endl;
}
