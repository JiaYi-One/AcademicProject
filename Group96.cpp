#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
#include <cctype>
#include <chrono> //display
#include <thread> //display

int main();

using namespace std;

//AI LING's function
int main();
void customer_menu();
void check_digit(string&);
void calculate(double);
void countdown();
void membership();
void purchase();

//JIA YI's function
void staffMenu();
void staffModify();
void staffAdd();
void staffDelete();
void checkNum(bool, string&);
void checkValid(string&, int&);
void textSpace(string&);
void enterPrice(bool&, string&);
void enterDay(int&, int&);
void enterMonth(int&);
void enterYear(int&);
void validYear(bool, string&);

//SOO HUAN's function
string generateRedemptionCode();
void staff_login();
void reward_redemption();

int main() //main menu
{
	string cus_staff; // to choose system to enter or leave system
	system("cls");

	cout << "\033[1;33m             __          __    _                                _______     " << endl
		<< "             \\ \\        / /   | |                              |__   __|    " << endl
		<< "              \\ \\  /\\  / /___ | |  ___  ___   _ __ ___    ___     | |  ___  " << endl
		<< "               \\ \\/  \\/ // _ \\| | / __|/ _ \\ | '_ ` _ \\  / _ \\    | | / _ \\ " << endl
		<< "                \\  /\\  /|  __/| || (__| (_) || | | | | ||  __/    | || (_) |" << endl
		<< "                 \\/  \\/  \\___||_| \\___|\\___/ |_| |_| |_| \\___|    |_| \\___/ " << endl
		<< "                                                                            " << endl;

	cout << "   __   __ _ __   __ __   __ _ __   __  ___  ___    ___   ___   ___  _____  ___   ___  ___ " << endl
		<< "   \\ \\ / //_\\\\ \\ / / \\ \\ / //_\\\\ \\ / / | __|/ _ \\  / _ \\ |   \\ / __||_   _|/ _ \\ | _ \\| __|" << endl
		<< "    \\ V // _ \\\\ V /   \\ V // _ \\\\ V /  | _|| (_) || (_) || |) |\\__ \\  | | | (_) ||   /| _| " << endl
		<< "     |_|/_/ \\_\\|_|     |_|/_/ \\_\\|_|   |_|  \\___/  \\___/ |___/ |___/  |_|  \\___/ |_|_\\|___|" << endl
		<< "                                                                                           " << endl;

	cout << "\033[1;36m        @----------------------------@              " << endl
		<< "        |\033[0;32mYAY YAY FOOD INVENTORY STORE\033[1;36m|              " << endl
		<< "        @----------------------------@             " << endl
		<< "      @@@////##//#///%%//%//@(&@@////@@@           ______________________________________" << endl
		<< "     @   @/(/(@   @//(/    @*(//@   @(//@         |                                     |" << endl
		<< "    @   %////@    @///*    ,////@    @///&        |  Which system you wished to enter?  |" << endl
		<< "    @   (////.    /(//*     /////     /////       |  1. Staff System                    |" << endl
		<< "    @ @@,@/@@,@ @@*@/@&/@ @&(@*@##@ @#%@/@/       |  2. Customer System                 |" << endl
		<< "     @..**************/*/*............,,&         |  3. Exit System!                    |" << endl
		<< "     @..*************/*/*@............,,&         |_____________________________________|" << endl
		<< "     @..************@*@*/@............,,&         ,,,,,,,,/   " << endl
		<< "     @..**@*************/@...@@@@@@@@@,,&        /  " << endl
		<< "     @..*@*************//@...@       @,,&    ,,**    " << endl
		<< "     @../////////////////@...@ .     @,,& ,,*         " << endl
		<< "     @.......................@       @,,&           " << endl
		<< "     @..,,,,,,,,,,,,,,,,,,,,,@       @,,&    " << endl
		<< "     ------------------------------------" << endl;

	cout << "\033[0mEnter you option here >> ";
	getline(cin, cus_staff);


	bool input = false; //for data validation, if user key-in valid input then --> input = true
	while (!input)
	{
		if (cus_staff.length() == 1 && cus_staff[0] == '1') //enter staff system
		{
			system("cls");
			input = true;
			staff_login();
			staffMenu();

		}
		else if (cus_staff.length() == 1 && cus_staff[0] == '2') //enter customer system
		{
			system("cls");
			cout << "   __          __  _                            _____                     _____          _                            " << endl
				<< "   \\ \\        / / | |                          |  __ \\                   / ____|        | |                           " << endl
				<< "    \\ \\  /\\  / /__| | ___ ___  _ __ ___   ___  | |  | | ___  __ _ _ __  | |    _   _ ___| |_ ___  _ __ ___   ___ _ __ " << endl
				<< "     \\ \\/  \\/ / _ \\ |/ __/ _ \ | '_ ` _ \\ / _ \\ | |  | |/ _ \\/ _` | '__| | |   | | | / __| __/ _ \\| '_ ` _ \\ / _ \\ '__|" << endl
				<< "      \\  /\\  /  __/ | (_| (_) | | | | | |  __/ | |__| |  __/ (_| | |    | |___| |_| \\__ \\ || (_) | | | | | |  __/ |   " << endl
				<< "       \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___| |_____/ \\___|\\__,_|_|     \\_____\\__,_|___/\\__\\___/|_| |_| |_|\\___|_|   " << endl
				<< "                                                                                                                      " << endl;
			cout << "\033[0;38;2;255;165;0m"
				<< "                                               ______     \n"
				<< "                                              /       \\   \n"
				<< "                                             /         \\  \n"
				<< "                                            |   O   O   |   _\n"
				<< "                                            |     ^     |  | |__\n"
				<< "                                            |    '-'    | _|  __|\n"
				<< "                                             \\         / | |  __|\n"
				<< "                                              \\_______/  |_|____|\033[0m\n";
			system("pause");
			input = true;
			customer_menu();
		}
		else if (cus_staff.length() == 1 && cus_staff[0] == '3') //exit system and display thank you message
		{
			system("cls");
			input = true;
			cout << "\033[33m"
				<< "                 _____  _  _    _    _  _  _  __    __   __ ___   _   _      ___  ___   ___ " << endl
				<< "                |_   _|| || |  /_\\  | \\| || |/ /    \\ \\ / // _ \\ | | | |    | __|/ _ \\ | _ \\" << endl
				<< "                  | |  | __ | / _ \\ | .` || ' <      \\ V /| (_) || |_| |    | _|| (_) ||   /" << endl
				<< "                  |_|  |_||_|/_/ \\_\\|_|\\_||_|\\_\\      |_|  \\___/  \\___/     |_|  \\___/ |_|_\\" << endl
				<< "                                                                                      " << endl;
			cout << "          _   _  ___  ___  _  _   ___       ___   _   _  ___      ___ __   __ ___  _____  ___  __  __ " << endl
				<< "         | | | |/ __||_ _|| \\| | / __|     / _ \\ | | | || _ \\    / __|\\ \\ / // __||_   _|| __||  \\/  |" << endl
				<< "         | |_| |\\__ \\ | | | .` || (_ |    | (_) || |_| ||   /    \\__ \\ \\ V / \\__ \\  | |  | _| | |\\/| |" << endl
				<< "          \\___/ |___/|___||_|\\_| \\___|     \\___/  \\___/ |_|_\\    |___/  |_|  |___/  |_|  |___||_|  |_|" << endl
				<< "                                                                                                " << endl;

			cout << "\033[1;33m"
				<< "   ________________________________________________________________________________________________________" << endl
				<< "  |                                                                                                        |" << endl
				<< "  |             Thank you for using our system! We hope that you found it helpful and easy to use.         |" << endl
				<< "  |      If you have any feedback or suggestions for how we can improve our system, please let us know.    |" << endl
				<< "  |             We appreciate your time and we look forward to serving you again in the future.            |" << endl
				<< "  |                                                                                                        |" << endl
				<< "  |                      For any feedback or enquiries, you can contact us through:                        |" << endl
				<< "  |                                 Email: YayYay312024@gmail.com                                          |" << endl
				<< "  |                             Contact Number: 010-3312024 Yap Ai Yi                                      |" << endl
				<< "  |________________________________________________________________________________________________________|" << endl
				<< "  |                                                                                                        |" << endl
				<< "  | Best regards,                                                                                          |" << endl
				<< "  | YAY YAY Food Inventory Store                                                                           |" << endl
				<< "  |________________________________________________________________________________________________________|\033[0m" << endl << endl;
			system("pause");
		}
		else //invalid input
		{
			cout << "\033[31m" << "Invalid input!\n" << "\033[0m";
			cout << "Please re-enter your option >>";
			getline(cin, cus_staff);
		}
	}
	return 0;
}

/////////////////////
//Below all fuction//
/////////////////////

void check_digit(string& check_str)
// to check whether an input is numeric value or not, if not will ask user to input until get a numeric input
{
	bool check = true; //to check every character is digit or not, if not --> check = false, user need to re-enter
	bool not_integer = true;// if the input is not numeric value --> not_integer = true, user need to re-enter
	while (not_integer)
	{
		for (int ch = 0; ch < check_str.length(); ch++)
		{
			if (!isdigit(check_str[ch]))
			{
				check = false;
				break;
			}
			else
				check = true;
		}
		if (!check)
		{
			cout << "Invalid Input! \nPlease re-enter here >>";
			getline(cin, check_str);
		}
		else
			not_integer = false;

	}
}
void calculate(double total)
{
	double member_discount = 0.1; //member enjoy 10% discount

	ifstream memberFile("Membership.txt");//open member file for checking member status
	int position, row = 0; //variable position is to find position of '|', variable "row" is used to calculate number of data row and store data in array.
	string line, member[100], phone_no[100];
	double balance[100];
	int point[100];

	if (memberFile.is_open())
	{

		getline(memberFile, line); //to remove the 1st line

		while (getline(memberFile, line)) //to count num of line
		{
			position = line.find('|');
			member[row] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			phone_no[row] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			point[row] = stoi(line.substr(0, position));
			line.erase(0, position + 1);

			balance[row] = stod(line);

			row++;
		}
		memberFile.close();  // close the file
	}
	else
	{
		cout << "Error in reading Member Record...\n";
		cout << "Returning to Customer Menu.\n";
		countdown();
		customer_menu();
	}
	string check_phone_num, topup, cash;
	double top_up, pay_cash = 0, change;
	bool member_status = false;
	int check;
	int reward_point = total; //RM1 = 1 reward point, referring to original price not discounted price

	cout << "Are you one of our member? \nKey in your phone number to check your member status >> ";
	getline(cin, check_phone_num);

	for (check = 0; check < row; check++) //check member status using phone number
	{
		if (phone_no[check] == check_phone_num) //is member
		{
			cout << "\nLoyalty accepted! \nWelcome, " << member[check] << " !" << endl;
			cout << "You have enjoyed a 10% of member discount!" << endl;
			cout << "Original Price : RM " << total << endl;
			total = (total - total * member_discount);
			cout << "Discounted Price: RM " << total << endl;
			member_status = true;
			break;
		}
		else if (check == row - 1 && phone_no[check] != check_phone_num) //not member
		{
			cout << "You are not one of our member...\n";
			cout << "Total price: RM " << total << endl;
			member_status = false;
		}
	}
	if (member_status) //member status = true --> is member and use wallet for payment
	{
		cout << "Your current wallet balance is RM" << balance[check] << endl;

		while (balance[check] < total) //if wallet balance insufficient, need to top-up
		{
			cout << "\nWallet balance insufficient!\n";
			cout << "Please top-up your wallet >> RM";
			getline(cin, topup);
			check_digit(topup);
			top_up = stod(topup);
			balance[check] += top_up;
		}

		cout << "\nWallet balance sufficient!\n";//when wallet balance sufficient, the bill will be automatic paid
		cout << "Purchase processing...RM" << total << " will be automatically deducted from your wallet." << endl;
		balance[check] -= total; //update wallet balance of member
		countdown();

		cout << "\nCurrent wallet balance : RM" << balance[check] << endl;
		point[check] += reward_point;//payment successful, points are rewarded to user
		cout << "\nYou have earned " << reward_point << " points!" << endl;
		cout << "Thanks for purchasing our product! Wish you have a nice day." << endl;

		ofstream update_Member("Membership.txt", ios::trunc);//update member detail (wallet balance and points)
		update_Member << "Name|Phone Number|Points|Wallet Balance" << endl;
		for (int member_row = 0; member_row < row; member_row++)
		{
			update_Member << member[member_row] << "|" << phone_no[member_row] << "|" << point[member_row] << "|" << balance[member_row] << endl;
		}
		update_Member.close();
	}
	else //non-member can only pay by cash and don't have reward point
	{
		while (pay_cash < total) //if insufficient, need to pay again
		{
			cout << "Please pay with sufficient cash >> RM";
			getline(cin, cash);
			check_digit(cash);
			pay_cash = stod(cash);
		}
		change = pay_cash - total;
		cout << "Paid cash: RM" << fixed << setprecision(2) << pay_cash << endl;
		cout << "Change : RM" << change << endl;
		cout << "Thanks for purchasing our product! Wish you have a nice day." << endl;
	}
}
void countdown() //countdown for 3 seconds and for diaplay purpose
{
	for (int i = 3; i >= 1; i--)
	{
		cout << i << "...";
		this_thread::sleep_for(chrono::seconds(1));
	}
}
void customer_menu()
{
	system("cls");
	string choose_menu;
	bool input = false;

	cout << "     _____          _                              __  __                  " << endl
		<< "    / ____|        | |                            |  \\/  |                 " << endl
		<< "   | |    _   _ ___| |_ ___  _ __ ___   ___ _ __  | \\  / | ___ _ __  _   _ " << endl
		<< "   | |   | | | / __| __/ _ \\| '_ ` _ \\ / _ | '__| | |\\/| |/ _ | '_ \\| | | |" << endl
		<< "   | |___| |_| \\__ | || (_) | | | | | |  __| |    | |  | |  __| | | | |_| |" << endl
		<< "    \\_____\\__,_|___/\\__\\___/|_| |_| |_|\\___|_|    |_|  |_|\\___|_| |_|\\__,_|" << endl
		<< "                                                                           " << endl;

	cout << "  _________________________________________________________________________ " << endl
		<< " |                                                                         |" << endl
		<< " |  1. Purchase Inventory                                                  |" << endl
		<< " |  2. Reward Redemption                                                   |" << endl //allows the customer to view rewards balance and redeem reward
		<< " |  3. Membership Subscription                                             |" << endl//allow customer to subscribe and unsubscribe
		<< " |  4. Return to Main Menu                                                 |" << endl
		<< " |_________________________________________________________________________|" << endl;
	cout << "Option >> ";
	getline(cin, choose_menu);

	while (!input) //for data validation, when user enter valid input --> input = true then exit loop
	{
		check_digit(choose_menu);
		if (choose_menu.length() == 1 && choose_menu[0] == '1') //enter puchase system
		{
			purchase();
			input = true;
			customer_menu();
		}
		else if (choose_menu.length() == 1 && choose_menu[0] == '2') //enter reward system
		{
			reward_redemption();
			input = true;
			customer_menu();
		}
		else if (choose_menu.length() == 1 && choose_menu[0] == '3') //enter membership subscribing system
		{
			membership();
			input = true;
			customer_menu();
		}
		else if (choose_menu.length() == 1 && choose_menu[0] == '4') //return main menu
		{
			input = true;
			main();
		}
		else
		{
			cout << "Invalid Input! Please re-enter your option >> ";
			getline(cin, choose_menu);
		}
	}
	//for end of *option 1 2 3* will still come back to customer menu, user can exit from *option 4*
}
void membership()
{
	ifstream memberFile("Membership.txt");//read txt file to get member details
	int position, row = 0; //variable position is to find position of '|', variable "row" is used to calculate number of data row and store data in array.
	string line, member[100], phone_no[100];
	double balance[100];
	int point[100];

	if (memberFile.is_open())
	{
		getline(memberFile, line); //to remove the 1st line
		while (getline(memberFile, line)) //to count num of line
		{
			position = line.find('|');
			member[row] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			phone_no[row] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			point[row] = stoi(line.substr(0, position));
			line.erase(0, position + 1);

			balance[row] = stod(line);

			row++;
		}
		memberFile.close();  // close the file
	}
	else
	{
		cout << "Error in reading Member Record...\n";
		cout << "Returning to Customer Menu.\n";
		countdown();
		customer_menu();
	}

	system("cls");
	cout << "    __  __                _                   _     _          _____           _                 " << endl
		<< "   |  \\/  |              | |                 | |   (_)        / ____|         | |                " << endl
		<< "   | \\  / | ___ _ __ ___ | |__   ___ _ __ ___| |__  _ _ __   | (___  _   _ ___| |_ ___ _ __ ___  " << endl
		<< "   | |\\/| |/ _ \\ '_ ` _ \\| '_ \\ / _ \\ '__/ __| '_ \\| | '_ \\   \\___ \\| | | / __| __/ _ \\ '_ ` _ \\ " << endl
		<< "   | |  | |  __/ | | | | | |_) |  __/ |  \\__ \\ | | | | |_) |  ____) | |_| \\__ \\ ||  __/ | | | | |" << endl
		<< "   |_|  |_|\\___|_| |_| |_|_.__/ \\___|_|  |___/_| |_|_| .__/  |_____/ \\__, |___/\\__\\___|_| |_| |_|" << endl
		<< "                                                     | |              __/ |                      " << endl
		<< "                                                     |_|             |___/                       " << endl;
	cout << "                        Will you like to purchase our membership for RM50 only?" << endl
		<< "\033[33m"
		<< " _________________________________________________________________________________________________ " << endl
		<< "|_________________________________________________________________________________________________|" << endl
		<< "|                                                                                                 |" << endl
		<< "|         We provide membership benefits such as exclusive discounts for all the member.          |" << endl
		<< "|        We will try our best to make our customers feel valued and appreciated by the us!        |" << endl
		<< "|               Join our membership now to enjoy your exclusivity and community!                  |" << endl
		<< "|_________________________________________________________________________________________________|" << endl
		<< "|_________________________________________________________________________________________________|" << endl << endl
		<< "\033[0m\n"
		<< "Are you willing to join us?\nType 'YES'/'Y' to enter Subscribing System!>> ";

	string purchase_member, name, phone_num;
	getline(cin, purchase_member);
	if (toupper(purchase_member[0]) == 'Y')
	{
		system("cls");
		cout << "     _____       _                   _ _     _                _____           _                 " << endl
			<< "    / ____|     | |                 (_) |   (_)              / ____|         | |                " << endl
			<< "   | (___  _   _| |__  ___  ___ _ __ _| |__  _ _ __   __ _  | (___  _   _ ___| |_ ___ _ __ ___  " << endl
			<< "    \\___ \\| | | | '_ \\/ __|/ __| '__| | '_ \\| | '_ \\ / _` |  \\___ \\| | | / __| __/ _ \\ '_ ` _ \\ " << endl
			<< "    ____) | |_| | |_) \\__ \\ (__| |  | | |_) | | | | | (_| |  ____) | |_| \\__ \\ ||  __/ | | | | |" << endl
			<< "   |_____/ \\__,_|_.__/|___/\\___|_|  |_|_.__/|_|_| |_|\\__, | |_____/ \\__, |___/\\__\\___|_| |_| |_|" << endl
			<< "                                                      __/ |          __/ |                      " << endl
			<< "                                                     |___/          |___/                       " << endl;
		cout << "To subscribe to our membership, you will have to provide your NAME and PHONE NUMBER\n";

		cout << "Name >> ";
		getline(cin, name);

		cout << "Phone Number >> ";
		getline(cin, phone_num);

		bool repeat = true;
		while (repeat)//data validation: when phone_num is valid --> repeat = false and exit loop
		{
			check_digit(phone_num);
			if (phone_num.length() == 10 || phone_num.length() == 11)
				repeat = false;
			else
			{
				cout << "Please enter a valid Phone Number >>";
				getline(cin, phone_num);
			}
		}
		int ph_no;
		bool registered = false;//to record the phone number is registered or not
		for (ph_no = 0; ph_no < row; ph_no++)//check all the phone number to ensure whether the phone number has registered or not
		{
			if (phone_num == phone_no[ph_no]) //member found!
			{
				//display member details and bring him/her back to customer menu
				cout << "___________________________________________________________________________" << endl
					<< "|Your number has been registered, you are already one of our member!       |" << endl
					<< "|These are your member details.....                                        | " << endl
					<< "|__________________________________________________________________________|" << endl
					<< "|" << left << setw(30) << "Member Name" << "|" << setw(12) << "Phone No." << "|" << setw(13) << "Reward Point" << "|" << setw(15) << "Wallet Balance" << " |" << endl
					<< "|--------------------------------------------------------------------------|" << endl
					<< "|" << setw(30) << member[ph_no] << "|" << setw(12) << phone_no[ph_no] << "|" << setw(13) << point[ph_no] << "|" << setw(15) << balance[ph_no] << " |" << endl
					<< "|______________________________|____________|_____________|________________|" << endl;
				system("pause");
				registered = true;
				break;//member found, so no need to continue looping
			}
		}
		if (!registered)//if the phone number is not registered, then continue register process
		{
			member[row] = name;
			phone_no[row] = phone_num;
			point[row] = 0;

			string topup, re_topup;
			double topup_d, re_topup_d;
			cout << "\nHi, " << name << "! Hoping you have a nice day!" << endl;
			cout << "Please top up Min. RM50 into wallet in order to subscribe our membership >> RM";
			getline(cin, topup);
			check_digit(topup);//check input is numeric value or not
			topup_d = stod(topup); //convert input to double for calculation

			cout << "\nTop up successful!";

			while (topup_d < 50) //wallet need to have at least RM50 to subscribe membership, if not enough --> keep on top up
			{
				cout << "Your current wallet balance is RM " << fixed << setprecision(2) << topup_d << ".\n";
				cout << "\033[31mWallet balance is insufficient to subscribe our membership...\033[0m" << endl
					<< "Please top up at least " << "\033[1;31mRM50\033[0m" << " in your wallet >> RM";
				getline(cin, re_topup);
				check_digit(re_topup);
				re_topup_d = stod(re_topup);
				cout << "\nTop up successful! ";
				topup_d += re_topup_d;//add-up all the top up balance
			}
			cout << "Your current wallet balance is RM " << fixed << setprecision(2) << topup_d << ".\n";
			cout << "\033[32mWallet balance sufficient! \033[0m" << endl
				<< "Subscribing membership......RM50 will be auto deducted from your wallet.\n";
			countdown();
			cout << endl;
			topup_d -= 50; //deduct RM50 from wallet to subscribe membership

			balance[row] = topup_d; //update wallet balance

			//display the details of the new registered member
			cout << "___________________________________________________________________________" << endl
				<< "|Membership registered sucessfully! You are one of our member now.         |" << endl
				<< "|These are your member details.....                                        | " << endl
				<< "|__________________________________________________________________________|" << endl
				<< "|" << left << setw(30) << "Member Name" << "|" << setw(12) << "Phone No." << "|" << setw(13) << "Reward Point" << "|" << setw(15) << "Wallet Balance" << " |" << endl
				<< "|--------------------------------------------------------------------------|" << endl
				<< "|" << setw(30) << member[row] << "|" << setw(12) << phone_no[row] << "|" << setw(13) << point[row] << "|" << setw(15) << balance[row] << " |" << endl
				<< "|______________________________|____________|_____________|________________|" << endl;

			ofstream record_NewMember("Membership.txt", ios::app);//append new member into txt file
			record_NewMember << member[row] << "|" << phone_no[row] << "|" << point[row] << "|" << balance[row] << endl;
			record_NewMember.close();

			system("pause");
		}

	}
	else //user enter input other than 'Y', so display a message and exit the membership system
	{
		cout << "\nBy not subscribing to our membership program, you will not have access to member exclusive discounts.\n"
			<< "We will direct you back to the Customer Menu without subscribing our membership...\n";
		system("pause");
	}

}
void purchase()
{
	system("cls");
	int search = 0, position, qty[100]; //variable "position" is to find position of '|', variable "search" is to find and store data in array
	string line, code[100], type[100], date[100], buyer_selection;
	double price[100];

	ifstream inFood;
	inFood.open("Food.txt");
	getline(inFood, line); //to remove the 1st line
	while (getline(inFood, line)) //to count num of line
	{
		position = line.find('|');
		code[search] = line.substr(0, position);
		line.erase(0, position + 1);

		position = line.find('|');
		type[search] = line.substr(0, position);
		line.erase(0, position + 1);

		position = line.find('|');
		price[search] = stod(line.substr(0, position));
		line.erase(0, position + 1);

		position = line.find('|');
		qty[search] = stoi(line.substr(0, position));
		line.erase(0, position + 1);

		date[search] = line;

		search++;
	}
	inFood.close();  // close the file

	string continue_purchase = "Y", code_buyed[100], item_buyed[100];
	int qty_buyed[100];
	double price_buyed[100];//these array are to store details of user's chosen item(s)

	double total = 0; // calculate total price
	int num_buyed = 0; //used as index for storing data


	while (toupper(continue_purchase[0]) == 'Y') //'Y' to continue select items to buy
		//intialized as 'Y' already, so will automatic enter the loop, in the loop, user can choose to not continue by typing 'N'
	{
		system("cls");
		cout << " ___                 _               _               ___            _               " << endl
			<< "| _ \\ _  _  _ _  __ | |_   __ _  ___(_) _ _   __ _  / __| _  _  ___| |_  ___  _ __  " << endl
			<< "|  _/| || || '_|/ _|| ' \\ / _` |(_-<| || ' \\ / _` | \\__ \\| || |(_-<|  _|/ -_)| '  \\ " << endl
			<< "|_|   \\_,_||_|  \\__||_||_|\\__,_|/__/|_||_||_|\\__, | |___/ \\_, |/__/ \\__|\\___||_|_|_|" << endl
			<< "                                             |___/        |__/                      " << endl;
		cout << "                 _______________________________________________________" << endl;
		cout << left << "                |" << setw(4) << "No." << "|" << setw(10) << "Code" << "|" << setw(25) << "Food" << "|" << setw(7) << "Price" << "|" << setw(5) << "Qty" << "|" << endl;
		cout << "                |----|----------|-------------------------|-------|-----|" << endl;

		int check_zero = 0;
		while (check_zero < search)
			//to remove the item that having 0 quantity because can't be purchase, check through every item in the array (array data comes from txt file)
		{
			if (qty[check_zero] == 0)
			{
				code[check_zero] = code[check_zero + 1];
				type[check_zero] = type[check_zero + 1];
				price[check_zero] = price[check_zero + 1];
				qty[check_zero] = qty[check_zero + 1];
				date[check_zero] = date[check_zero + 1];
				search--;
			}
			else
			{
				cout << left << "                |" << setw(4) << check_zero + 1 << "|" << setw(10) << code[check_zero] << "|" << setw(25) << type[check_zero] << "|"
					<< right << fixed << setprecision(2) << setw(7) << price[check_zero] << "|" << setw(5) << qty[check_zero] << "|" << endl;
				check_zero++;
			}

		}
		cout << "                |____|__________|_________________________|_______|_____|" << endl;
		cout << endl;

		string amount;
		bool invalid = true;
		int selected;

		cout << "Key in the no. of item you willing to purchase (Enter '0' to return Customer Menu) >>";
		getline(cin, buyer_selection);

		while (invalid)
		{
			check_digit(buyer_selection);
			selected = stoi(buyer_selection);

			if (selected == 0)
			{
				cout << "Returning to Customer Menu...";
				countdown();
				customer_menu();
			}
			else if (selected > search)
			{
				cout << "The key-in value is out-of-range! Please re-enter your option >> ";
				getline(cin, buyer_selection);
			}
			else //continue purchasing
				invalid = false;
		}

		cout << "Item Selected : \n";
		cout << "____________________________________________________________________" << endl;
		cout << left << setw(11) << "|Code" << setw(31) << "|Item Chosen" << setw(16) << "|Available Qty" << setw(9) << "|Price " << "|" << endl;
		cout << "|------------------------------------------------------------------|" << endl;
		cout << left << "|" << setw(10) << code[selected - 1] << "|" << setw(30) << type[selected - 1] << "|" << right << setw(15) << qty[selected - 1] << "|"
			<< fixed << setprecision(2) << setw(8) << price[selected - 1] << "|" << endl;
		cout << "|__________|______________________________|_______________|________|" << endl;
		cout << "Please enter the amount you wish to purchase (Min. 1 item): ";
		getline(cin, amount);

		bool re_enter = true;
		int purchase_amount;
		while (re_enter)
		{
			check_digit(amount);
			purchase_amount = stoi(amount);

			if (purchase_amount < 1)
			{
				cout << "Please purchase at least ONE item >> ";
				getline(cin, amount);
			}
			else if (purchase_amount > qty[selected - 1])
			{
				cout << "Insufficient stock, you can only purchase up to " << qty[selected - 1] << " item >> ";
				getline(cin, amount);
				//check_digit(amount);
			}
			else
				re_enter = false;
		}

		double item_price = price[selected - 1] * purchase_amount;//calculation
		total += item_price;
		qty[selected - 1] -= purchase_amount;
		cout << "Price for " << purchase_amount << " " << type[selected - 1] << ": RM" << item_price << endl << endl;

		code_buyed[num_buyed] = code[selected - 1];
		item_buyed[num_buyed] = type[selected - 1];
		qty_buyed[num_buyed] = purchase_amount;
		price_buyed[num_buyed] = item_price;
		num_buyed++;

		cout << "Continue purchasing? ('Y' to continue) >> ";
		getline(cin, continue_purchase);

		if (toupper(continue_purchase[0]) != 'Y')
		{
			system("cls");

			cout << " _____  _                      _____  _                              " << endl
				<< "|_   _|| |                    / ____|| |                             " << endl
				<< "  | |  | |_  ___  _ __ ___   | |     | |__    ___   ___   ___  _ __  " << endl
				<< "  | |  | __|/ _ \\| '_ ` _ \\  | |     | '_ \\  / _ \\ / __| / _ \\| '_ \\ " << endl
				<< " _| |_ | |_|  __/| | | | | | | |____ | | | || (_) |\\__ \\|  __/| | | |" << endl
				<< "|_____| \\__|\\___||_| |_| |_|  \\_____||_| |_| \\___/ |___/ \\___||_| |_|" << endl
				<< "                                                                     " << endl;

			cout << "____________________________________________________________________" << endl;
			cout << left << setw(11) << "|Code" << setw(31) << "|Item Chosen" << setw(16) << "|Qty Chosen" << setw(9) << "|Price " << "|" << endl;
			cout << "|------------------------------------------------------------------|" << endl;
			for (int buyed_list = 0; buyed_list < num_buyed; buyed_list++)
			{
				cout << left << "|" << setw(10) << code_buyed[buyed_list] << "|" << setw(30) << item_buyed[buyed_list] << "|" << right << setw(15) << qty_buyed[buyed_list] << "|"
					<< fixed << setprecision(2) << setw(8) << price_buyed[buyed_list] << "|" << endl;
			}
			cout << "|------------------------------------------------------------------|" << endl;
			cout << "|                                                 " << "Total: RM" << setw(8) << right << total << "|" << endl;
			cout << "|__________________________________________________________________|" << endl;
			calculate(total);

			ofstream update_Food("Food.txt", ios::trunc);
			update_Food << "Code|Food|Price|Quantity|Renew Date" << endl;
			for (int food_row = 0; food_row < search; food_row++)
			{
				update_Food << code[food_row] << "|" << type[food_row] << "|" << price[food_row] << "|" << qty[food_row] << "|" << date[food_row] << endl;
			}
			update_Food.close();

			cout << "Thanks for your support and we look forward to serve you again in the future!\n" << endl;
			system("pause");
			break;
		}
	}

}

void staffMenu() {

	string option;
	bool input = false;

	system("cls"); 
	cout << "    ___                      _                     ___            _               " << endl <<
		"   |_ _| _ _ __ __ ___  _ _ | |_  ___  _ _  _  _  / __| _  _  ___| |_  ___  _ __  " << endl <<
		"    | | | ' \\\\ V // -_)| ' \\|  _|/ _ \\| '_|| || | \\__ \\| || |(_-<|  _|/ -_)| '  \\ " << endl <<
		"   |___||_||_|\\_/ \\___||_||_|\\__|\\___/|_|   \\_, | |___/ \\_, |/__/ \\__|\\___||_|_|_|" << endl <<
		"                                            |__/        |__/                      " << endl;
	cout << "\033[32mYou have entered the STAFF SYSTEM!\033[0m" << endl;
	cout << "+--------------------------------------------+" << endl;
	cout << "| 1. Modify inventory                        |" << endl;
	cout << "| 2. Add inventory                           |" << endl;
	cout << "| 3. Delete inventory                        |" << endl;
	cout << "| 4. Back to Main Menu                       |" << endl;
	cout << "+--------------------------------------------+" << endl;
	cout << "Please enter an option <1/2/3/4> : ";
	getline(cin, option);

	//To make sure that the user input is a number
	while (!input)
	{
		if (option.length() == 1)
		{
			switch (option[0])
			{
			case '1':
				staffModify();//Update Inventory
				input = true;
				break;
			case '2':
				staffAdd();//Add inventory
				input = true;
				break;
			case '3':
				staffDelete();//Delete inventory
				input = true;
				break;
			case '4':
				main();// Back to main menun
				input = true;
				break;
			default:
				cout << "Invalid Input! Please re-enter your option >> ";
				getline(cin, option);
			}
		}
		else
		{
			cout << "Invalid Input! Please re-enter your option >> ";
			getline(cin, option);
		}

	}
}
void staffModify() {

	string modify = "Y";

	while (toupper(modify[0]) == 'Y') {

		int search = 0;// to count how many lines in the file.
		int position;//to find the position of |
		string line, code[100], type[100], date[100];
		double price[100];
		int qty[100], num[100];
		ifstream inFood;
		ofstream outFood;

		system("cls");
		cout << "    __  __          _  _   __        _               ___            _               " << endl <<
			"   |  \\/  | ___  __| |(_) / _| _  _ (_) _ _   __ _  / __| _  _  ___| |_  ___  _ __  " << endl <<
			"   | |\\/| |/ _ \\/ _` || ||  _|| || || || ' \\ / _` | \\__ \\| || |(_-<|  _|/ -_)| '  \\ " << endl <<
			"   |_|  |_|\\___/\\__,_||_||_|   \\_, ||_||_||_|\\__, | |___/ \\_, |/__/ \\__|\\___||_|_|_|" << endl <<
			"                               |__/          |___/        |__/                      " << endl;
		cout << endl;

		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;
		cout << left << setw(6) << "No" << left << setw(10) << "Code" << setw(19) << "Type of Food" << setw(8) << "Price" << setw(5) << "Qty" << "Renew Date";
		cout << endl;
		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;

		inFood.open("Food.txt");
		getline(inFood, line); //to remove the 1st line

		while (getline(inFood, line))
		{
			position = line.find('|');
			code[search] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			type[search] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			price[search] = stod(line.substr(0, position));
			line.erase(0, position + 1);

			position = line.find('|');
			qty[search] = stoi(line.substr(0, position));
			line.erase(0, position + 1);

			date[search] = line;

			num[search] = search + 1;

			cout << right << setw(4) << num[search] << "|" << setw(7) << code[search] << "|" << left << setw(20) << type[search] << "|" << right << fixed << setprecision(2) << setw(7) << price[search] << "|" << right << setw(5) << qty[search] << "|" << right << setw(11) << date[search] << endl;

			search++;
		}
		inFood.close();  // close the file

		for (int i = 0; i < 60; i++) {//display "----------------------"
			cout << "-";
		}
		cout << endl;

		string numModi;
		bool valid = false;
		cout << "Enter the NUMBER of the item you want to MODIFY: ";
		getline(cin, numModi);
		checkValid(numModi, search);
		int modiIndex = stoi(numModi) - 1;

		for (int i = 0; i < 60; i++) {
			cout << "-";
		}

		system("cls");
		cout << endl;
		cout << left << setw(6) << "No" << left << setw(10) << "Code" << setw(19) << "Type of Food" << setw(8) << "Price" << setw(5) << "Qty" << "Renew Date";
		cout << endl;
		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;

		//display the chosen line 
		cout << right << setw(4) << num[modiIndex] << "|" << setw(7) << code[modiIndex] << "|" << left << setw(20) << type[modiIndex] << "|" << right << setw(7) << price[modiIndex] << "|" << right << setw(5) << qty[modiIndex] << "|" << right << setw(11) << date[modiIndex] << endl;
		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;

		//To let staff to key in the details of the food modified
		string newCode, newType, newPrice, newQty;
		int  newDay, newMonth, newYear;

		cout << "\nPlease key in the new DETAILS for the food.\n" << endl;
		cout << "ENTER THE CODE: ";
		getline(cin, newCode);
		while (newCode.length() > 7) {
			cout << "The code must be six digits or letters, re-enter again: ";
			getline(cin, newCode);
		}
		for (int ch = 0; ch < newCode.length(); ch++) {
			newCode[ch] = toupper(newCode[ch]);
		}
		textSpace(newCode);

		bool isDuplicate = false;
		while (!isDuplicate) {
			bool isExist = true;
			for (int i = 0; i < search; i++) {
				if (code[i] == newCode) {
					isExist = false;
					break;
				}
			}
			if (!isExist) {
				cout << "\033[31m" << "You have entered a duplicate code, please try again: " << "\033[0m";
				getline(cin, newCode);
				for (int ch = 0; ch < newCode.length(); ch++) {
					newCode[ch] = toupper(newCode[ch]);
				}
				textSpace(newCode);
			}
			else {
				break;
			}
		}
		code[modiIndex] = newCode;

		//Let user to input and store the new type of food
		cout << "ENTER THE TYPE: ";
		getline(cin, newType);
		textSpace(newType);
		type[modiIndex] = newType;

		//Let user to input and store the new price 
		bool is_double = false;

		while (!is_double) {
			cout << "ENTER PRICE: RM ";
			getline(cin, newPrice);

			enterPrice(is_double, newPrice);
		}
		price[modiIndex] = stod(newPrice);

		//Let user to input the new Quantity
		bool isQty = false;
		cout << "ENTER THE QUANTITY: ";
		getline(cin, newQty);
		checkNum(isQty, newQty);
		qty[modiIndex] = stoi(newQty);

		//Let user to input the RENEW DATE
		enterMonth(newMonth);

		enterDay(newDay, newMonth);

		enterYear(newYear);

		//Connect the DAY/MONTH/YEAR
		date[modiIndex] = to_string(newDay) + "/" + to_string(newMonth) + "/" + to_string(newYear);;

		system("cls");

		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;
		cout << left << setw(6) << "No" << left << setw(10) << "Code" << setw(19) << "Type of Food" << setw(8) << "Price" << setw(5) << "Qty" << "Renew Date";
		cout << endl;
		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;;

		//show the updated food details
		cout << right << setw(4) << num[modiIndex] << "|";
		cout << left << setw(7) << code[modiIndex] << "|";
		cout << setw(20) << type[modiIndex] << "|";
		cout << right << setw(7) << price[modiIndex] << "|";
		cout << setw(5) << qty[modiIndex] << "|";
		cout << right << setw(11) << date[modiIndex] << endl;

		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;

		cout << "\033[32mThe item has updated succesfully!!!\033[0m" << endl;
		cout << endl;

		outFood.open("Food.txt", ios::trunc);

		outFood << "CODE|TYPE|PRICE|QUANTITY|RENEW DATE" << endl;
		for (int i = 0; i < search; i++)
		{
			outFood << code[i] << "|" << type[i] << "|" << price[i] << "|" << qty[i] << "|" << date[i] << endl;
		}
		outFood.close();

		cout << "Press <Y> to continue MODIFY the food inventory" << endl;
		cout << "Press anything to go back to Staff Menu" << endl;
		cout << "Choose your option: ";
		getline(cin, modify);
	}
	staffMenu();
}
void staffAdd() {

	string add = "Y";

	while (toupper(add[0]) == 'Y') {

		int search = 0;
		int position;
		string line, code[100], type[100], date[100];
		double price[100];
		int qty[100], num[100];
		ifstream inFood;
		ofstream outFood;

		system("cls");
		cout << "      _       _     _  _               ___            _               " << endl <<
			"     /_\\   __| | __| |(_) _ _   __ _  / __| _  _  ___| |_  ___  _ __  " << endl <<
			"    / _ \\ / _` |/ _` || || ' \\ / _` | \\__ \\| || |(_-<|  _|/ -_)| '  \\ " << endl <<
			"   /_/ \\_\\\\__,_|\\__,_||_||_||_|\\__, | |___/ \\_, |/__/ \\__|\\___||_|_|_|" << endl <<
			"                               |___/        |__/                      " << endl;
		cout << endl;

		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;
		cout << left << setw(6) << "No" << left << setw(10) << "Code" << setw(19) << "Type of Food" << setw(8) << "Price" << setw(5) << "Qty" << "Renew Date";
		cout << endl;
		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;

		inFood.open("Food.txt");
		getline(inFood, line); //to remove the 1st line

		while (getline(inFood, line)) //to count num of line
		{
			position = line.find('|');
			code[search] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			type[search] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			price[search] = stod(line.substr(0, position));
			line.erase(0, position + 1);

			position = line.find('|');
			qty[search] = stoi(line.substr(0, position));
			line.erase(0, position + 1);

			date[search] = line;

			num[search] = search + 1;

			cout << right << setw(4) << num[search] << "|" << setw(7) << code[search] << "|" << left << setw(20) << type[search] << "|" << right << fixed << setprecision(2) << setw(7) << price[search] << "|" << right << setw(5) << qty[search] << "|" << right << setw(11) << date[search] << endl;

			search++;
		}
		inFood.close();

		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;

		string newCode, newType, newPrice, newQty;
		int  newDay, newMonth, newYear;

		cout << "\nPlease key in the DETAILS of the food you want to ADD.\n" << endl;

		cout << "ENTER THE CODE: ";
		getline(cin, newCode);
		while (newCode.length() > 7) {
			cout << "The code must be six digits or letters, re-enter again: ";
			getline(cin, newCode);
		}
		textSpace(newCode);

		//To prevent user key in duplicate food code
		bool isDuplicate = false;
		while (!isDuplicate) {
			bool isExist = true;
			for (int i = 0; i < search; i++) {
				if (code[i] == newCode) {
					isExist = false;
					break;
				}
			}
			if (!isExist) {
				cout << "\033[31m" << "You have entered a duplicate code, please try again: " << "\033[0m";
				getline(cin, newCode);
				for (int ch = 0; ch < newCode.length(); ch++) {
					newCode[ch] = toupper(newCode[ch]);
				}
				textSpace(newCode);
			}
			else {
				break;
			}
		}
		code[search + 1] = newCode;


		cout << "ENTER THE TYPE: ";
		getline(cin, newType);
		textSpace(newType);
		type[search + 1] = newType;

		//Let user to input and store the new price 
		bool is_double = false;

		while (!is_double) {
			cout << "Enter a PRICE: RM ";
			getline(cin, newPrice);
			enterPrice(is_double, newPrice);
		}
		price[search + 1] = stod(newPrice);

		//Let user to input the new Quantity
		bool isQty = false;

		cout << "ENTER THE QUANTITY: ";
		getline(cin, newQty);
		checkNum(isQty, newQty);
		qty[search + 1] = stoi(newQty);

		//Let user to input the Renew Date 
		enterMonth(newMonth);

		enterDay(newDay, newMonth);

		enterYear(newYear);

		//Connect the DAY/MONTH/YEAR
		date[search + 1] = to_string(newDay) + "/" + to_string(newMonth) + "/" + to_string(newYear);

		system("cls");
		//Show the ADDED FOOD DETAILS
		cout << endl;
		cout << left << setw(10) << "Code" << setw(19) << "Type of Food" << setw(8) << "Price" << setw(5) << "Qty" << "Renew Date";
		cout << endl;
		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;

		cout << setw(7) << code[search + 1] << "|" << left << setw(20) << type[search + 1] << "|" << right << fixed << setprecision(2) << setw(7) << price[search + 1] << "|" << right << setw(5) << qty[search + 1] << "|" << right << setw(11) << date[search + 1] << endl;

		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;
		cout << "\033[32mYou have successfully ADDED this item!!!\033[0m" << endl;

		//Append the added food details into text file
		outFood.open("Food.txt", ios::app);
		outFood << code[search + 1] << "|" << type[search + 1] << "|" << price[search + 1] << "|" << qty[search + 1] << "|" << date[search + 1] << endl;
		outFood.close();
		cout << endl;
		cout << "Press <Y> to continue ADD the food inventory " << endl;
		cout << "Press anything to go back to Staff Menu" << endl;
		cout << "Choose your option: ";
		getline(cin, add);
	}
	staffMenu();
}
void staffDelete() {

	string delFood = "Y";

	while (toupper(delFood[0]) == 'Y') {

		int search = 0;
		int position;
		string line, code[100], type[100], date[100];
		double price[100];
		int qty[100], num[100];
		ifstream inFood;
		ofstream outFood;

		system("cls");

		cout << "    ___        _       _    _               ___            _               " << endl <<
			"   |   \\  ___ | | ___ | |_ (_) _ _   __ _  / __| _  _  ___| |_  ___  _ __  " << endl <<
			"   | |) |/ -_)| |/ -_)|  _|| || ' \\ / _` | \\__ \\| || |(_-<|  _|/ -_)| '  \\ " << endl <<
			"   |___/ \\___||_|\\___| \\__||_||_||_|\\__, | |___/ \\_, |/__/ \\__|\\___||_|_|_|" << endl <<
			"                                    |___/        |__/                      " << endl;
		cout << endl;

		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;
		cout << left << setw(6) << "No" << left << setw(10) << "Code" << setw(19) << "Type of Food" << setw(8) << "Price" << setw(5) << "Qty" << "Renew Date";
		cout << endl;
		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;

		inFood.open("Food.txt");
		getline(inFood, line); //to remove the 1st line

		while (getline(inFood, line)) //to count num of line
		{
			int position;
			position = line.find('|');
			code[search] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			type[search] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			price[search] = stod(line.substr(0, position));
			line.erase(0, position + 1);

			position = line.find('|');
			qty[search] = stoi(line.substr(0, position));
			line.erase(0, position + 1);

			date[search] = line;

			num[search] = search + 1;

			cout << right << setw(4) << num[search] << "|" << setw(7) << code[search] << "|" << left << setw(20) << type[search] << "|" << right << fixed << setprecision(2) << setw(7) << price[search] << "|" << right << setw(5) << qty[search] << "|" << right << setw(11) << date[search] << endl;

			search++;
		}
		inFood.close();  // close the file

		for (int i = 0; i < 60; i++) {//display----------------------
			cout << "-";
		}
		cout << endl;

		string numDel;
		bool valid = false;
		cout << "Enter the NUMBER of the item you want to DELETE: ";
		getline(cin, numDel);
		cout << endl;
		checkValid(numDel, search);

		int delIndex = stoi(numDel);

		system("cls");

		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;
		cout << setw(7) << "Code" << "|" << left << setw(20) << "Type" << "|" << right << setw(7) << "Price" << "|" << right << setw(5) << "Qty" << "|" << right << setw(11) << "Renew Date" << endl;
		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl;

		cout << setw(7) << code[delIndex - 1] << "|" << left << setw(20) << type[delIndex - 1] << "|" << right << setw(7) << price[delIndex - 1] << "|" << right << setw(5) << qty[delIndex - 1] << "|" << right << setw(11) << date[delIndex - 1] << endl;
		for (int i = 0; i < 60; i++) {
			cout << "-";
		}
		cout << endl << endl;

		//move in front the row after the deleted item
		for (int row = delIndex - 1; row < search - 1; row++) {

			code[row] = code[row + 1];
			type[row] = type[row + 1];
			price[row] = price[row + 1];
			qty[row] = qty[row + 1];
			date[row] = date[row + 1];
		}

		bool input = false;
		string checkDel;

		cout << "Are you sure you want to DELETE this item?" << endl;
		cout << "Press <Y> to to confirm DELETE" << endl;
		cout << "Press anything to go back to Staff Menu" << endl;
		cout << "Choose your option: ";

		getline(cin, checkDel);

		while (!input)
		{
			if (checkDel.length() == 1 && toupper(checkDel[0]) == 'Y')
			{
				cout << "\033[32mYou have successfully DELETED this item!!!\033[0m" << endl;
				cout << endl;
				input = true;
			}
			else
				staffMenu();
		}

		outFood.open("Food.txt", ios::trunc);

		outFood << "CODE|TYPE|PRICE|QUANTITY|RENEW DATE" << endl;
		for (int i = 0; i < search - 1; i++)
		{
			outFood << code[i] << "|" << type[i] << "|" << price[i] << "|" << qty[i] << "|" << date[i] << endl;
		}
		outFood.close();

		cout << "Press <Y> to continue DELETE the food inventory" << endl;
		cout << "Press anything to go back to Staff Menu" << endl;
		cout << "Choose your option: ";
		getline(cin, delFood);
	}
	staffMenu();
}
void checkNum(bool valid, string& numIn) //To check the input is whether a whole number and larger than 0
{
	bool checkNum = false;
	while (!checkNum) {
		bool isWholeNumber = true;
		for (int ch = 0; ch < numIn.length(); ch++) {
			if (!isdigit(numIn[ch]) || stoi(numIn) == 0) {
				isWholeNumber = false;
				break;
			}
		}
		if (isWholeNumber && !numIn.empty()) {
			checkNum = true;
		}
		else {
			cout << endl << "\033[31m" << "Invalid input! " << "\033[0m" << endl << "Please re-enter a NUMBER >>";

			getline(cin, numIn);

		}
	}
}
void checkValid(string& numIn, int& search) //To check the number is valid from the food list
{
	bool valid = false;
	while (!valid) {
		bool isWholeNumber = true;
		for (int i = 0; i < numIn.length(); i++) {
			if (!isdigit(numIn[i])) {
				isWholeNumber = false;
				break;
			}
		}
		if (isWholeNumber && !numIn.empty() && stoi(numIn) != 0 && stoi(numIn) <= search) {
			valid = true;
		}
		else {
			cout << endl << "\033[31m" << "Invalid input! " << "\033[0m" << endl
				<< "Please re-enter a NUMBER between 1 and " << search << " >>";
			getline(cin, numIn);
		}
	}
}
void textSpace(string& text)
//Prevent user enter nothing
{
	for (int ch = 0; ch < text.length(); ch++) {
		text[ch] = toupper(text[ch]);
	}

	bool isEmpty = true;
	while (isEmpty) {

		for (int ch = 0; ch < text.length(); ch++) {
			if (text[ch] != ' ') {
				isEmpty = false;
				break;
			}
		}

		if (isEmpty) {
			cout << endl << "\033[31m" << "You have enter NOTHING! " << "\033[0m" << endl << "Please re-enter >>";
			getline(cin, text);
			for (int ch = 0; ch < text.length(); ch++) {
				text[ch] = toupper(text[ch]);
			}
			cout << endl;

		}
		else {
			break;
		}
	}
	//	bool isEmpty = false;
	//	while (!isEmpty) {
	//		if (type.empty()) {
	//			isEmpty = false;
	//		}
	//		else {
	//			cout << endl << "\033[31m" << "You have enter NOTHING " << "\033[0m" << endl << "Please re-enter again >>";
	//			getline(cin, type);
	//			cout << endl;
	//			isEmpty = true;
	//		}
	//	}

}
void enterPrice(bool& isdouble, string& price) {

	int dot_count = 0;
	bool valid = true;
	bool has_digit = false; // new variable to check if the input has at least one digit before or after the dot

	for (int i = 0; i < price.length(); i++) {
		if (!isdigit(price[i]) && price[i] != '.') {
			valid = false;
			break;
		}

		if (price[i] == '.') {
			dot_count++;
		}
		else {
			has_digit = true;
		}
	}

	if (valid && has_digit) { // add check for has_digit
		double number = stod(price);

		if (dot_count <= 1) {
			if (number < 0.01) {
				cout << "Price cannot be less than 0.01" << endl;
			}
			else {
				isdouble = true;
			}
		}
		else {
			cout << "Invalid input, too many decimal points" << endl;
		}
	}
	else {
		cout << "Invalid input, please enter a valid PRICE" << endl;
	}
}
void enterMonth(int& newMonth) {

	string month;
	bool isMonth = false;

	cout << "ENTER THE DATE:" << endl;
	cout << "<MONTH>: ";
	getline(cin, month);
	checkNum(isMonth, month);
	newMonth = stoi(month);
	while (newMonth < 1 || newMonth>12) {
		cout << "Please enter a valid MONTH: ";
		getline(cin, month);
		checkNum(isMonth, month);
		newMonth = stoi(month);
	}
}
void enterDay(int& newDay, int& newMonth) {

	string day;

	bool isDay = false;
	cout << "<DAY>: ";
	getline(cin, day);

	checkNum(isDay, day);
	newDay = stoi(day);
	if (newMonth == 1 || newMonth == 3 || newMonth == 5 || newMonth == 7 || newMonth == 8 || newMonth == 10 || newMonth == 12) {
		while (newDay < 1 || newDay>31) {
			cout << "Please enter a valid DAY: ";
			getline(cin, day);
			checkNum(isDay, day);
			newDay = stoi(day);
		}
	}
	else if (newMonth == 2) {
		while (newDay < 1 || newDay>28) {
			cout << "Please enter a valid DAY: ";
			getline(cin, day);
			checkNum(isDay, day);
			newDay = stoi(day);
		}
	}
	else {
		while (newDay < 1 || newDay>30) {
			cout << "Please enter a valid DAY: ";
			getline(cin, day);
			checkNum(isDay, day);
			newDay = stoi(day);
		}
	}
}
void enterYear(int& newYear) {

	string year;

	bool isYear = false;
	cout << "<YEAR> (at least 2023): ";
	getline(cin, year);
	validYear(isYear, year);
	newYear = stoi(year);
	while (!(newYear > 2022)) {
		cout << "Please enter a VALID YEAR (at least 2023): ";
		getline(cin, year);
		validYear(isYear, year);
		newYear = stoi(year);
	}
}
void validYear(bool valid, string& numIn) {

	bool checkNum = false;

	while (!checkNum) {
		bool isWholeNumber = true;
		for (int ch = 0; ch < numIn.length(); ch++) {
			if (!isdigit(numIn[ch]) || stoi(numIn) == 0) {
				isWholeNumber = false;
				break;
			}
		}
		if (isWholeNumber && numIn.length() == 4 && numIn.substr(0, 2) == "20" && stoi(numIn) > 2022) {
			checkNum = true;
		}
		else {
			cout << "\033[31m" << "Invalid input! " << "\033[0m" << endl << "Please re-enter a 4-DIGIT YEAR starting with '20'(at least 2023): ";
			getline(cin, numIn);
			cout << endl;
		}
	}
}

string generateRedemptionCode() {
	srand(time(NULL));
	string redemptionCode = "";
	for (int i = 0; i < 8; i++) {
		redemptionCode += (rand() % 26) + 65;
	}
	return redemptionCode;
}
void staff_login()
{
	cout << endl;
	cout << "     _____ _         __  __   _                 _    " << endl
		<< "    / ____| |       / _|/ _| | |               (_)      " << endl
		<< "   | (___ | |_ __ _| |_| |_  | |     ___   __ _ _ _ __  " << endl
		<< "    \\___ \\| __/ _` |  _|  _| | |    / _ \\ / _` | | '_ \\ " << endl
		<< "    ____) | || (_| | | | |   | |___| (_) | (_| | | | | |" << endl
		<< "   |_____/ \\__\\__,_|_| |_|   |______\\___/ \\__, |_|_| |_|" << endl
		<< "                                           __/ |        " << endl
		<< "                                          |___/         ";

	string line;
	string username, password;
	bool found = false;
	int tryyy, attempts = 3;
	// Loop for 3 attempts
	for (int tryyy = 1; tryyy <= attempts; tryyy++)
	{
		cout << "\nAttempt " << tryyy << endl;
		// Prompt the user for their staff name and password
		cout << "Staff Name: ";
		getline(cin, username);
		cout << "Password: ";
		getline(cin, password);

		for (int i = 0; i < username.length(); i++) // lowercase all the character for the input
		{
			username[i] = tolower(username[i]);
		}

		ifstream staff_file("Staff.txt");
		getline(staff_file, line);//to remove 1st line
		while (getline(staff_file, line))// Loop through each line of the file and check for a matching staff name and password
		{
			size_t pos = line.find("|");
			string staff = line.substr(0, pos);
			string pass = line.substr(pos + 1);

			for (int j = 0; j < staff.length(); j++)//lowercase all the character for the staffname read from txt file
			{
				staff[j] = tolower(staff[j]);
			}

			if (staff == username && pass == password)
			{
				found = true;
				break;
			}
		}
		staff_file.close();
		if (found)
		{
			cout << "\033[32mLogin successful! Welcome, " << username << "!" << "\033[0m" << endl;
			countdown();
			break;
		}
		else
		{
			cout << "\033[31mInvalid staff name or password. Please try again.\033[0m" << endl;
			if (tryyy == attempts)
			{
				cout << "\033[33mMaximum attempts reached. Directing you to main menu...\033[0m" << endl;
				countdown();
				main();
			}
			cout << "You have " << attempts - tryyy << " attempts remaining." << endl;
		}
	} 
}
void reward_redemption()
{
	system("cls");
	string name, phone;
	int points;
	bool found = false;
	string login;
	cout << endl;

	cout << "                _____  ______   __     ______  _    _    __  __ ______ __  __ ____  ______ _____ ___  " << endl
		<< "          /\\   |  __ \\|  ____|  \\ \\   / / __ \\| |  | |  |  \\/  |  ____|  \\/  |  _ \\|  ____|  __ \\__ \\ " << endl
		<< "         /  \\  | |__) | |__      \\ \\_/ / |  | | |  | |  | \\  / | |__  | \\  / | |_) | |__  | |__) | ) |" << endl
		<< "        / /\\ \\ |  _  /|  __|      \\   /| |  | | |  | |  | |\\/| |  __| | |\\/| |  _ <|  __| |  _  / / / " << endl
		<< "       / ____ \\| | \\ \\| |____      | | | |__| | |__| |  | |  | | |____| |  | | |_) | |____| | \\ \\|_|  " << endl
		<< "      /_/    \\_\\_|  \\_\\______|     |_|  \\____/ \\____/   |_|  |_|______|_|  |_|____/|______|_|  \\_(_)  " << endl << endl;

	cout << "  +-------------------------------------------------------------------------------------------------------+" << endl;
	cout << "  |                        \033[1;34mReward Redemption is exclusive for member only!\033[0m                                |" << endl; //big big word
	cout << "  |    If you are a member of YAY YAY Food Store, enter (Y) to proceed. Otherwise, enter (N) to quit.     |" << endl;
	cout << "  |        For non-member customer, you can subscribe our membership from customer menu :)                |" << endl;
	cout << "  +-------------------------------------------------------------------------------------------------------+" << endl;
	cout << endl << "Option (Y/N) >> ";
	getline(cin, login);
	while (toupper(login[0]) != 'Y' && toupper(login[0]) != 'N')
	{
		cout << "Invalid Input! Please re=-enter your option >> ";
		getline(cin, login);
	}
	int row = 0, member_found = 0; //variable "row" is used to calculate number of data row and store data in array.
	string member[100], phone_no[100];
	double balance[100];
	int point[100];
	if (toupper(login[0]) == 'Y')
	{
		cout << "\033[33mProceeding to MEMBER LOGIN\033[0m" << endl;
		countdown();
		cout << endl;
		system("cls");

		cout << "    __  __                _                 _                 _" << endl
			<< "   |  \\/  |              | |               | |               (_)      " << endl
			<< "   | \\  / | ___ _ __ ___ | |__   ___ _ __  | |     ___   __ _ _ _ __  " << endl
			<< "   | |\\/| |/ _ \\ '_ ` _ \\| '_ \\ / _ \\ '__| | |    / _ \\ / _` | | '_ \\ " << endl
			<< "   | |  | |  __/ | | | | | |_) |  __/ |    | |___| (_) | (_| | | | | |" << endl
			<< "   |_|  |_|\\___|_| |_| |_|_.__/ \\___|_|    |______\\___/ \\__, |_|_| |_|" << endl
			<< "                                                         __/ |        " << endl
			<< "                                                        |___/         " << endl;

		cout << "============================= MEMBER LOGIN =============================" << endl; // decoration later
		cout << "Phone Number: ";
		getline(cin, phone);

		ifstream memberFile("Membership.txt");
		int position; //variable position is to find position of '|'
		string line;

		getline(memberFile, line); //to remove the 1st line

		while (getline(memberFile, line)) //to count num of line
		{
			position = line.find('|');
			member[row] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			phone_no[row] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			point[row] = stoi(line.substr(0, position));
			line.erase(0, position + 1);

			balance[row] = stod(line);

			if (phone == phone_no[row])
			{
				name = member[row];
				points = point[row];
				found = true;
				member_found = row;//as index to read data from membership array
			}
			row++;
		}
		memberFile.close();  // close the file
	}
	else
	{
		string subs;
		cout << "Would you like to subscribe our membership? (Y/N) >> ";
		getline(cin, subs);
		while (toupper(subs[0]) != 'Y' && toupper(subs[0]) != 'N')
		{
			cout << "Invalid Input! Please re=-enter your option >> ";
			getline(cin, subs);
		}

		if (toupper(subs[0]) == 'Y')
		{
			cout << "Directing to Membership System...";
			countdown();
			membership();
		}
		else
		{
			customer_menu();
		}
	}

	if (found)
	{
		cout << "\033[33mLoyalty Accepted! Login to REWARD REDEMPTION site\033[0m" << endl;
		countdown();
		system("cls");

		cout << "    _____                            _   _____          _                      _   _   " << endl
			<< "   |  __ \\                          | | |  __ \\        | |                    | | (_)            " << endl
			<< "   | |__) |_____      ____ _ _ __ __| | | |__) |___  __| | ___ _ __ ___  _ __ | |_ _  ___  _ __  " << endl
			<< "   |  _  // _ \\ \\ /\\ / / _` | '__/ _` | |  _  // _ \\/ _` |/ _ \\ '_ ` _ \\| '_ \\| __| |/ _ \\| '_ \\  " << endl
			<< "   | | \\ \\  __/\\ V  V / (_| | | | (_| | | | \\ \\  __/ (_| |  __/ | | | | | |_) | |_| | (_) | | | |  " << endl
			<< "   |_|  \\_\\___| \\_/\\_/\\\\__,_|_|  \\__,_| |_| \\_\\___|\\__,_|\\___|_| |_| |_| .__/ \\__|_|\\___/|_| |_|  " << endl
			<< "                                                                        | |                        " << endl
			<< "                                                                        |_|                        " << endl;

		cout << "\033[34m" << endl;
		cout << "+-------------------------------------------+" << endl;
		cout << "|             MEMBER INFORMATION            |" << endl;
		cout << "+-------------------------------------------+" << endl;
		cout << "| Member Name: " << setw(29) << left << name << "|" << endl;
		cout << "| Points Earned: " << setw(27) << left << points << "|" << endl;
		cout << "+-------------------------------------------+" << endl;
		cout << "\033[0m" << endl;

		ifstream rewardFile("Reward.txt");

		int position, i = 0; //variable position is to find position of '|', variable i is used to store data in array.
		string line, reward[100];
		int quantity[100], redeem_point[100];
		getline(rewardFile, line); //to remove the 1st line

		cout << "\033[30;33mWelcome to Reward Redeem Site!\033[0m" << endl; // decoration
		cout << setfill('-') << setw(50) << "" << setfill(' ') << endl;
		cout << left << setw(5) << "#" << setw(25) << "Reward" << setw(10) << "Quantity" << setw(10) << "Point" << endl;
		cout << setfill('-') << setw(50) << "" << setfill(' ') << endl;

		while (getline(rewardFile, line)) //'i' to count num of line
		{
			position = line.find('|');
			reward[i] = line.substr(0, position);
			line.erase(0, position + 1);

			position = line.find('|');
			quantity[i] = stoi(line.substr(0, position));
			line.erase(0, position + 1);

			redeem_point[i] = stoi(line);

			i++;
		}
		int check_zero = 0;
		while (check_zero < i) // remove the item that having 0 quantity because can't be purchase
		{
			if (quantity[check_zero] == 0)
			{
				reward[check_zero] = reward[check_zero + 1];
				quantity[check_zero] = quantity[check_zero + 1];
				redeem_point[check_zero] = redeem_point[check_zero + 1];
				i--;
			}
			else
			{
				cout << left << setw(5) << check_zero + 1 << setw(25) << reward[check_zero] << setw(10) << quantity[check_zero] << setw(10) << redeem_point[check_zero] << endl;
				check_zero++;
			}
		}
		cout << setfill('-') << setw(50) << "" << setfill(' ') << endl;
		rewardFile.close();  // close the file

		string redeem, redeem_qty;
		int redeem_i, redeem_qty_i;
		cout << "Enter the REWARD NO. you want to redeem >> ";
		getline(cin, redeem);
		check_digit(redeem);
		redeem_i = stoi(redeem);
		while (redeem_i <= 0 || redeem_i > i)
		{
			cout << "Reward No. out-of-range! Please re-enter the REWARD NO. you want to redeem >> ";
			getline(cin, redeem);
			check_digit(redeem);
			redeem_i = stoi(redeem);
		}
		cout << "Enter the QUANTITY you want to redeem >> ";
		getline(cin, redeem_qty);

		bool re_enter = true;
		while (re_enter)
		{
			check_digit(redeem_qty);
			redeem_qty_i = stoi(redeem_qty);

			if (redeem_qty_i < 1)
			{
				cout << "Please redeem at least ONE item >> ";
				getline(cin, redeem_qty);
			}
			else if (redeem_qty_i > quantity[redeem_i - 1])
			{
				cout << "Insufficient stock, you can only redeem up to " << quantity[redeem_i - 1] << " " << reward[redeem_i - 1] << " : ";
				getline(cin, redeem_qty);
				check_digit(redeem_qty);
			}
			else
				re_enter = false;
		}
		//check sufficient point
		if (points < redeem_point[redeem_i - 1] * redeem_qty_i)
		{
			cout << "  ///// " << endl;
			cout << " + o o +" << endl;
			cout << "(   \"   )" << endl;
			cout << " | ~~~ | " << endl;
			cout << " |     | " << endl;
			cout << " +-----+" << endl;
			cout << "\033[31mSorry, you do not have enough points to redeem this reward.\033[0m" << endl;
			cout << "We will direct you back to the customer menu..." << endl;
			system("pause");
		}
		else
		{
			int remainPoint;
			remainPoint = points - redeem_point[redeem_i - 1] * redeem_qty_i;//member's point - quantity*reward point
			quantity[redeem_i - 1] -= redeem_qty_i;
			point[member_found] = remainPoint;

			cout << "\n" << endl;
			cout << "\033[32mCongratulations! Reward redeemed successfully!\033[0m" << endl;

			// Generate random redemption code
			string redemptionCode = generateRedemptionCode();

			// print reward redemption receipt
			cout << "+----------------------------------------+" << endl;
			cout << "|         REWARD REDEMPTION RECEIPT      |" << endl;
			cout << "+----------------------------------------+" << endl;
			cout << "| Reward: " << setw(31) << reward[redeem_i - 1] << "|" << endl;
			cout << "| Points Redeemed: " << setw(22) << (redeem_point[redeem_i - 1] * redeem_qty_i) << "|" << endl;
			cout << "| Quantity Redeemed: " << setw(20) << redeem_qty << "|" << endl;
			cout << "| Redemption Code: " << setw(22) << redemptionCode << "|" << endl;//generate a random code
			cout << "| Redemption Location: N001, UTAR        |" << endl;
			cout << "|----------------------------------------|" << endl;
			cout << "| Points Deducted: " << setw(22) << (redeem_point[redeem_i - 1] * redeem_qty_i) << "|" << endl;
			cout << "| \033[33mRemaining Points: " << setw(21) << remainPoint << "\033[0m|" << endl;
			cout << "+----------------------------------------+" << endl;
			cout << "This is your reward redemption receipt. Kindly keep your receipt carefully! " << endl;

		}

		//update the Membership.txt file
		ofstream update_pointFile("Membership.txt", ios::trunc);
		if (update_pointFile.is_open())
		{
			update_pointFile << "Member Name|Phone No.|Points|Wallet Balance\n";
			for (int k = 0; k < row; k++)
			{
				update_pointFile << member[k] << "|" << phone_no[k] << "|" << point[k] << "|" << balance[k] << endl;
			}
			update_pointFile.close();
		}

		//update the Reward.txt file
		ofstream recordFile("Reward.txt", ios::trunc);
		if (recordFile.is_open())
		{
			recordFile << "Reward|Quantity|Point\n"; // add the header line
			for (int j = 0; j < i; j++)
			{
				recordFile << reward[j] << "|" << quantity[j] << "|" << redeem_point[j] << "\n";
			}
			recordFile.close();
		}
		else
		{
			cout << "Error updating the Reward.txt file!" << endl;
		}
	}
	else
	{
		cout << "Sorry, you are not one of our member yet.\nReward Redeem System is exclusive for member only.\nDirecting back to Customer Menu...";
		countdown();
		customer_menu();
	}
}
