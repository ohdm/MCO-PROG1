#include<stdio.h>
#define TRUE 1
#define FALSE 0
//3d tiktactoe MP WIP

//global vars not allowed


 
	//DION MEL CUBARRUBIAS MP 
	//12282919
	
	
	
	
	
	
	



void displayBoard(char Q, char W, char E, char A, char S, char D, char Z, char X, char C, char R, char T, char Y, char F, char G, char H, char V, char B, char N, char U, char I,
char O, char J, char K, char L, char M, char P, char QQ){ //displays the board
	

		printf("\t\tTIKTACTOE!\n");   //first layer
		printf(" %c | %c | %c \n", Q, W, E );
		printf("---|---|---\n");
		printf(" %c | %c | %c \n", A, S, D  );
		printf("---|---|---\n");
		printf(" %c | %c | %c \n\n\n\n", Z, X, C );
		
		
		//second layer
		printf(" %c | %c | %c \n", R, T, Y  );
		printf("---|---|---\n");
		printf(" %c | %c | %c \n", F, G, H );
		printf("---|---|---\n");
		printf(" %c | %c | %c \n\n\n\n", V, B, N );
		
		//third layer
		printf(" %c | %c | %c \n", U, I, O );
		printf("---|---|---\n");
		printf(" %c | %c | %c \n", J, K, L );
		printf("---|---|---\n");
		printf(" %c | %c | %c  \n", M, P, QQ  );
	 
} 





int isInvalidnum(int nVal){ // will check if input is valid or not, works but its for integers only
	if (nVal != 1 && nVal != 2 && nVal != 3)
	return TRUE;
	else return FALSE; 
}



int RESET(int nVal){ //reset a value for int 
	nVal = 0;
	return nVal;
}




int changeTurn(int nTurn){ //change turns


if (nTurn==1){
	nTurn=nTurn-2;

		return nTurn;
}
else if(nTurn==-1)
	nTurn=nTurn+2;

		return nTurn;

}



void printSpot(){ //prints this
	printf("This Square is Already in Use \n");
}


	
	
	
int checkWin(char Q, char W, char E, char A, char S, char D, char Z, char X, char C, char R, char T, char Y, char F, char G, char H, char V, char B, char N, char U, char I,
char O, char J, char K, char L, char M, char P, char QQ){

if ((Q == 'X' && W == 'X' && E == 'X')||(Q == 'O' && W == 'O' && E == 'O')||(A == 'X' && S == 'X' && D == 'X')||(A == 'O' && S == 'O' && D == 'O')||
(Z == 'X' && X == 'X' && C == 'X')||(Z == 'O' && X == 'O' && C == 'O')||(Q == 'X' && A == 'X' && Z == 'X')||(Q == 'O' && A == 'O' && Z == 'O')||
(W == 'X' && S == 'X' && X == 'X')||(W == 'O' && S == 'O' && X == 'O')||(E == 'X' && D == 'X' && C == 'X')||(E == 'O' && D == 'O' && C == 'O')||
(Q == 'X' && S == 'X' && C == 'X')||(Q == 'O' && S == 'O' && C == 'O')||(E == 'X' && S == 'X' && Z == 'X')||(E == 'O' && S == 'O' && Z == 'O')||


(R == 'X' && T == 'X' && Y == 'X')||(R == 'O' && T == 'O' && Y == 'O')||(F == 'X' && G == 'X' && H == 'X')||(F == 'O' && G == 'O' && H == 'O')||
(V == 'X' && B == 'X' && N == 'X')||(V == 'O' && B == 'O' && N == 'O')||(R == 'X' && F == 'X' && V == 'X')||(R == 'O' && F == 'O' && V == 'O')||
(T == 'X' && G == 'X' && B == 'X')||(T == 'O' && G == 'O' && B == 'O')||(Y == 'X' && H == 'X' && N == 'X')||(Y == 'O' && H == 'O' && N == 'O')||
(R == 'X' && G == 'X' && N == 'X')||(R == 'O' && G == 'O' && N == 'O')||(Y == 'X' && G == 'X' && V == 'X')||(Y == 'O' && G == 'O' && V == 'O')||


(U == 'X' && I == 'X' && O == 'X')||(U == 'O' && I == 'O' && O == 'O')||(J == 'X' && K == 'X' && L == 'X')||(J == 'O' && K == 'O' && L == 'O')||
(M == 'X' && P == 'X' && QQ == 'X')||(M == 'O' && P == 'O' && QQ == 'O')||(U == 'X' && J == 'X' && M == 'X')||(U == 'O' && J == 'O' && M == 'O')||
(I == 'X' && K == 'X' && P == 'X')||(I == 'O' && K == 'O' && P == 'O')||(O == 'X' && L == 'X' && QQ == 'X')||(O == 'O' && L == 'O' && QQ == 'O')||
(U == 'X' && K == 'X' && QQ == 'X')||(U == 'O' && K == 'O' && QQ == 'O')||(M == 'X' && K == 'X' && O == 'X')||(M == 'O' && K == 'O' && O == 'O')||
//horizontal 3d
(Q == 'X' && R == 'X' && U == 'X')||(Q == 'O' && R == 'O' && U == 'O')||(W == 'X' && T == 'X' && I == 'X')||(W == 'O' && T == 'O' && I == 'O')||
(E == 'X' && Y == 'X' && O == 'X')||(E == 'O' && Y == 'O' && O == 'O')||(A == 'X' && F == 'X' && J == 'X')||(A == 'O' && F == 'O' && J == 'O')||
(S == 'X' && G == 'X' && K == 'X')||(S == 'O' && G == 'O' && K == 'O')||(D == 'X' && H == 'X' && L == 'X')||(D == 'O' && H == 'O' && L == 'O')||
(Z == 'X' && V == 'X' && M == 'X')||(Z == 'O' && V == 'O' && M == 'O')||(X == 'X' && B == 'X' && P == 'X')||(X == 'O' && B == 'O' && P == 'O')||
(C == 'X' && N == 'X' && QQ == 'X')||(C == 'O' && N == 'O' && QQ == 'O')||

(Q == 'X' && G == 'X' && QQ == 'X')||(Q == 'O' && G == 'O' && QQ == 'O')||(Z == 'X' && G == 'X' && O == 'X')||(Z == 'O' && G == 'O' && O == 'O')||
(M == 'X' && G == 'X' && E == 'X')||(M == 'O' && G == 'O' && E == 'O')






){ //check winning conditions print 1 if someone wins, print 0 if noone wins, game continues
return 1;
}
else return 0;
}



//*/



int main(){
	
	char Q, W, E, A, S, D, Z, X, C; // first set of values
	char  R, T, Y, F, G, H, V, B ,N; // second set of values
	char U, I, O, J, K, L, M, P, QQ; // third set of values
	int gamestate=1; //state of the game, a 0 means game will end
	int nTurn=1; // will check turns change turn 1 and -1 are, p1 and p2 respectively
	int powerupstate=0; //activates once user prompts for it
	int nStoreVal;  //storing main vals for tiktactoe 3d
	int nPlayer1=1, nPlayer2=2;  //plan to use arrays to store multiple vals
	int playerwin = -1; //0 = player 1 wins,    1 = player 2 wins
    int nSet, nCol, nRow; //inputs for set, column, and row
	int MENU=1; //Menu
	char nCharInp=' '; //this will oversee what the input will be
	char cMenuInp;    //inputs for menu
	int nInputState=1; //checks the state of inputs so that that it can reset
	int checkstate=0; //checks win
	char nChoice=' '; //Choice for powerup
	int nTurnSave1 = 0; //saves powerup gained for player X
	int nTurnSave2 = 0; //saves powerup gained for player O
	char nChoice2= ' '; //choice 2 for resetting the game
	char nChoice3=' '; //choice 3 for resetting the game
		


	 Q = ' ';  W = ' ';  E = ' ';  A = ' ';  S = ' ';  D = ' ';  Z = ' ';  X = ' ';  C = ' '; // set 1
	 R = ' ';  T = ' ';  Y = ' ';  F = ' ';  G = ' ';  H = ' ';  V = ' ';  B = ' ';  N = ' '; // set 2
	 U = ' ';  I = ' ';  O = ' ';  J = ' ';  K = ' ';  L = ' ';  M = ' ';  P = ' ';  QQ = ' '; // set 3
	
	
	
	
	

	while(gamestate==1){   //gamestate
	if(nTurnSave1==1)
		printf("Player X has a power up\n");
	if(nTurnSave2==1)
		printf("Player O has a power up\n");
	
		nChoice=' ';
	
if (nTurn==1){ //checks turns and changes inputs depending on the turn
				nCharInp='X';
			}
				else if (nTurn==-1){
					nCharInp='O';
				}
				printf("PLAYER %c's TURN\n", nCharInp);
				
		
		
		displayBoard(Q, W, E, A, S, D, Z, X, C, R, T, Y, F, G, H, V, B, N, U, I, O, J, K, L, M, P, QQ); //display board
		nCol=0; //reset values
		nRow=0;
		nSet=0;
		while(nInputState==1){
			if (nTurn==1 && nTurnSave1==1){ 
			printf("Would You Like to Use Your Power Up Player X?   Y/N\n", nCharInp);
			while(nChoice!='Y'&& nChoice!='y'&& nChoice!='n' && nChoice!= 'N'){
			
				scanf("%c", &nChoice);
				fflush(stdin);
			}
			
					if(nChoice=='Y'||nChoice=='y'){
						powerupstate+=1;
						nTurnSave1-=1;
					}	
						else if(nChoice=='N'||nChoice=='n'){
							printf("Power up can be used again next turn if user decides to \n");
						}
				}
				
				nChoice=' ';
				
				
				if (nTurn==-1&&nTurnSave2==1){ 
			printf("Would You Like to Use Your Power Up Player O?   Y/N\n", nCharInp);
			while(nChoice!='Y'&& nChoice!='y'&& nChoice!='n' && nChoice!= 'N'){
			
				scanf("%c", &nChoice);
				fflush(stdin);
			}
					if(nChoice=='Y'||nChoice=='y'){
						powerupstate+=1;
						nTurnSave2-=1;
					}	
						else if(nChoice=='N'||nChoice=='n'){
							printf("Power up can be used again next turn if user decides to \n");
						}
				}	
				
				nChoice=' ';
	
			while(isInvalidnum(nSet)){
				
				printf("SELECT A LAYER \nInput a range from 1-3\n");
				scanf("%d", &nSet);	
				fflush(stdin);
			}
			
			while(isInvalidnum(nCol)){
				
				printf("SELECT A COLUMN \nInput a range from 1-3\n");
				scanf("%d", &nCol);
				fflush(stdin);
			}
			
			while(isInvalidnum(nRow)){
				
				printf("SELECT A ROW \nInput a range from 1-3\n");
				scanf("%d", &nRow);
				fflush(stdin);
			}
			
			
				//first set
				if(nSet== 1&& nCol == 1 && nRow ==1){ //Q
						if (powerupstate==1){
						if (Q=='X'){
							Q='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (Q=='O'){
							Q='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(Q==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(Q==' ' && powerupstate==0){
						Q=nCharInp;
						nInputState=0;
						}
						else if (Q!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
				}
				
				
				//I wanted to use arrays but it didn't work out :p 
				
				
				//these will basically store the values, flip the values as well as check for powerup.
				if(nSet== 1&& nCol == 2 && nRow ==1){ //W
					if (powerupstate==1){ //code for flipping
						if (W=='X'){
							W='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (W=='O'){
							W='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(W==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
												
				if(W==' '&& powerupstate==0){ //powerupcode and input code
						W=nCharInp;
						if(nTurn==1){
							nTurnSave1=1;
								}
						if(nTurn==-1){
						nTurnSave2=1;
								}
						nInputState=0;
						}
						else if (W != ' ' && powerupstate==0) {
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}
				}



				//



				
				if(nSet== 1&& nCol == 3 && nRow ==1){ //E
						if (powerupstate==1){
						if (E=='X'){
							E='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (E=='O'){
							E='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(E==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(E==' ' && powerupstate==0){
						E=nCharInp;
						nInputState=0;
						}
						else if (E!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
				}
				
				//
				if(nSet== 1&& nCol == 1 && nRow ==2){ //A
				if (powerupstate==1){ //code for flipping
						if (A=='X'){
							A='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (A=='O'){
							A='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(A==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
												
				if(A==' '&& powerupstate==0){ //powerupcode and input code
						A=nCharInp;
						if(nTurn==1){
							nTurnSave1=1;
								}
						if(nTurn==-1){
						nTurnSave2=1;
								}
						nInputState=0;
						}
						else if (A != ' ' && powerupstate==0) {
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
				}
				//
				
				if(nSet== 1&& nCol == 2 && nRow ==2){ //S
				if (powerupstate==1){
						if (S=='X'){
							S='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (S=='O'){
							S='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(S==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(S==' ' && powerupstate==0){
						S=nCharInp;
						nInputState=0;
						}
						else if (S!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
				}
				
				
				//
				if(nSet== 1&& nCol == 3 && nRow ==2){ //D
						if (powerupstate==1){ //code for flipping
						if (D=='X'){
							D='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (D=='O'){
							D='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(D==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
												
				if(D==' '&& powerupstate==0){ //powerupcode and input code
						D=nCharInp;
						if(nTurn==1){
							nTurnSave1=1;
								}
						if(nTurn==-1){
						nTurnSave2=1;
								}
						nInputState=0;
						}
						else if (D != ' ' && powerupstate==0) {
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
				}
				//
				
				if(nSet== 1&& nCol == 1 && nRow ==3){ //Z
					if (powerupstate==1){
						if (Z=='X'){
							Z='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (Z=='O'){
							Z='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(Z==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;		
							}
							
					if(Z==' ' && powerupstate==0){
						Z=nCharInp;
						nInputState=0;
						}
						else if (Z!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}
				}
				//
				
				if(nSet== 1&& nCol == 2 && nRow ==3){ //X
					if (powerupstate==1){ //code for flipping
						if (X=='X'){
							X='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (X=='O'){
							X='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(X==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
												
				if(X==' '&& powerupstate==0){ //powerupcode and input code
						X=nCharInp;
						if(nTurn==1){
							nTurnSave1=1;
								}
						if(nTurn==-1){
						nTurnSave2=1;
								}
						nInputState=0;
						}
						else if (X != ' ' && powerupstate==0) {
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
				}
				
				//
				
				if(nSet== 1&& nCol == 3 && nRow ==3){ //C
				if (powerupstate==1){
						if (C=='X'){
							C='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (C=='O'){
							C='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(C==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(C==' ' && powerupstate==0){
						C=nCharInp;
						nInputState=0;
						}
						else if (C!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}
				}
				//
	// second set
				if(nSet== 2&& nCol == 1 && nRow ==1){ //R
					if (powerupstate==1){
						if (R=='X'){
							R='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (R=='O'){
							R='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(R==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(R==' ' && powerupstate==0){
						R=nCharInp;
						nInputState=0;
						}
						else if (R!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
				}
				//
				
				if(nSet== 2&& nCol == 2 && nRow ==1){ //T
					if (powerupstate==1){
						if (T=='X'){
							T='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (T=='O'){
							T='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(T==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(T==' ' && powerupstate==0){
						T=nCharInp;
						nInputState=0;
						}
						else if (T!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}		
					}
					//
					
				if(nSet== 2&& nCol == 3 && nRow ==1){ //Y
					if (powerupstate==1){
						if (Y=='X'){
							Y='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (Y=='O'){
							Y='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(Y==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(Y==' ' && powerupstate==0){
						Y=nCharInp;
						nInputState=0;
						}
						else if (Y!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
					
				//
				if(nSet== 2&& nCol == 1 && nRow ==2){ //F
					if (powerupstate==1){
						if (F=='X'){
							F='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (F=='O'){
							F='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(F==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
								
							}
							
					if(F==' ' && powerupstate==0){
						F=nCharInp;
						nInputState=0;
						}
						else if (F!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
						
							
						
						//
					if(nSet== 2&& nCol == 2 && nRow ==2){ //G
						if (powerupstate==1){
						if (G=='X'){
							G='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (G=='O'){
							G='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(G==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(G==' ' && powerupstate==0){
						G=nCharInp;
						nInputState=0;
						}
						else if (G!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
							
							
					//		
					if(nSet== 2&& nCol == 3 && nRow ==2){ //H
						if (powerupstate==1){
						if (H=='X'){
							H='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (H=='O'){
							H='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(H==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(H==' ' && powerupstate==0){
						H=nCharInp;
						nInputState=0;
						}
						else if (H!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
							//
							
					if(nSet== 2&& nCol == 1 && nRow ==3){ //V
						if (powerupstate==1){
						if (V=='X'){
							V='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (V=='O'){
							V='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(V==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(V==' ' && powerupstate==0){
						V=nCharInp;
						nInputState=0;
						}
						else if (V!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
						}
						//
						
					if(nSet== 2&& nCol == 2 && nRow ==3){ //B
						if (powerupstate==1){
						if (B=='X'){
							B='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (B=='O'){
							B='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(B==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(B==' ' && powerupstate==0){
						B=nCharInp;
						nInputState=0;
						}
						else if (B!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
					
					//
					if(nSet== 2&& nCol == 3 && nRow ==3){ //N
						if (powerupstate==1){
						if (N=='X'){
							N='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (N=='O'){
							N='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(N==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(N==' ' && powerupstate==0){
						N=nCharInp;
						nInputState=0;
						}
						else if (N!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}	
							
	//set 3
					if(nSet== 3&& nCol == 1 && nRow ==1){ //U
						if (powerupstate==1){
						if (U=='X'){
							U='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (U=='O'){
							U='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(U==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(U==' ' && powerupstate==0){
						U=nCharInp;
						nInputState=0;
						}
						else if (U!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
					//
					
					if(nSet== 3&& nCol == 2 && nRow ==1){ //I
						if (powerupstate==1){ //code for flipping
						if (I=='X'){
							I='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (I=='O'){
							I='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(I==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
												
				if(I==' '&& powerupstate==0){ //powerupcode and input code
						I=nCharInp;
						if(nTurn==1){
							nTurnSave1=1;
								}
						if(nTurn==-1){
						nTurnSave2=1;
								}
						nInputState=0;
						}
						else if (I != ' ' && powerupstate==0) {
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
					//
					
					if(nSet== 3&& nCol == 3 && nRow ==1){ //O
						if (powerupstate==1){
						if (O=='X'){
							O='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (O=='O'){
							 O='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(O==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(O==' ' && powerupstate==0){
						O=nCharInp;
						nInputState=0;
						}
						else if (O!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
					//
					
					
					if(nSet== 3&& nCol == 1 && nRow ==2){ //J
						if (powerupstate==1){ //code for flipping
						if (J=='X'){
							J='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (J=='O'){
							J='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(J==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
												
				if(J==' '&& powerupstate==0){ //powerupcode and input code
						J=nCharInp;
						if(nTurn==1){
							nTurnSave1=1;
								}
						if(nTurn==-1){
						nTurnSave2=1;
								}
						nInputState=0;
						}
						else if (J != ' ' && powerupstate==0) {
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
					//
					
					if(nSet== 3&& nCol == 2 && nRow ==2){ //K
						if (powerupstate==1){
						if (K=='X'){
							K='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (K=='O'){
							 K='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(K==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(K==' ' && powerupstate==0){
						K=nCharInp;
						nInputState=0;
						}
						else if (K!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
					//
					
					if(nSet== 3&& nCol == 3 && nRow ==2){ //L
					if (powerupstate==1){ //code for flipping
						if (L=='X'){
							L='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (L=='O'){
							L='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(L==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
												
				if(L==' '&& powerupstate==0){ //powerupcode and input code
						L=nCharInp;
						if(nTurn==1){
							nTurnSave1=1;
								}
						if(nTurn==-1){
						nTurnSave2=1;
								}
						nInputState=0;
						}
						else if (L != ' ' && powerupstate==0) {
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}
					}
					//
					
					
					if(nSet== 3&& nCol == 1 && nRow ==3){ //M
						if (powerupstate==1){
						if (M=='X'){
							M='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (M=='O'){
							 M='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(M==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(M==' ' && powerupstate==0){
						M=nCharInp;
						nInputState=0;
						}
						else if (M!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
							//
							
							
					if(nSet== 3&& nCol == 2 && nRow ==3){ //P
						if (powerupstate==1){ //code for flipping
						if (P=='X'){
							P='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (P=='O'){
							P='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(P==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
												
				if(P==' '&& powerupstate==0){ //powerupcode and input code
						P=nCharInp;
						if(nTurn==1){
							nTurnSave1=1;
								}
						if(nTurn==-1){
						nTurnSave2=1;
								}
						nInputState=0;
						}
						else if (P != ' ' && powerupstate==0) {
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
					//
					
					
					if(nSet== 3&& nCol == 3 && nRow ==3){ //QQ
						if (powerupstate==1){
						if (QQ=='X'){
							QQ='O';
							powerupstate=0;
							nInputState=0;
									}
					else if (QQ=='O'){
							 QQ='X';
							powerupstate=0;
							nInputState=0;
									}
						else	if(QQ==' '){
									printf("This square is not in use, Please Input another square \n");
									nSet=0; nCol=0; nRow=0;
								}
								else
									nSet=0; nCol=0; nRow=0;
							
									
									
							}
							
					if(QQ==' ' && powerupstate==0){
						QQ=nCharInp;
						nInputState=0;
						}
						else if (QQ!=' ' && powerupstate==0){
						nSet=0; nCol=0; nRow=0;
							printSpot();
						}	
					}
				
		
	
		}
		
	nInputState=1;
	checkstate= checkWin(Q, W, E, A, S, D, Z, X, C, R, T, Y, F, G, H, V, B, N, U, I, O, J, K, L, M, P, QQ);
	if(checkstate==1){
		system("cls");
		nChoice2=' ';
		 nChoice3=' ';
			
					
			while(nChoice2!='Y'&& nChoice2!='y'&& nChoice2!='N' && nChoice2!='n' ){
				system("cls");
				displayBoard(Q, W, E, A, S, D, Z, X, C, R, T, Y, F, G, H, V, B, N, U, I, O, J, K, L, M, P, QQ);
				printf("Player %c Wins!\n", nCharInp);
				printf("Do you want to Play again?\n");
				printf("Player X     Y/N\n");
				scanf("%c", &nChoice2);
			}
			while(nChoice3!='Y'&& nChoice3!='y'&& nChoice3!='N' && nChoice3!='n' ){
				system("cls");
				displayBoard(Q, W, E, A, S, D, Z, X, C, R, T, Y, F, G, H, V, B, N, U, I, O, J, K, L, M, P, QQ);
				printf("Player %c Wins!\n", nCharInp);
				printf("Do you want to Play again?\n");
				printf("Player O     Y/N\n");
				scanf("%c", &nChoice3);
			}
			if((nChoice2=='Y'||nChoice2=='y')&& (nChoice3=='Y'||nChoice3=='y')){
	Q = ' ';  W = ' ';  E = ' ';  A = ' ';  S = ' ';  D = ' ';  Z = ' ';  X = ' ';  C = ' '; // set 1
	 R = ' ';  T = ' ';  Y = ' ';  F = ' ';  G = ' ';  H = ' ';  V = ' ';  B = ' ';  N = ' '; // set 2
	 U = ' ';  I = ' ';  O = ' ';  J = ' ';  K = ' ';  L = ' ';  M = ' ';  P = ' ';  QQ = ' '; // set 3
	 nSet=0; nRow=0; nCol=0;
	 nChoice2=' ';
	 nChoice3=' ';
	 nTurnSave1=0;
	 nTurnSave2=0;
	 powerupstate=0;
			}
			
	else{
		system("cls");
	displayBoard(Q, W, E, A, S, D, Z, X, C, R, T, Y, F, G, H, V, B, N, U, I, O, J, K, L, M, P, QQ);
	gamestate=0;
	printf("Thanks for Playing!\n");
	}
	}
	nTurn=changeTurn(nTurn);
	system("cls");
		


}
printf("Thank You For Playing\n");
//	printf("Do you want to play again?  Y/N \n");
//	scanf("%c", &cMenuInp);




	return 0;
}
