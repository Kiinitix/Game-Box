#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <string.h>
#include <iomanip>
#include <fstream>
#include <conio.h>

using namespace std;

void det() {

cout<<"*****************Detective game*****************\n";
cout <<"In this game, you need to carefully read and look for evidences.\n"<<endl;
cout <<"Unlike other games, this one is not so complex but here you need to use your brain and find the criminal.\n"<<endl;
cout <<"After every line you need to press any key to continue.\n"<<endl;
cout <<"All the best!.\n\n"<<endl;
cout<<"[Detective arrives at the scene] \n \n";
cout <<"Brother:- Hello, My name is John, "<<endl;
getch();
cout <<"I called you here, "<<endl;
getch();
cout <<"I am his younger brother \n";
getch();
cout<<"[To another man present at the scene] \n";
getch();
cout<<"Detective:-and you are? \n";
getch();
cout<<"Friend:-My name is Steve, and I am a ... I  was a friend of him \n";
getch();
cout <<"[To wife] \n";
getch();
cout<<"Detective;- I am sorry for your loss \n";
getch();
cout<<"[To everyone]\n";
getch();
cout<<"Detective:-Now I want all of you to take a seat nearby while we carry out the investigation and I might need \n you all to answer some questions so please try to cooperate, don't panic, and I promise,\n whoever committed this terrible crime will be punished\n \n \n";
getch();
cout<<"[To brother]\n";
getch();
cout<<"Detective:-I want you to tell me about everything you know, anything related to the crime or anything I should know";
getch();
cout<<"Detective:- Let's start with your relationship with your brother\n";
getch();
cout<<"John:-Ah well.. to start with, I was five when I first met him and even though we were step-brothers,\n he loved me like his own, our father was abusive so he was the only real family I ever had,\n we used to go to school together, share food, well.. that's about it and as for him, he was a very respected man, \neveryone loved him People could be jealous of him but enemies, no I don't think he had any";
getch();
cout<<"Detective:-Yes that's enough, I see you two had a great relationship \n \n";
getch();
cout<<"[To friend]\n";
getch();
cout<<"Detective:-You were his friend right \n";
getch();
cout<<"Steve:-Yes sir \n";
getch();
cout<<"Detective:-See, I want you to answer these questions honestly, think hard, take your time and then answer \n";
getch();
cout<<"Steve:-Yes of course sir \n";
getch();
cout<<"Detective:-Tell me when and how did your friendship begin \n ";
getch();
cout<<"Steve:-College days, He was in the same batch as me, Both of us shared a great interest in football and \nthat's how i got to know him, In my current job we were working together on a project \n";
getch();
cout<<"Detective:-How was his behaviour recently,did you notice anything different \n";
getch();
cout<<"Steve:-Nothing different sir, He was just as lively as he used to be during college days \n";
getch();
cout<<"Detective:-Any unwanted attention he was getting \n";
getch();
cout<<"Steve:-He excelled at everything he did so he used to attract a lot of negative people every \n now and then but it was nothing new or serious\n \n \n" ;
getch();
cout<<"[To wife]\n";
cout<<"Detective:-Are you feeling better \n";
getch();
cout<<"Wife:-Oh oh.. yes i am \n";
getch();
cout<<"Detective:-I have some questions i want to ask you \n";
getch();
cout<<"Wife:-Yes please go ahead \n";
getch();
cout<<"Detective:-How was his behaviour recently \n" ;
getch();
cout<<"Wife:-He was a little tensed about work \n";
getch();
cout<<"Detective:-tensed?? \n";
getch();
cout<<"Wife:-He was working for longer hours for the past month and mentioned about some work trip \n";
getch();
cout<<"Detective:-Can you tell me more about this trip \n";
getch();
cout<<"Wife:-I'm sorry i don't know much about it either \n";
getch();
cout<<"Detective:-OK that's all i wanted to know \n \n \n";
getch();
cout<<"[To everyone]\n";
getch();
cout<<"Detective:-Thank you all for your cooperation \n";
getch();
cout<<"all of you can rest at the hotel we've booked for you \n";
getch();
cout<<"We will call you again \n \n \n";
getch();

cout<<"[Enters the crime scene]\n";
getch();
cout<<"Detective:-Ah shit, Here we go again \n";
getch();

cout<<"\n\n\n" ;
cout<<"What do you think? Who is the real culprit?\n";
cout<<"(1) 1 --> Boss\n"
    <<"(2) 2 --> Wife\n"
    <<"(3) 3 --> Friend\n"
    <<"(4) 4 --> Brother\n" ;
    int result;
    cout<<"Choose a number : ";
    cin>>result ;
    switch(result){
        case 1 : cout<<"You lost.\nGame over....";
        break ;
        case 2 : cout<<"You lost.\nGame over....";
        break ;
        case 3 : cout<<"You won. Congratulations DETECTIVE...!!!\n\nGame over." ;
        break ;
        case 4 : cout<<"You lost.\nGame over....";
        break ;
    }
}


class userdetails
{
    char name[40];
    int credits;
public:
    userdetails()
    {
        credits = 100;
    }
    void getname()
    {
        cout<<"Enter Name: ";
        cin.getline(name,40);
    }
    void disp()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Credits: "<<credits<<endl;
    }
    void add_credits(int n,char* str);
    void r_credits(int n,char* str);
    char* rname(){return name;}
    int rc(){return credits;}
}u;
void userdetails::add_credits(int n,char* str)
    {
        int pos = 0;
        fstream fs;
        fs.open("user.dat",ios::in|ios::binary|ios::out);
        while(!fs.eof())
        {
            pos = fs.tellg();
            fs.read((char*)&u,sizeof(u));
            if(fs)
            {
                if(strcmp(u.rname(),str)==0)
                {
                    credits += n;
                    fs.seekp(pos);
                    fs.write((char*)&u,sizeof(u));
                    break;
                }
            }
        }
    }
    void userdetails::r_credits(int n,char* str)
    {
        int pos = 0;
        fstream fs;
        fs.open("user.dat",ios::in|ios::binary|ios::out);
        while(!fs.eof())
        {
            pos = fs.tellg();
            fs.read((char*)&u,sizeof(u));
            if(fs)
            {
                if(strcmp(u.rname(),str)==0)
                {
                    credits -= n;
                    fs.seekp(pos);
                    fs.write((char*)&u,sizeof(u));
                    break;
                }
            }
        }
    }
const int MAX_TRIES=5;
int letterFill (char, string, string&);
void hang_man(char* p){                                //hangman_game
    string name;
	char letter;
	int num_of_wrong_guesses=0;
	string word;
	string words[]={"india", "pakistan", "nepal", "malaysia", "philippines", "australia", "iran", "ethiopia", "oman", "indonesia", "china"}; //add more names if you want
	srand(time(NULL));
	int n=rand()% 10;           //this will generate random names from the array
	word=words[n];
	string unknown(word.length(),'*');          //generate * names (clue)
	cout << "**************Welcome to hangman...**************\n\n#This game will cost you 10 credits\n\nGuess a country name,";
	cout << "\nEach letter is represented by a star.";
	cout << "\nYou have to type only one letter in one try";
	cout << "\nYou have " << MAX_TRIES << " tries to try and guess the word.";
    u.r_credits(2,p);
	while (num_of_wrong_guesses < MAX_TRIES){
		cout << "\n\n" << unknown;
		cout << "\n\nGuess a letter: ";
		cin >> letter;
		if (letterFill(letter, word, unknown)==0){
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		if (word==unknown){
			cout << word << endl;
			cout << "Yeah! You got it!";
			u.add_credits(2,p);
			break;
		}
	}
	if(num_of_wrong_guesses == MAX_TRIES){
		cout << "\nSorry, you lose...you've been hanged." << endl;
		cout << "The word was : " << word << endl;
		u.r_credits(2,p);
	}
	cin.ignore();
	cin.get();
}
int letterFill (char guess, string secretword, string &guessword){          //function for hangman game
	int i;
	int matches=0;
	int len=secretword.length();
	for (i = 0; i< len; i++){
		if (guess == guessword[i])
			return 0;
		if (guess == secretword[i]){
			guessword[i] = guess;
			matches++;
		}
	}
	return matches;
}
void print_cards(char *message, char *cards, int user_pick){            //this function will print the structure of the game/cards
    int i;
    cout << "\n    ***" << message << "    ***\n";
    cout << "          ._.     ._.     ._.\n";
    cout << "Cards:    |" << cards[0] << "|     |" << cards[1] << "|     |" << cards[2] << "|\n";
    if(user_pick == -1){
        cout << "           1       2       3 \n\n";
    }
    else{
        for (i=0;i<user_pick;i++){
            cout << "\t";
        }
        cout << "           ^-- your pick\n\n";
    }
}

int find_the_ace(char *p){                                 //find the ace game(main)
    int i, ace, total_wager;
    int invalid_choice, pick= -1, wager_one=-1, wager_two=-1;
    char choice_two, cards[3]= {'X','X','X'};

    ace = rand()%3;

    /*if(player credit ==0){
        ("You don't have any credits to wager!\n");
    }
    while(wager_one==-1){
        //reduce credit
    }*/

    cout<<"************Find the Ace************\n\n";
    cout<<"#This game will cost you 10 credits.\n\n";
    cout<<"Three cards will be dealt out, two queens and one ace,\n";
    cout<<"If you find the ace, you will win your wager.\n";
    cout<<"After choosing a card, one of the queen will be revealed.\n";
    cout<<"At this point, you may either select a different card or\n";
    cout<<"try your luck!\n\n";
    print_cards("Dealing cards", cards, -1);
    pick=-1;
    while((pick<1)||(pick>3)){
        cout<<"Select a card: 1,2 or 3\n";
        cin>>pick;
    }
    pick--;
    i=0;
    while(i==ace || i==pick){
        i++;
    }
    cards[i]='Q';
    print_cards("Revealing a queen", cards, pick);
    invalid_choice=1;
    while(invalid_choice){
        cout<<"Would you like to change your pick (y/n):  ";
        cin>>choice_two;
        if(choice_two=='y'||choice_two=='Y'){
            i=invalid_choice=0;
            while(i==pick || cards[i]=='Q'){
                i++;
            }
            pick=i;
            cout<<"Your card pick has been changed to card "<<pick+1<<endl;
        }
        else{
            cout<<"thank you for playing";
        }
        for(i=0;i<3;i++){
            if(ace==i){
                cards[i]='A';
            }
            else{
                cards[i]='Q';
            }
        }
        print_cards("End result", cards, pick);
        if(pick == ace){
            cout<<"You WON!";
            invalid_choice=0;
            u.add_credits(5,p);
        }
        else{
            cout<<"Better luck next time";
            u.r_credits(10,p);
        }
    }
}
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
int row,column;
char turn = 'X';
bool draw = false;


void display_board(){                   //tic tac toe board structure
    cout<<"\n\nPLAYER - 1 [X]\n\nPLAYER - 2 [O]\n\n\n";
    cout<<"       |     |     \n";
    cout<<"    "<<board[0][0]<<"  | "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<"  _____|_____|_____\n";
    cout<<"       |     |     \n";
    cout<<"    "<<board[1][0]<<"  | "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<"  _____|_____|_____\n";
    cout<<"       |     |     \n";
    cout<<"    "<<board[2][0]<<"  | "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<"       |     |     \n";
}

void player_turn(){                 //deciding player's turn
    if(turn == 'X'){
        cout<<"\n       \nPlayer - 1 [X] turn : ";
    }
    else if(turn == 'O'){
        cout<<"\n       \nPlayer - 2 [O] turn : ";
    }
    cin>> choice;
    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move";
    }

    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O'){
        board[row][column] = 'X';
        turn = 'O';
    }else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O'){
        board[row][column] = 'O';
        turn = 'X';
    }else {
        cout<<"Box already filled!\n Please choose another!!\n\n";
        player_turn();
    }
}
bool gameover(){                        //winning conditions
    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;
    draw = true;
    return false;
}

void tic_tac_toe(){                 //main page for tic tac toe board
    cout<<" T I C K -- T A C -- T O E -- G A M E   \n";
    cout<<"#This game will cost you 5 credits.";
    /*

    5 credit -- for both players

    */
    cout<<"\n FOR 2 PLAYERS\n\n";
    while(gameover()){
        display_board();
        player_turn();
        gameover();
    }
    if(turn == 'X' && draw == false){
        cout<<"\n\nCongratulations!\nPlayer with 'O' has won the game";
        display_board();
        /*

        credit ++ for O player
        credit -- for X player

        */
    }
    else if(turn == 'O' && draw == false){
        cout<<"\n\nCongratulations!\nPlayer with 'X' has won the game";
        display_board();
        /*

        credit ++ for X player
        credit -- for O player

        */
    }
    else
    cout<<"\n\nGAME DRAW!!!\n";
}


void showLoadingScreen();
void showBlinkingLights();
void showLoadingScreen2();
void drawLine(int n, char symbol);
void rules1();
void rules2();

class Numberguess
{
    private:
    int n, random, amount, money, y;
    char m;

public:
    void game();
    void game2();
};

void Numberguess :: game()
{
    cout << "\n\nEnter the total amount you want to play with : Rs.";
    cin >> money;
    cout << "Enter the amount to bet on : Rs.";
    cin >> amount;

    while (amount > money)
    {
        cout << "\nInvalid input.\nTry again.\n";
        cout << "\nEnter the amount to bet on : Rs.";
        cin >> amount;
    }
    srand(time(0));
    random = 1 + (rand() % 100);
    //cout << "n = " << random;
    cout << "Enter number between 1 to 100 : ";
    cin >> n;

    if (n == random)
    {
        cout << "Congrats! You won.....\n";
        amount = amount * 2;
        cout << "Rs." << amount << "\n";
        y = (money + amount);
        cout << "Your total money = Rs." << (money + amount) << "\n";
    }
    else
    {
        cout << "\n\nOops! You lost. Better luck next time.\n";
        cout << "The correct number was : " << random;
        y = (money - amount);
        cout << "\nMoney left with you = Rs." << (money - amount) << endl;
    }
}

void Numberguess :: game2()
{
    cout << "Now you can start with amount = Rs. " << y;
    while (y == 0)
    {
        cout << "\nYou have no money left.\n\nEnter the total amount you want to play with : Rs.";
        cin >> y;
        cout << "Enter the amount to bet on : Rs.";
        cin >> amount;
    }

    while (amount > y)
    {
        cout << "Invalid input.\nTry again.\n";
        cout << "Do you want to play again ? ";
        cin >> m;
        if (m == 'Y' || m == 'y')
        {
            cout << "Enter the amount to bet on : Rs.";
            cin >> amount;
        }
        else if (m == 'N' || m == 'n')
        {
            cout << "You can debit your amount." << endl;
            cout << "See you soon.\n"
                 << endl;
                exit(0);
        }
    }
    srand(time(0));
    random = 1 + (rand() % 100);
    cout << "Enter number between 1 to 100 : ";
    cin >> n;

    if (n == random)
    {
        cout << "Congrats! You won.....\n";
        amount = amount * 2;
        cout << "Rs." << amount << "\n";
        y = (money + amount);
        cout << "Your total money = Rs." << y << "\n";
    }
    else
    {
        cout << "\nOops! You lost. Better luck next time.\n";
        cout << "The correct number was : " << random;
        y = y - amount;
        cout << "\nMoney left with you = Rs." << y;
    }
}

class lotto
{
    public:
    void getuserTicket(int userTicket[], int);
    void getwinningNumbers(int winningNums[], int);
    void results(string name, int userTicket[], int winningNums[], int size);
    void Start();
    void playerMenu();
    void playAgain();
    int checkMatches(int userTicket[], int winningNums[], int size);
    bool checkDuplicates(int userticket[], int size, int i);
};

void lotto :: Start()
{
    const int num = 7;
    int userTicket[num];  // array holds user picked numbers
    int winningNums[num]; // array holds random winning numbers
    int matchingNumbers = 0;
    string name1;
    char choice;

    playerMenu();
    cin >> choice;
    cout << endl;
    if (choice == '1')
    {
        cout << "------------------------------" << endl;
        getuserTicket(userTicket, num);
        getwinningNumbers(winningNums, num);
        cout << endl;
        results(name1, userTicket, winningNums, num);
        playAgain();
    }
    else if (choice == 'q' || choice == 'Q')
    {
        cout << "You have chosen to quit the program" << endl;
    }
    else if (choice != '1' || choice != 'q' || choice != 'Q')
    {
        cout << "Invalid selection" << endl;
    }
}

void lotto :: playerMenu()
{
    cout << "\n\t LOTTO GAME :" << endl
         << "---------------------------" << endl
         << "\n\n1) Play Lotto" << endl
         << "q) Quit Program" << endl
         << "\nPlease make a selection : ";
}

void lotto :: playAgain()
{
    char choice;
    cout << " " << endl;
    cout << "If you would like to play again press Y/y\n"
         << "Otherwise press any key then enter key to exit the game" << endl;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        Start();
    }
    else
    {
        exit(0);
    }
}

void lotto :: getuserTicket (int userTicket[], int size)
{
    // Get user lotto numbers
    cout << "\n\nEnter 7 lottery numbers between the numbers 1-40 : \n" << endl;

    //Loop to store 7 lotto numbers in array
    for (int i = 0; i < size; i++)
    {
        cout << "selection # " << i + 1 << " : ";
        cin >> userTicket[i];

        //Loop if user enters invalid numbers
        while (checkDuplicates(userTicket, userTicket[i], i) || userTicket[i] < 1 || userTicket[i] > 40)
        {
            if (userTicket[i] < 1 || userTicket[i] > 40)
            {
                cout << "Invalid number" << endl;
                cout << "Enter a number between 1 and 40 : ";
                cin >> userTicket[i];
                //checks for duplicate numbers in array
            }
            if (checkDuplicates(userTicket, userTicket[i], i))
            {
                cout << "You have already entered that number, please choose a different number : " << endl;
                cin >> userTicket[i];
                cout << endl;
            }
        }
    }
}

void lotto :: getwinningNumbers (int winningNums[], int size)
{
    srand(time(0));

    for (int i = 0; i < size; i++)
    {
        winningNums[i] = 1 + (rand() % 40);

        while (checkDuplicates(winningNums, winningNums[i], i))
        {
            winningNums[i] = 1 + (rand() % 40);
        }
    }
}

void lotto :: results (string playerName, int userTicket[], int winningNums[], int size)
{
    int count = checkMatches(userTicket, winningNums, size);
    cout << "\tYOUR LOTTO RESULTS :" << endl;
    cout << "------------------------------------\n" << endl;

    cout << "WINNING TICKET NUMBERS : ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << winningNums[i];
    }
    cout << endl;
    cout << "" << playerName << "YOUR TICKET : ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << userTicket[i];
    }
    cout << endl
         << endl;
    cout << "\nRESULTS :" << endl;
    cout << "-----------" << endl;
    cout << "Number Matches : " << count << endl;
    cout << endl;
    cout << "Winnings : ";
    switch (count)
    {
    case 1 :
        cout << "NOT BAD - Rs.100\n\n";
        break;
    case 2 :
        cout << "NICE - Rs.1,000\n\n";
        break;
    case 3 :
        cout << "GOOD - Rs.10,000\n\n";
        break;
    case 4 :
        cout << "! LUCKY YOU ! - Rs.50,000\n\n";
        break;
    case 5 :
        cout << "!! GREAT !! - Rs.1,00,000\n\n";
        break;
    case 6 :
        cout << "!!! AWESOME !!!  - Rs.5,00,000\n\n";
        break;
    case 7 :
        cout << "!!!! JACKPOT !!!! - Rs. 10,00,000\n\n";
        break;
    default :
        cout << "SORRY NOTHING\n\n";
        break;
    }
    cout << endl;
}

int lotto :: checkMatches (int userTicket[], int winningNums[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (userTicket[i] == winningNums[j])
            {
                count++;
            }
        }
    }
    return count;
}

bool lotto :: checkDuplicates (int userticket[], int ticket, int i)
{
    bool duplicate = false;

    for (int j = 0; j < i; j++)
    {
        if (userticket[j] == ticket)
        {
            duplicate = true;
        }
    }
    return duplicate;
}

int main (int argc, char **argv)
{
    char playerName[40];
    int amount; // hold player's balance amount
    int bettingAmount;
    int guess;
    int dice; // hold computer generated number
    char choice;
    int age;
    int z = 0;
    int a = 0;
    char x;
    int g = 0;
    ofstream f("user.dat",ios::app|ios::binary);
    ifstream f1("user.dat",ios::in|ios::binary);
    bool flag = false;

    srand(time(0)); // "Seed" the random generator
    cout << "\n\n\n";
    cout << "      ";

    showLoadingScreen();
    showBlinkingLights();
    showLoadingScreen2();

    cout << "\n\n\n\n\n\n\n";

    drawLine(180, '-');
    drawLine(180, '#');
    cout << "\n\n\nEnter Your Name : ";
    cin.getline(playerName,40);
    while(f1.read((char*)&u,sizeof(u)))
    {
        if(strcmp(u.rname(),playerName)==0)
        {
            flag = true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"Create New User!"<<endl;
        u.getname();
        f.write((char*)&u,sizeof(u));
    }
    else{
        system("cls");
        u.disp();
        cout<<"\nYou are ready to play!!";
        Numberguess c;
        lotto l;
        cout << "\n\nOur Game Box has 5 types of games available :-";
        cout << "\n\n1. Number guessing game";
        cout << "\n2. Lotto game";
        cout << "\n3. Find the Ace";
        cout << "\n4. Hang Man";
        cout << "\n5. Tic Tac Toe";
        cout << "\n6. Detective Game";
        cout << "\n6. Quit";
        cout << "\n\nEnter your choice : ";
        cin >> a;
        if (a == 1)
        {
            rules1();
            c.game();

            while (z == 0)
            {
                cout << "\n\nDo you want to play again ? " << endl;
                cin >> x;
                if (x == 'Y' || x == 'y')
                {
                    cout << "Let's play again.!!!!!" << endl;
                    c.game2();
                }
                else
                {
                    if (x == 'N' || x == 'n')
                    {
                        cout << "You can debit your amount." << endl;
                        cout << "See you soon.\n"
                            << endl;
                    }
                    else
                    {
                    };
                    return 0;
                };
            };
        }
        else if (a == 2)
        {
            rules2();
            srand((unsigned int)time(NULL));

            l.Start();
        }
        else if (a == 3){
            system("cls");
            find_the_ace(playerName);
        }
        else if (a == 4){
            system("cls");
            hang_man(playerName);
        }
        else if (a == 5){
            system("cls");
            tic_tac_toe();
        }
        else if (a == 6){
            system("cls");
            det();
        }
        else
        {
            exit(0);
        }
    }

    return 0;
}

void drawLine (int n, char symbol)
{
    for (int i = 0; i < n; i++)
        cout << symbol;
    cout << "\n";
}

void rules1()
{
    system("cls");
    cout << "\n\n";
    drawLine(180, '-');
    cout << "\t\t\t\t\t\t\t\t\t\tRULES OF THE GAME\n";
    drawLine(180, '-');
    cout << "\n1. Choose any number between 1 to 100.\n";
    cout << "\n2. If you win you will get twice the money you bet on.\n";
    cout << "\n3. If you bet on wrong number you will lose .\n\n";
    drawLine(180, '-');
}
void rules2()
{
    system("cls");
    cout << "\n\n";
    drawLine(180, '-');
    cout << "\t\t\t\t\t\t\t\t\t\tRULES OF THE GAME\n";
    drawLine(180, '-');
    cout << "\n1. Enter any 7 numbers between 1 to 40\n";
    cout << "\n2. According to the number of right guess money is alloted \n";
    cout << "\n3. If you bet on wrong number you will lose your betting amount\n\n";
    drawLine(180, '-');
}
void clearScreen (int characterLength)
{
    for (int i = 0; i < characterLength; i++)
    {
        cout << "\b";
    }
};

const int BLUE = 1;
const int GREEN = 2;
const int RED = 4;
const int LIGHTCYAN = 11;
const int LIGHTRED = 12;
const int YELLOW = 14;
const int WHITE = 15;

void changeColour (int colour)
{
    HANDLE hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colour);
};

void showLoadingScreen()
{
    cout << "\n\n";
    system("cls");
    int i;
    string closed = "- - - -", open = "* * * *";
    int colour[] = {RED, GREEN, BLUE, YELLOW, RED};
    cout << closed;

    for (i = 0; i < 5; i++)
    {
        Sleep(300);
        clearScreen(5);
        changeColour(colour[i]);
        cout << open;

        clearScreen(5);
        changeColour(colour[i]);
        cout << open;

        clearScreen(5);
        changeColour(colour[i]);
        cout << open;

        clearScreen(5);
        changeColour(colour[i]);
        cout << open;

        clearScreen(5);
        changeColour(colour[i]);
        cout << open;

        clearScreen(5);
        changeColour(colour[i]);
        cout << open;

        Sleep(300);
        clearScreen(5);
        changeColour(WHITE);
        cout << closed;
    }
    clearScreen(5);
    changeColour(WHITE);
};

void showBlinkingLights()
{
    changeColour(YELLOW);
    cout << " WELCOME ";
    Sleep(300);

    changeColour(LIGHTRED);
    cout << "TO THE";
    Sleep(300);

    changeColour(LIGHTCYAN);
    cout << " GAME BOX ";
    Sleep(300);

    changeColour(WHITE);
};

void showLoadingScreen2()
{
    int i;
    string closed = "- - - -", open = "* * * *";
    int colour[] = {RED, YELLOW, BLUE, GREEN, RED};
    cout << closed;

    for (i = 0; i < 5; i++)
    {
        Sleep(300);
        clearScreen(5);
        changeColour(colour[i]);
        cout << open;

        clearScreen(5);
        changeColour(colour[i]);
        cout << open;

        clearScreen(5);
        changeColour(colour[i]);
        cout << open;

        clearScreen(5);
        changeColour(colour[i]);
        cout << open;

        clearScreen(5);
        changeColour(colour[i]);
        cout << open;

        clearScreen(5);
        changeColour(colour[i]);
        cout << open;

        Sleep(300);
        clearScreen(5);
        changeColour(WHITE);
        cout << closed;

    }
    clearScreen(5);
    changeColour(WHITE);
};
