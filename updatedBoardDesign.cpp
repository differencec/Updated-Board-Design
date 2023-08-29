#include <iostream>
#include <iomanip>

using namespace std;

void setspace(int a)
{
    for (int i = 0; i<a; i++)
    {
        cout << " ";
    }
}

void draw()
{
    const char MAX = 100;
    string board[MAX] = {};

    cout << endl << endl << endl;
    system("color e");
    setspace(45); cout << "      1      2      3      4      5      6      7      8" << endl;
    setspace(45); cout << " ___________________________________________________________\n";
   setspace(45); cout <<  "|  ______ ______ ______ ______ ______ ______ ______ ______  |\n";
   setspace(45); cout <<  "| |      |      |      |      |      |      |      |      | |\n";

   setspace(40); cout << "1" << setw(10) <<   "| |   " << board[0]  << "   |   " << board[1]  << "   |   " << board[2]  << "   |   " <<board[3]  <<"   |   " <<board[4]<<"   |   "<<board[5] <<"   |   " << board[6]<< "   |   "<< board[7] << "   | |  "<< "\n";

    //cout << setw(51) <<   "| |   " << board[0]  << "   |   " << board[1]  << "   |   " << board[2]  << "   |   " <<board[3]  <<"   |   " <<board[4]<<"   |   "<<board[5] <<"   |   " << board[6]<< "   |   "<< board[7] << "   | |  "<< "\n";
   setspace(45); cout <<  "| |______|______|______|______|______|______|______|______| |\n";
   setspace(45); cout <<  "| |      |      |      |      |      |      |      |      | |\n";
    //cout << setw(51) <<   "| |   " << board[8]  << "   |   " << board[9]  << "   |   " << board[10]  << "   |   " <<board[11]  <<"   |   "<<board[12]<<"   |   "<<board[13]<<"   |   " << board[14]<< "   |   "<< board[15] << "   | |  "<< "\n";

    setspace(40); cout << "2" << setw(10) <<   "| |   " << board[8]  << "   |   " << board[9]  << "   |   " << board[10]  << "   |   " <<board[11]  <<"   |   "<<board[12]<<"   |   "<<board[13]<<"   |   " << board[14]<< "   |   "<< board[15] << "   | |  "<< "\n";
   setspace(45);cout <<   "| |______|______|______|______|______|______|______|______| | \n";
   setspace(45); cout <<  "| |      |      |      |      |      |      |      |      | |\n";

    //cout << setw(51) <<   "| |   " << board[16] << "   |   " << board[17] << "   |   " << board[18] << "   |   " <<board[19] <<"   |   "<<board[20]<<"   |   "<<board[21]<<"   |   " << board[22]<< "   |   "<< board[23] << "   | |  "<< "\n";

   setspace(40); cout << "3" << setw(10) <<   "| |   " << board[16] << "   |   " << board[17] << "   |   " << board[18] << "   |   " <<board[19] <<"   |   "<<board[20]<<"   |   "<<board[21]<<"   |   " << board[22]<< "   |   "<< board[23] << "   | |  "<< "\n";

   setspace(45); cout <<  "| |______|______|______|______|______|______|______|______| | \n";
   setspace(45);cout <<   "| |      |      |      |      |      |      |      |      | |\n";
    //cout << setw(51) <<   "| |   " << board[24] << "   |   " << board[25] << "   |   " << board[26] << "   |   " <<board[27] <<"   |   "<<board[28]<<"   |   "<<board[29]<<"   |   " << board[30]<< "   |   "<< board[31] << "   | |   "<< "\n";

   setspace(40);  cout << "4" << setw(10) <<   "| |   " << board[24] << "   |   " << board[25] << "   |   " << board[26] << "   |   " <<board[27] <<"   |   "<<board[28]<<"   |   "<<board[29]<<"   |   " << board[30]<< "   |   "<< board[31] << "   | |   "<< "\n";


   setspace(45);cout <<   "| |______|______|______|______|______|______|______|______| | \n";
   setspace(45);cout <<   "| |      |      |      |      |      |      |      |      | |\n";
    //cout << setw(51) <<   "| |   " << board[32] << "   |   " << board[33] << "   |   " << board[34] << "   |   " <<board[35] <<"   |   "<<board[36]<<"   |   "<<board[37]<<"   |   " << board[38]<< "   |   "<< board[39] << "   | |   "<< "\n";

   setspace(40); cout << "5" << setw(10) <<   "| |   " << board[32] << "   |   " << board[33] << "   |   " << board[34] << "   |   " <<board[35] <<"   |   "<<board[36]<<"   |   "<<board[37]<<"   |   " << board[38]<< "   |   "<< board[39] << "   | |   "<< "\n";


   setspace(45); cout <<  "| |______|______|______|______|______|______|______|______| |\n";
   setspace(45);cout <<   "| |      |      |      |      |      |      |      |      | |\n";
   // cout << setw(51) <<   "| |   " << board[40] << "   |   " << board[41] << "   |   " << board[42] << "   |   " <<board[43] <<"   |   "<<board[44]<<"   |   "<<board[45]<<"   |   " << board[46]<< "   |   "<< board[47] << "   | |   "<< "\n";

   setspace(40); cout << "6" << setw(10) <<   "| |   " << board[40] << "   |   " << board[41] << "   |   " << board[42] << "   |   " <<board[43] <<"   |   "<<board[44]<<"   |   "<<board[45]<<"   |   " << board[46]<< "   |   "<< board[47] << "   | |   "<< "\n";

   setspace(45); cout <<  "| |______|______|______|______|______|______|______|______| | \n";
   setspace(45); cout <<  "| |      |      |      |      |      |      |      |      | | \n";
    //cout << setw(51) <<   "| |   " << board[48] << "   |   " << board[49] << "   |   " << board[50] << "   |   " <<board[51] <<"   |   "<<board[52]<<"   |   "<<board[53]<<"   |   " << board[54]<< "   |   "<< board[55] << "   | |   "<< "\n";

   setspace(40);  cout << "7" << setw(10) <<   "| |   " << board[48] << "   |   " << board[49] << "   |   " << board[50] << "   |   " <<board[51] <<"   |   "<<board[52]<<"   |   "<<board[53]<<"   |   " << board[54]<< "   |   "<< board[55] << "   | |   "<< "\n";


   setspace(45); cout <<  "| |______|______|______|______|______|______|______|______| | \n";
   setspace(45); cout <<  "| |      |      |      |      |      |      |      |      | | \n";
    //cout << setw(51) <<   "| |   " << board[56] << "   |   " << board[57] << "   |   " << board[58] << "   |   " <<board[59] <<"   |   "<<board[60]<<"   |   "<<board[61]<<"   |   " << board[62]<< "   |   "<< board[63] << "   | |   "<< "\n";

   setspace(40);  cout << "8" << setw(10) <<   "| |   " << board[56] << "   |   " << board[57] << "   |   " << board[58] << "   |   " <<board[59] <<"   |   "<<board[60]<<"   |   "<<board[61]<<"   |   " << board[62]<< "   |   "<< board[63] << "   | |   "<< "\n";

   setspace(45); cout <<  "| |______|______|______|______|______|______|______|______| | \n";
   setspace(45); cout <<  "|___________________________________________________________|\n\n";

}

int main(){
    draw();
}

