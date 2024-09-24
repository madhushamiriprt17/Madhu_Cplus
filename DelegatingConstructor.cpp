#include <iostream>
#include <string>
using namespace std;
class BankCustomer{
    private:
        string name;
        string adharNumber;
        string panNumber;
        string emailId;
        string phoneNumber;
    
    public:
    //Default constructor
    BankCustomer(){ } 
    //Compile Time Polymorphism , constructor Overloading
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg):BankCustomer(){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
        cout<<"nameArg,adharNumberArg,panNumber"<<endl;
    }
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg, string emailArg):BankCustomer(nameArg, adharNumberArg, panNumberArg){
        this->emailId=emailArg;
        cout<<"nameArg,adharNumberArg,panNumber,emailArg"<<endl;
    }
     BankCustomer(string nameArg,string adharNumberArg,string panNumberArg, string emailArg, string phoneArg):BankCustomer(nameArg, adharNumberArg, panNumberArg, emailArg){
        this->phoneNumber=phoneArg;
        cout<<"nameArg,adharNumberArg,panNumber,emailArg,phoneArg"<<endl;
    }
    void printCustomerInfo(){
            cout<<"RAM, 9999,7878, ram123@gmail.com,3299"<<endl;
        }

};

int main() {
    // Write C++ code here
    BankCustomer BankcustomerObj("RAM", "9999", "7878", "ram123@gmail.com","3299178");
    BankcustomerObj.printCustomerInfo();
    return 0;

}
