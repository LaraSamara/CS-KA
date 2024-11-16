/*Create class Account that contains the following :
//attributes
- Id
- Name
- Balance
// methods
- Constructors ( default , parametrized , copy constructor )
- Setters & getters
- setData()
- printInfo() => print Account information
- TransferTo() => transfer particular amount of money to another
account*/
#include <iostream>
using namespace std;
class Account{
private:
    int id;
    string name;
    int balance;
public:
    Account(){
        id=0;
        name="";
        balance=0;
    }
    Account(int i,string n,int b){
        id=i;
        name=n;
        balance=b;
    }
    Account(const Account &account){
        id=account.id;
        name=account.name;
        balance=account.balance;
    }
    void set_id(int i){
        id=i;
    }
    void set_name(string n){
        name=n;
    }
    void set_balance(int b){
        balance=b;
    }
    int get_id(){
    return id;
    }
    string get_name(){
    return name;
    }
    int get_balance(){
    return balance;
    }
    void setData(int i,string n,int b){
        id=i;
        name=n;
        balance=b;
    }
    void printInfo(){
        cout<<"id is: "<<id<<endl;
        cout<<"name is: "<<name<<endl;
        cout<<"balance is: "<<balance<<endl;
    }
    void TransferTo(Account &account,int amount){
        if(balance>=amount){
            account.set_balance(account.get_balance()+amount);
            balance-=amount;
        }else{
        cout<<"Your Balance Not Enough"<<endl;
        }
    }
};
int main()
{
return 0;
}