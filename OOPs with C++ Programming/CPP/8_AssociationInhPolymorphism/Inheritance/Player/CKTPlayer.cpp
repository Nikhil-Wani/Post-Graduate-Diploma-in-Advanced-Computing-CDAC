#include "Player.cpp"
class CKTPlayer: public Player
{
private:
int runs;

public:
CKTPlayer():runs(0)
{

}

void Accept()
{
Player::Accept();
cout<<"\n Enter Runs:";
cin>>runs;
}
void Display()
{
Player::Display();
cout<<"\nRuns:"<<runs;
}

};
int main()
{
Player *p = NULL;
CKTPlayer cp;
p = &cp;

cout<<"Call for p"<<endl;
p->Accept();
p->Display();

return 0;
}