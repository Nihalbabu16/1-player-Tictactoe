#include<iostream>

using namespace std;

int a[9];

int L()
{
    if(a[0] == 0 && (a[1] == 0 && a[2] == 2) || (a[2] == 2 && (a[4] == 0 && a[6] == 0)) || (a[2] == 2 && (a[5] == 0 && a[8] == 0)))
        return 2;
     if(a[0] == 0 && (a[1] == 2 && a[2] == 0)|| (a[1] == 2 && (a[4] == 0 && a[7] == 0)))
        return 1;
     if(a[0] == 2 && (a[1] == 0 && a[2] == 0) || (a[0] == 2 && (a[3] == 0 && a[6] == 0)) || (a[0] == 2 && (a[4] == 0 && a[8] == 0)))
        return 0;

     if(a[3] == 0 && (a[4] == 0 && a[5] == 2) || (a[2] == 0 && (a[5] == 2 && a[8] == 0)))
        return 5;
     if(a[3] == 0 && (a[4] == 2 && a[5] == 0) || (a[1] == 0 && (a[4] == 2 && a[7] == 0)) || (a[0] == 0 && (a[4] == 2 && a[8] == 0)) || (a[2] == 0 && (a[4] == 2 && a[6] == 0)))
        return 4;
     if(a[3] == 2 && (a[4] == 0 && a[5] == 0) || (a[0] == 0 && (a[3] == 2 && a[6] == 0)))
        return 3;

    if(a[6] == 0 && (a[7] == 0 && a[8] == 2) || (a[2] == 0 && (a[5] == 0 && a[8] == 2)) || (a[0] == 0 && (a[4] == 0 && a[8] == 2)))
        return 8;
     if(a[6] == 0 && (a[7] == 2 && a[8] == 0) || (a[1] == 0 && (a[4] == 0 && a[7] == 2)))
        return 7;
     if(a[6] == 2 && (a[7] == 0 && a[8] == 0) || (a[0] == 0 && (a[3] == 0 && a[6] == 2)) || (a[2] == 0 && (a[4] == 0 && a[6] == 2)))
        return 6;
    return -1;
}


int W()
{
     if(a[0] == 4 && (a[1] == 4 && a[2] == 2) || (a[2] == 2 && (a[4] == 4 && a[6] == 4)) || (a[2] == 2 && (a[5] == 4 && a[8] == 4)))
        return 2;
     if(a[0] == 4 && (a[1] == 2 && a[2] == 4)|| (a[1] == 2 && (a[4] == 4 && a[7] == 4)))
        return 1;
     if(a[0] == 2 && (a[1] == 4 && a[2] == 4) || (a[0] == 2 && (a[3] == 4 && a[6] == 4)) || (a[0] == 2 && (a[4] == 4 && a[8] == 4)))
        return 0;

     if(a[3] == 4 && (a[4] == 4 && a[5] == 2) || (a[2] == 4 && (a[5] == 2 && a[8] == 4)))
        return 5;
     if(a[3] == 4 && (a[4] == 2 && a[5] == 4) || (a[1] == 4 && (a[4] == 2 && a[7] == 4)) || (a[0] == 4 && (a[4] == 2 && a[8] == 4)) || (a[2] == 4 && (a[4] == 2 && a[6] == 4)))
        return 4;
     if(a[3] == 2 && (a[4] == 4 && a[5] == 4) || (a[0] == 4 && (a[3] == 2 && a[6] == 4)))
        return 3;

    if(a[6] == 4 && (a[7] == 4 && a[8] == 2) || (a[2] == 4 && (a[5] == 4 && a[8] == 2)) || (a[0] == 4 && (a[4] == 4 && a[8] == 2)))
        return 8;
     if(a[6] == 4 && (a[7] == 2 && a[8] == 4) || (a[1] == 4 && (a[4] == 4 && a[7] == 2)))
        return 7;
     if(a[6] == 2 && (a[7] == 4 && a[8] == 4) || (a[0] == 4 && (a[3] == 4 && a[6] == 2)) || (a[2] == 4 && (a[4] == 4 && a[6] == 2)))
        return 6;
    return -1;
}


void display()
{
    cout<<"\n\nDisplaying the board.......\n";
    for(int i=0; i<9; i++){
        if(i % 3 == 0)
            cout<<endl;
        if(a[i] == 2)
            cout<<"-"<<"   ";
        if(a[i] == 4)
            cout<<"X"<<"   ";
        if(a[i] == 0)
            cout<<"0"<<"   ";
    }
}

int OW()
{
    int j = 1 ;
    if((a[0] == 0 && a[1] == 0 && a[2] == 0) || (a[1] == 0 && a[4] == 0 && a[7] == 0) || (a[2] == 0 && a[5] == 0 && a[8] == 0) || (a[2] == 0 && a[4] == 0 && a[6] == 0) || (a[0] == 0 && a[3] == 0 && a[6] == 0) || (a[6] == 0 && a[7] == 0 && a[8] == 0) || (a[3] == 0 && a[4] == 0 && a[5] == 0) || (a[0] == 0 && a[4] == 0 && a[8] == 0) )
        {
            j = 0;
            cout<<"\nYou have won the Game.\n";
            return 0;
        }
    if(j == 1)
        return 1;

}

int CW()
{
    int j=1;
    if((a[0] == 4 && a[1] == 4 && a[2] == 4) || (a[1] == 4 && a[4] == 4 && a[7] == 4) || (a[2] == 4 && a[5] == 4 && a[8] == 4) || (a[0] == 4 && a[3] == 4 && a[6] == 4) || (a[3] == 4 && a[4] == 4 && a[5] == 4) || (a[6] == 4 && a[7] == 4 && a[8] == 4) || (a[6] == 4 && a[7] == 4 && a[8] == 4) || (a[0] == 4 && a[4] == 4 && a[8] == 4) || (a[2] == 4 && a[4] == 4 && a[6] == 4)){
            j = 0;
            cout<<"\nComputer has won the GAME.\n";
            return 0;
        }
    if(j == 1)
        return 1;
}

void init()
{
    for(int i=0; i<9; i++)
        a[i] = 2;
}

void Mark(int b)
{
    if(a[b] == 2){
            a[b] = 4;
            cout<<"\nComputer has played his move.\n";
            display();
        }
        else{
            cout<<"\nError in computer's move!!!.\n";
        }
}

int R()
{
    if(a[4] == 2)
        return 4;

    if(a[4] == 0 && a[2] == 2){
            a[2] == 4;
            return 2;
        }
    else if(a[8] == 2){
            a[8] == 4;
            return 8;
        }
    else if(a[4] == 2){
            a[4] == 4;
            return 4;
        }
    else if(a[3] == 2){
            a[3] == 4;
            return 3;
        }
    else if(a[1] == 2){
            a[1] == 4;
            return 1;
        }
    else if(a[7] == 2){
            a[7] == 4;
            return 7;
        }
}

int isempty()
{
int flag = 0;
for(int i=0;i<9;i++){
        if(a[i] == 2)
            flag = 1;
    }
        return flag;
}

int main(){
    char ch;
    int flag ,k,fgf,g,n,t,fg;
    do{
        n=0;
        flag = 1;
        fg = 0;
        init();
        display();
        do{
            do{
                cout<<"\nEnter place where you want to mark.\n";
                cin>>k;
                if(k<0 || k>9 || a[k] != 2)
                cout<<"\nWrong entry enter again\n";
            }while(k<0 || k>9 || a[k] != 2);

            a[k] = 0;
            cout<<"\nYour move has been marked.\n";
            display();
            fg = isempty();
                if(fg == 0){
                    flag = 0;
                    cout<<"\nMatch tied.\n";
                    break;
                }
            fgf =0;
            if(n<1){
                Mark(R());
                fgf = 1;
            }
            n++;
            if(fgf == 0){
                flag = OW();

                if(flag == 0)
                    break;

                t = W();
                g = L();

                if(t > -1 && t<9)
                {
                    Mark(t);
                }
                else
                if(g!= -1){
                    Mark(g);
                }
                else{
                    Mark(R());
                }
                flag = CW();

                fg = isempty();
                if(fg == 0){
                    flag = 0;
                    cout<<"\nMatch tied.\n";
                    break;
                }
            }
        }while(flag == 1);
        cout<<"\nThank you for playing!!!!.\nDo you want to play again?\n'y' for yes & 'n' for no.\n";
        cin>>ch;
    }while(ch == 'y' || ch == 'Y');

    return 0;
}
