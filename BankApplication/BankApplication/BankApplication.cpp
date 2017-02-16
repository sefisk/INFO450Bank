// BankApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int acc_balance;
	int acc_action;
	cout << "Enter Balance: ";
	cin >> acc_balance;

	float deposit_amount, check_amount, withdraw_amount, overal_total = 0, before_balance, w = 0, d = 0, c = 0;
	int d_num = 0, c_num = 0, w_num = 0;
	bool isReady = true;
	const int MAX = 100;
	float d_s_a[MAX] = { 0 };
	float w_s_a[MAX] = { 0 };
	float c_s_a[MAX] = { 0 };
	while (isReady == true) {

		cout << "1: Deposit  \t" << "2: Withdraw  \t" << "3: Check  \t" << "4: Quit  \t" << endl;
		cin >> acc_action;

			cout << endl;
			if (acc_action == 1)
			{

				before_balance = overal_total;

				cout << "Deposit Amount: ";
				cin >> deposit_amount;


				for (int i = d_num; i < MAX; i++)
				{
					d_s_a[i] = deposit_amount;
				}

				overal_total = deposit_amount + before_balance;
				d_num = d_num + 1;
				d = d + deposit_amount;
			}
			else if (acc_action == 2)
			{
				before_balance = overal_total;
				cout << "Withdraw Amount: ";
				cin >> withdraw_amount;
				for (int i = w_num; i < MAX; i++)
				{
					w_s_a[i] = withdraw_amount;
				}
				overal_total = before_balance - withdraw_amount;
				w = w + withdraw_amount;
				w_num = w_num + 1;
			}
			else if (acc_action == 3)
			{
				
				before_balance = overal_total;
				cout << "Check Amount: ";
				cin >> check_amount;
				for (int i = c_num; i < MAX; i++)
				{
					c_s_a[i] = check_amount;
				}
				overal_total = before_balance - check_amount;
				c = c + check_amount;
				c_num = c_num + 1;
			}
			else if (acc_action == 4)
			{
				cout << "Bank Statement:" << endl << endl;
				cout << "Beginning Balance: " << fixed << setprecision(2) << acc_balance << endl << endl;
				cout << "Total Deposits: " << fixed << setprecision(2) << d << endl;
				cout << " *Deposits" << endl;
				for (int i = 0; i < d_num; i++)
				{
					cout << "\t" << fixed << setprecision(2) << d_s_a[i] << endl;
				}
				cout << endl;
				cout << "Total Withdraws: " << fixed << setprecision(2) << w << endl;
				cout << " *Withdraws" << endl;
				for (int i = 0; i < w_num; i++)
				{
					cout << "\t" << fixed << setprecision(2) << w_s_a[i] << endl;
				}
				cout << endl;
				cout << "Total Checks: " << fixed << setprecision(2) << c << endl;
				cout << " *Checks" << endl;
				for (int i = 0; i < c_num; i++)
				{
					cout << "\t" << fixed << setprecision(2) << c_s_a[i] << endl;
				}
				cout << endl;
				cout << "----------------" << endl;
				cout << "Ending Balance: " << fixed << setprecision(2) << overal_total + acc_balance << endl;
				isReady = false;
			}
			else {
				cout << "Error: You can only use #1-4. Try again." << endl;
			}
		
	}
}

