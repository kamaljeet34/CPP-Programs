#include <iostream>
#include <cmath> // Going to use for monthly payment calc for the power function
#include <string>
using namespace std;
int home_loan_calculator();
int EMI_calculator();
int main()
{
    int n;
    cout<<"1:- home loan calculator"<<endl;
    cout<<"2:- EMI calculator"<<endl;
    cout<<"3:- exit"<<endl;
    while(1)
    {
        cout<<"-:enter your choise:-"<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
                home_loan_calculator();
            break;
            case 2:
                EMI_calculator();
            break;
            case 3:
                exit(0);
            break;
            default:
                cout<<"pleas enter valide choise"<<endl;
            
        }
    }
}
    int home_loan_calculator()
    {
    // Variables Declared
    string name; // Name of user
    long loanAmt = 0; // Requested loan Amount
    int years = 0; // Loan term in years
    float interestRate = 0;
    double months2Pay = 0; // years *12

    double interestMonthlyRate = 0; // interest rate  / 12
    double monthlyPayments = 0; // Final Monthly Payments
    double interestRateDecimal = 0; // interest rate /100
    double totalInterestPaid = 0;
    long finalTotalPaid = 0;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "*                                             *" << endl;
    cout << "*         Home loan Calculator                *" << endl;
    cout << "*                                             *" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

    cout << "Greetings and welcome to the loan calculator!\n" << endl;
            // Loan Information here
            cout << "\nWhat is your name: ";
            cin >> name;
            cout << "\nTotal loan amount: ";
            cin >> loanAmt;
            cout << "\nLoan term (in years): ";
            cin >> years;
            cout << "\nInterest Rate per year: % ";
            cin >> interestRate;

            // Loan Calculations here
            interestRateDecimal = interestRate / 100;
            months2Pay = years * 12;
            interestMonthlyRate = interestRateDecimal / 12;
            monthlyPayments = (loanAmt * pow(interestMonthlyRate + 1, months2Pay) * interestMonthlyRate) / (pow(interestMonthlyRate + 1, months2Pay) - 1);
            finalTotalPaid = monthlyPayments * months2Pay;
            totalInterestPaid = finalTotalPaid - loanAmt;

            cout<<"view a result...."<<endl;
             cout << endl;
            cout << "Hello " << name << "!" << " Your request loan results are below." << endl << endl;
            cout << "   Total Loan Amount: " << loanAmt << endl << endl;
            cout << "   You will have " << months2Pay << " total payments." << endl << endl;
            cout << "   Your monthly payment is " << monthlyPayments << endl << endl;
            cout << "   The total amount paid back is " << finalTotalPaid << endl << endl;
            cout << "   Your total interest paid is " << totalInterestPaid << endl << endl;
            cout << "\nTo enter different loan information, select option 1, 2 & 3.\n";
            
}

int EMI_calculator()
{
    // Variables Declared
    string name; // Name of user
    long price = 0; // Requested loan Amount
    int years = 0; // Loan term in years
    float interestRate = 0;
	float rate=0;
    long months = 0; // years *12

    long downpayment = 0; //downpayment
    long loan = 0; // loan amount
    long EMI = 0;//monthly emi
    long extraInterest = 0;
    long finalTotalPaid = 0;

    cout << " **********************************************" << endl;
    cout << "*                                             *" << endl;
    cout << "*         EMI Calculator                      *" << endl;
    cout << "*                                             *" << endl;
    cout << "***********************************************" << endl << endl;

    cout << "Greetings and welcome to the EMI calculator!\n" << endl;
            // Loan Information here
            cout << "\nWhat is your name: ";
            cin >> name;
            cout << "\n enter your amount(price): ";
            cin >>price;
			cout<<"\n enter your downpayment: ";
			cin>>downpayment;
            cout << "\nLoan term (in years): ";
            cin >> years;
            cout << "\nInterest Rate per year: % ";
            cin >> interestRate;
			loan=price-downpayment;
			months=years*12;
			rate=interestRate/100;
			EMI=(loan*rate*years+loan)/months;
			extraInterest=loan*rate*years;
			finalTotalPaid=price+extraInterest;
			
			            cout<<"view a result....."<<endl;
             cout << endl;
            cout << "Hello " << name << "!" << " Your request loan results are below." << endl << endl;
            cout << "   actual Amount: " << price<< endl << endl;
            cout << "   total loan amount " << loan << endl << endl;
            cout << "   You will have " << months << " months total payments." << endl << endl;
            cout << "   Your monthly payment is " << EMI << endl << endl;
            cout << "   Your total interest paid is" << extraInterest << endl << endl;
            cout << "   The total amount paid is " << finalTotalPaid << endl << endl;
            cout << "\nTo enter different loan information, select option 1,2 & 3.\n";
}
