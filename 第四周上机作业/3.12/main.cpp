#include <iostream>
using namespace std;
class Account
{
    public:
        int yue;
        Account(int yue);
	    void credit(int c);
	    void debit(int d);
	    int getBalance();
};
Account::Account(int e){
    if (yue >= 0) {
			yue = e;
		} else {
			yue = 0;
			cout<<"Óà¶îÎÞÐ§£¡"<<endl;
		}

}
void Account::credit(int c){
    yue += c;
}
void Account::debit(int d) {
		if (yue < d) {
                cout<<"Debit amount exceeded account balance."<<endl;

		} else {
			yue -= d;
		}
	}
	int Account::getBalance(){
	return yue;
	}
int main()
{
        Account a(100);
		Account b(-100);
		a.credit(10);
		a.debit(120);
		a.debit(20);
		cout<<a.getBalance()<<endl;
    return 0;
}
