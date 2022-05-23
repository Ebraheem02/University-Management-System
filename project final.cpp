//COMPLEX ENGINEERING ACTIVITY- MTS-2(B)
//SUBMITTED TO SIR FAROOQ KHAN
//GROUP MEMBERS 
//MALIK IBARAHIM- 211192
//AKBAR- 211219
//M ALI HASHMI- 211165
//ABDILLAH GILL- 211237
//SAHIL KHAN- 211183
//23-MAY-2022
//*********************************************************************************************************************//
//************************************PROGRAM START***************************************//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void cafe()
{
	system ("cls");
	int pizza,shawarma,donut,biryani,burger,fries,sandwich,drink,coffee,icecream,bill,total=0;
	char answer,ans;
	pizza=1200;
	shawarma=200;
	donut=80;
	biryani=250;
	burger=180;
	fries=60;
	sandwich=115;
	drink=50;
	coffee=70;
	icecream=90;

	cout<<"\t\t\tWelcome to AU cafe\t\t"<<endl;
	cout<<"\t\t\t\tMENU"<<endl;
	cout<<"a)pizza:         RS.1200\nb)shawarma:      Rs.200\nc)donut:         RS.80\nd)biryani:       RS.250\ne)burger:        RS.180\nf)fries:         RS.60\ng)sandwich:      RS.115\nh)drink:         RS.50\ni)coffee:        RS.70\nj)icecream:      RS.90"<<endl;
 	
	 do
 	{
	 cout<<"Enter alphabet before the items you want to buy: "<<endl;
	 
 	cout<<"Enter the alphabat: ";
 	cin>>answer;
 	
 	switch(answer)
 	{case 'a':
 		cout<<"You bought a pizza : RS."<<pizza<<endl;
 		bill=pizza+bill;
 		break;
 		
 	case 'b':
	    cout<<"You bought a shawarma : RS."<<shawarma<<endl;;
	   bill=shawarma+bill;
		 break;
		 
	case 'c':
	    cout<<"You bought a donut : RS."<<donut<<endl;
	    bill=donut+bill;
		break;
		
	case 'd':
	    cout<<"You bought biryani : RS."<<biryani<<endl;
	    bill=biryani+bill;
		break;
		
	case 'e':
	    cout<<"You bought a burger : RS."<<burger<<endl;
	    bill=burger+bill;
		break;
	case 'f':
	    cout<<"You bought fries : RS."<<fries<<endl;
	    bill=fries+bill;
		break;
		
	case 'g':
	    cout<<"You bought a sandwich : RS."<<sandwich<<endl;
	    bill=sandwich+bill;
		break;
		
	case 'h':
	    cout<<"You bought a drink : RS."<<drink<<endl;
	    bill=drink+bill;
		break;
		
	case 'i':
	    cout<<"You bought a coffee : RS."<<coffee<<endl;
	bill=coffee+bill;
		break;
		
	case 'j':
	    cout<<"You bought an icecream : RS."<<icecream<<endl;
	   bill=icecream+bill;
		break;	
		
		default:
			cout<<"You bought nothing.Try again."<<endl;
		break;
							 	
	 }
	 cout<<endl;
	 cout<<"If you like to buy more item then enter \"y\"." <<endl;
	 cout<<"If not then enter any other alphabet. Thank you!"<<endl;
	 cout<<"Enter your option please :  ";
cin>>ans;
cout<<endl;
}
while(ans=='y' || ans=='Y');

cout<<"Your total bill is : RS."<<bill<<endl;

cout<<"Thankyou for coming to the AU cafe.Hope you will revisit soon."<<endl;
}
//game//
//Array for the board #using a 2d array
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
//Variable Declaration
int choice;
int row,column;
char turn = 'X';
bool draw = false;

//Function prototyping 

void dis_board(); //to show the current status of the gaming board

void player_turn();//to get the player input and update the board

bool gameover();// to decide weather to declare winner or display game draw
void game();

int main() 
{
	char op;
	cout<<"\t\t\t\tWelcome to the University Management System!!\n\n\n";
	cout<<"There is a game in this system(Tic tac Toe), you have access to the university cafe, and ofcourse you have to work so there is a student portal for you too.\n";
	cout<<" Enter g for playing the game\n Enter c for visiting cafe \n Enter s for working on the portal.";
	cin>>op;
	if(op=='g' || op =='G')
	{
	game();
    }
    else if(op== 'c'|| op== 'C')
    {
    cafe();	
	}
	else if(op=='s'|| op=='S')
	{
	cout<<"\t\t\t\tWelcome to the student portal\n\n"; 
	
	// Input from CSV
    ifstream StudentsData;
    StudentsData.open("students.csv");
    if (StudentsData.fail())
    {
        cerr << "File not found!";
        return 1;
    }
    int linecount = 0, linecount2 = 0;
    string line;
    while (StudentsData.peek() != EOF)
    {
        getline(StudentsData, line);
        linecount++;
    }
    StudentsData.close();
    StudentsData.open("students.csv");

    while (StudentsData.peek() != EOF)
    {
        getline(StudentsData, line, ',');
        linecount2++;
    }
    StudentsData.close();
    StudentsData.open("students.csv");
    linecount2 = linecount2 / 2;
    string Data[linecount][linecount2];
    cout
        << linecount << " " << linecount2 << endl;
    for (int i = 0; i < linecount; i++)
    {
        for (int j = 0; j < linecount2; j++)
        {
            string record;
            getline(StudentsData, record, ',');
            Data[i][j] = record;
        }
    }
    for (int i = 0; i < linecount; i++)
    {
        for (int j = 0; j < linecount2; j++)
        {

            cout << Data[i][j] << endl;
        }
    }

    int num_classes, num_subjects, num_students;
    cout << "Enter the number of classes: " << endl;
    cin >> num_classes;

    cout << "Enter the number of subjects: " << endl;
    cin >> num_subjects;
    cout << ".";

    string classnames[num_classes], allstudentdata[num_classes], subjectnames[num_subjects];
    // Input name of classes
    cout << ".";
    for (int i = 0; i < num_classes; i++)
    {
        cout << "Enter the name of  " << i + 1 << " class: " << endl;
        cin >> classnames[i];
    }

    // Input name of subjects
    for (int i = 0; i < num_subjects; i++)
    {
        cout << "Enter the name of  " << i + 1 << " subject: " << endl;
        cin >> subjectnames[i];
    }
    int classSelect;
    bool flag = true;
    int data[num_classes][num_students][num_subjects];
    string flagstr;
    while (flag)
    {

        cout << "Which class data you want to enter: " << endl;
        for (int i = 0; i < num_classes; i++)
        {
            cout << i << ". " << classnames[i];
        }
        cin >> classSelect;

        // Input data of students
        cout << "** " << classnames[classSelect] << " ***" << endl;
        // Input name of students
        cout << "Enter the number of students : " << endl;
        cin >> num_students;
        string studentnames[num_students], rollnumber[num_students];

        for (int j = 0; j < num_students; j++)

        {
            cout << "Enter the name of  " << j + 1 << " student: " << endl;
            cin >> studentnames[j];
            cout << "Enter the roll number of " << studentnames[j] << endl;
            cin >> rollnumber[j];
            cout << "Enter the numbers of " << studentnames[j] << " in: " << endl;

            for (int k = 0; k < num_subjects; k++)
            {

                cout << subjectnames[k] << ": " << endl;
                int input, marks_type;
                cout << "Enter\n1. For lab perfomance,\n2. For lab report\n3.For Midterm\n4. For CEA\n5. For Final term:";
                cin >> marks_type;
                if (marks_type == 1 || marks_type == 2)
                {
                    int num_labs;
                    cout << "Enter the number of labs: ";
                    cin >> num_labs;
                    int lab_marks[num_labs];
                    int data[num_classes][num_students][num_subjects][5][num_labs];
                    for (int x = 0; x < num_labs; x++)
                    {
                        cout << "Enter the marks for lab " << x << ": ";
                        cin >> data[classSelect][j][k][marks_type][x];
                    }
                }
                else
                {
                    int data[num_classes][num_students][num_subjects][5];
                    cin >> input;
                    data[classSelect][j][k][marks_type] = input;
                }
            }
        }

        cout
            << "Do you want to add more data? (y/n): ";
        cin >> flagstr;
        if (flagstr == "n")
        {
            break;
        }
    }

    // // Output data of students
    // for (int i = 0; i < num_classes; i++)
    // {
    //     cout << "** " << classnames[i] << " ***" << endl;
    //     for (int j = 0; j < num_students; j++)
    //     {
    //         cout << "The numbers of " << studentnames[j] << " in: " << endl;

    //         for (int k = 0; k < num_subjects; k++)
    //         {

    //             cout << subjectnames[k] << ": " << data[i][j][k] << endl;
    //         }
    //     }
    // }
    //
}
// cout << "Find the total numbers of: " << endl;
//         int index;
//         for (int i = 0; i < num_students; i++)
//         {
//             cout << i << ". " << studentnames[i] << endl;
//         }
//         cin >> index;
//         int total = 0;
//         for (int i = 0; i < num_subjects; i++)
//         {
//             for (int j = 0; j < 5; j++)
//             {
//                 if (string(typeid(data[classSelect][index][i]).name()) != "i")
//                 {
//                     for (int k; k < data[classSelect][index][i].length(); k++)
//                     {

//                     }
//                 }
//             }
//             cout << total;

   else
    {
    	cout<<"Please enter a correct key!!/n";
	} }
    
	//game function//
	//Function Defination 1

void game(){

    
    while(gameover()){
        dis_board();
        player_turn();
        gameover();
    }
    if(turn == 'X' && draw == false){
        cout<<"Congratulations!"<<endl<<"Player 2 with symbol 'O' has won the game\n";
    }
    else if(turn == 'O' && draw == false){
        cout<<"Congratulations!"<<endl<<"Player 1 with symbol 'X' has won the game\n";
    }
    else
    cout<<"!!!GAME DRAW!!!";
} 

//Function Defination 2
void dis_board(){

system ("cls");//system("cls") helps in overwriting the old
    // Game Board LAYOUT
    cout<<"   C P -  L A B - T I C  -- T A C -- T O E -- G A M E";
    cout<<"\n         FOR 2 PLAYERS  \n";
cout << "\t Player-1 [X]\n\t Player-2 [O]\n ";
cout << "\t\t     |     |     " << endl;
cout << "\t\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;

cout << "\t\t_____|_____|_____" << endl;
cout << "\t\t     |     |     " << endl;

cout << "\t\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2]<< endl;

cout << "\t\t_____|_____|_____" << endl;
cout << "\t\t     |     |     " << endl;

cout << "\t\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;

cout << "\t\t     |     |     " << endl << endl;

}

//Function Defination 3
void player_turn(){
    if(turn == 'X'){
        cout<<"Player - 1 [X] turn : ";
    }
    else if(turn == 'O'){
        cout<<"Player - 2 [O] turn : ";
    }
    //Taking input from user
    //updating the board according to choice and reassigning the turn Start

    cin>> choice;

    //switch case to get which row and column will be update

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
            cout<<"Invalid Move\n TRY AGAIN\n";
    }

    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O'){
        //updating the position for 'X' symbol if
        //it is not already occupied
        board[row][column] = 'X';
        turn = 'O';
    }else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O'){
    	
        //updating the position for 'O' symbol if
        //it is not already occupied
        board[row][column] = 'O';
        turn = 'X';
    }else {
        //if input position already filled
        cout<<"Box already filled!n Please choose another!";
        player_turn();
    }
   
    dis_board();
}

//Function Defination 4

bool gameover(){
    //checking the win for Simple Rows and Simple Column
    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;

    //checking the win for both diagonal

    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;

    //Check the game to  continue or not
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;

    //Check  game for  draw
    draw = true;
    return false;
}

	

//*********************PROJECT END**********************************//
