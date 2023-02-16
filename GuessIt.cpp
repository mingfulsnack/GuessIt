#include <bits/stdc++.h>
using namespace std;
int RandomNumber()
{
srand(time(0));
return rand() % 100 + 1;
}
void Result(int YourGuess,int HiddenNumber)
{
if(YourGuess<HiddenNumber) cout<<"Too Small.Try again"<<endl;
if(YourGuess==HiddenNumber) cout<<"Bingo!!!!!"<<endl;
if(YourGuess>HiddenNumber) cout<<"Too big.Try again"<<endl;
}
int PlayerGuess()
{
    int YourGuess;
    cout <<"Lets Take a Guess:"<<endl;
    cin >> YourGuess;
    return YourGuess;
}
int main()
{
int HiddenNumber = RandomNumber();
int YourGuess;
do
{
YourGuess = PlayerGuess();
Result(YourGuess,HiddenNumber);
}
while (YourGuess != HiddenNumber);
return 0;
}
