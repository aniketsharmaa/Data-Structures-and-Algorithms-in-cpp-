#include <bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
        int balance;
    public:
        BankAccount(int n){
            balance =  n;
            
        }
        void displayBalance(){
            cout<<"Total balance is : "<< balance <<'\n';
        }
        void addBalance(int n){
            balance = balance + n;
            displayBalance();
        }
        void withdrawBalance(int n){
            balance = balance -n;
            displayBalance();
        }
};
int main()
{
    BankAccount b1(400);
    b1.displayBalance();
    b1.addBalance(344);
    b1.withdrawBalance(1);
    
    return 0;
}
