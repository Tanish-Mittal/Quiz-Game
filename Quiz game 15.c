#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char name[200];
    int p;
    int prc;
   int sub;
    struct node *next;
};
struct node *mhead=NULL;
struct node *shead=NULL;
struct node *chead=NULL;
struct node *sphead=NULL;
struct node *ghead=NULL;
struct node *sortedlist(struct node *head);
void start();
void maths();
void science();
void computer();
void sports();
void gk();
int point=-1;
int npoint=-1;
int per=0;
char username[200];
int subject;
void pt();
void pr();
void help();
void record();
void score();
void main()
{    system("clear");
     int c;
  do     
 {     
     printf("\t\t\t\t\t     QUIZ GAME USING C PROGRAMMING\n");
     printf("\n\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t              WELCOME ");
     printf("\n\t\t\t\t\t                to ");
     printf("\n\t\t\t\t\t             THE GAME ");
     printf("\n\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t        ....TEST YOUR KNOWLEDGE....    ") ;
     printf("\n\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t > Press 1 to start the game");
     printf("\n\t\t\t\t\t > press 2 for help            ");
     printf("\n\t\t\t\t\t > press 3 for previous score            ");
     printf("\n\t\t\t\t\t > press 4 to quit the game            ");
     printf("\n\t\t\t\t\t________________________________________\n\n");
     scanf("%d",&c);
     if(c==1)
     {
       start();
       break;
     }
     else if(c==2)
     {
        help();
        break;
     }
     else if(c==3)
     {
        score();
        break;
     }
     else if (c==4)
     {
         printf("Quit");
        exit(0);
     }
     else 
     {
         system("clear");
        printf("SOMETHING ENTERTED WRONG\n"); 
     }
 }while(1);
}
void start()
{   system("clear");
    printf("ENTER YOUR FIRST NAME :");
    scanf("%s",&username);
    system("clear");
     int b;
     do
    { printf("\n\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t              FOR STARTING  ");
     printf("\n\t\t\t\t\t                  THE ");
     printf("\n\t\t\t\t\t               QUIZ GAME ");
     printf("\n\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t   .....SELECT THE TYPE OF QUIZ.....    ") ;
     printf("\n\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t > Press 1 for Selecting Maths Quiz");
     printf("\n\t\t\t\t\t > Press 2 for Selecting Science Quiz  ");
     printf("\n\t\t\t\t\t > Press 3 for Selecting Computer Quiz");
     printf("\n\t\t\t\t\t > Press 4 for Selecting Sports Quiz");
     printf("\n\t\t\t\t\t > Press 5 for Selecting G.K Quiz  ");
     printf("\n\t\t\t\t\t________________________________________\n\n");
     scanf("%d",&b);
     if(b==1)
     {
      maths();  
      break;
     }
     else if(b==2)
     {
        science(); 
        break;
     }
     else if(b==3)
     {
        computer(); 
        break;
     }
     else if(b==4)
     {
        sports(); 
     break;
         
     }
     else if(b==5)
     {
        gk(); 
         break;
         
     }
     else
     {
         system("clear");
         printf("SOMETHING ENTERTED WRONG....\nYOU HAVE TO SELECTED THE QUIZ BY WRITING A NUMBER FROM 1 TO 5....AS MENTION BELOW \n");
     }
    }while(1);
}  
void maths()
{
    system ("clear");
    point=0;
    npoint=0;
    subject =1;
    int a[10];
    do
    {printf("Q1.\t What will be the sum of internal angles of a septagon?\n1) 650\n2) 700\n3) 450\n4) 900\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[0]);
    if(a[0]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The sum of the interior angles of a polygon can be calculated using the formula = (number of sides – 2) × 180\nHere, number of sides is 7.\nSo, the sum of interior angles of a septagon = (7 – 2) × 180 = 5 × 180 = 900");
    break;
        
    }
    else if(a[0]==1 || a[0]==2 || a[0]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: The sum of the interior angles of a polygon can be calculated using the formula = (number of sides – 2) × 180\nHere, number of sides is 7.\nSo, the sum of interior angles of a septagon = (7 – 2) × 180 = 5 × 180 = 900");        
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m1;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m1);
    system ("clear");
    do
    {printf("Q2.\t  What will be the exterior angles of a hexagon?\n1) 7.2°\n2) 60°\n3) 54°\n4) 108°\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[1]);
    if(a[1]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The exterior angles of a polygon can be found using the formula = 360/numberofsides.\nSince, the number of sides of a hexagon is 6.\nTherefore, the exterior angle of a hexagon is = 360/6 = 60°");
    break;
        
    }
    else if(a[1]==4 || a[1]==1 || a[1]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: The exterior angles of a polygon can be found using the formula = 360/numberofsides.\nSince, the number of sides of a hexagon is 6.\nTherefore, the exterior angle of a hexagon is = 360/6 = 60°");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m2;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m2);
    system ("clear");
    do
    {printf("Q3.\t  What is the circle which connects all the vertices of a polygon called?\n1) Semi-circle\n2) Incircle\n3) Outer circle\n4) Circumcircle\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[2]);
    if(a[2]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: A circle which connects all the vertices of the triangle is called as a circumcircle. Whereas, if touches the sides of the polygon internally then it is called as incircle.");
    break;
        
    }
    else if(a[2]==2 || a[2]==1 || a[2]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: A circle which connects all the vertices of the triangle is called as a circumcircle. Whereas, if touches the sides of the polygon internally then it is called as incircle.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m3;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m3);
     system ("clear");
    do
    {printf("Q4.\t  What will be the sum of exterior angle of a regular polygon?\n1) 360°\n2) 180°\n3) 540°\n4) 120°\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[3]);
    if(a[3]==1)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The sum of the external angles of a regular polygon is always 360°. When we push all the angles of a convex polygon the angle converges and form a total of 360°. This angle is also called as perigon angle.");
    break;
        
    }
    else if(a[3]==2 || a[3]==4 || a[3]==3)
    {
        ++npoint;
        printf("WRONG\n");
         printf("Explanation: The sum of the external angles of a regular polygon is always 360°. When we push all the angles of a convex polygon the angle converges and form a total of 360°. This angle is also called as perigon angle.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m4;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m4);    
     system ("clear");
    do
    {printf("Q5.\t  A polygon is 3D shape with straight sides.\n1) True\n2) False  \n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[4]);
    if(a[4]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: A polygon is a shape constructed using straight sides. It is encompassed within the boundaries of lines in a regular or irregular manner. But a circle or any other curve does not fall under polygon. It is two dimensional in nature.");
    break;
        
    }
    else if(a[4]==1)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: A polygon is a shape constructed using straight sides. It is encompassed within the boundaries of lines in a regular or irregular manner. But a circle or any other curve does not fall under polygon. It is two dimensional in nature.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m5;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m5);    
     system ("clear");
    do
    {printf("Q6.\t   If the angles of a four sided polygon are in the ratio 7:8:9:12, then the angles would be?\n1) 70, 80, 90, 100\n2) 70, 70, 80, 80\n3) 120, 70, 80, 100\n4) 70, 80, 90, 120\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[5]);
    if(a[5]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: Let us assume x to be the common multiple.\nNow, the sides of the four sided polygon would be 7x, 8x, 9x and 12x.\nThe sum total of any four sided polygon is 360°.\nTherefore 7x+8x+9x+12x=360\nTherefore 36x=360\nTherefore x=10°\nTherefore the angles are, 7x=70, 8x=80, 9x=90 and 12x=120.\nOne can recheck their answer by, verifying the total as One can recheck their answer by, verifying the total as 360°.");
    break;
        
    }
    else if(a[5]==2 || a[5]==1 || a[5]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: Let us assume x to be the common multiple.\nNow, the sides of the four sided polygon would be 7x, 8x, 9x and 12x.\nThe sum total of any four sided polygon is 360°.\nTherefore 7x+8x+9x+12x=360\nTherefore 36x=360\nTherefore x=10°\nTherefore the angles are, 7x=70, 8x=80, 9x=90 and 12x=120.\nOne can recheck their answer by, verifying the total as One can recheck their answer by, verifying the total as 360°.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m6;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m6);    
      system ("clear");
    do
    {printf("Q7.\t  In a quadrilateral the angles are 40°,120°,10° and x. Find x.\na1) 40°\n2) 120°\n3) 190°\n4) 180°\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[6]);
    if(a[6]==3)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: A quadrilateral is a four sided polygon. Therefore the sum of all the interior angles is 360°.\nTherefore 40+120+10+x=360\nTherefore 170+x=360\nTherefore x=190.");
    break;
        
    }
    else if(a[6]==2 || a[6]==1 || a[6]==4)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation: A quadrilateral is a four sided polygon. Therefore the sum of all the interior angles is 360°.\nTherefore 40+120+10+x=360\nTherefore 170+x=360\nTherefore x=190.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m7;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m7);    
       system ("clear");
    do
    {printf("Q8.\t  What angle is subtended by a semicircle?\n1) 360°\n2) 300°\n3) 180°\n4) 90°\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[7]);
    if(a[7]==3)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: A circle subtends a whole of 360°, this is the measure of one complete rotation over the circumference of the circle. Now, the semicircle would subtend an angle of 180°.");
    break;
        
    }
    else if(a[7]==2 || a[7]==1 || a[7]==4)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation: A circle subtends a whole of 360°, this is the measure of one complete rotation over the circumference of the circle. Now, the semicircle would subtend an angle of 180°.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m8;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m8);    
       system ("clear");
    do
    {printf("Q9.\t   Any right angled triangle must have how may angles in total?\n1) Two angles\n2) Four angles\n3) One angle\n4) Three angles\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[8]);
    if(a[8]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: In any triangle irrespective of any type of triangle it has three angles in total. Here if the question would ask the ‘how many angles other than right angle’ then the answer would be two angles.");
    break;
        
    }
    else if(a[8]==2 || a[8]==1 || a[8]==3)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation: In any triangle irrespective of any type of triangle it has three angles in total. Here if the question would ask the ‘how many angles other than right angle’ then the answer would be two angles.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m9;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m9);    
           system ("clear");
    do
    {printf("Q10.\t A four sided polygon has all sides equal in length, what would be the angle between two adjacent sides?\n1) Exactly 90°\n2) 90° or any acute angle\n3) 90° or any obtuse angle\n4) Can be any angle\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[9]);
    if(a[9]==1)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: When a four sided polygon has its all sides equal in length it is a square. Any square has it’s angles =90°. Hence the answer would be 90°. Here the other options won’t be accurate. For example if a student selects the option 90° or any acute angle it would be partially correct because in a square the angles are always right angles.");
    break;
        
    }
    else if(a[9]==2 || a[9]==4 || a[9]==3)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation: When a four sided polygon has its all sides equal in length it is a square. Any square has it’s angles =90°. Hence the answer would be 90°. Here the other options won’t be accurate. For example if a student selects the option 90° or any acute angle it would be partially correct because in a square the angles are always right angles.");
     break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m10;
    printf("\n\nPRESS ANY DIGIT TO KNOW YOUR SCORES:");
    scanf("%d",&m10);
    pt();
    pr();
    record();
    int n;
    do
    {printf("\n\n\n>PRESS 1 IF YOU WANTS TO TRY TO PLAY AN OTHER TYPE OF QUIZ ");
      printf("\n\n\n>PRESS 2 IF YOU WANTS TO GO TO THE MAIN SCREEN OF QUIZ ");
      printf("\n\n\n>PRESS 3 IF YOU WANTS TO END THE GAME NOW\n ");
      scanf("%d",&n);
      if(n==1)
      {
          start();
          break;
      }
      else if(n==2)
      {
          main();
          break;
          
      }
      else if(n==3)
      {
          system("clear");   
          printf("THANKS FOR PLAYING THE QUIZ GAME");
          break;
          
      }
      else
      {
          system ("clear");
          printf("SOMETHING ENTERED WRONG\nPLEASE ENTER YOUR CHOICE AGAIN\n");
      }
     }while(1);
     
}
void pt()
{
    system("clear");
  printf("YOUR POINTS IS %d OUT OF 10\n",point);
  printf("NUMBER OF POINTS LOSE IS %d OUT OF 10\n",npoint);
}
void pr()
{
     per=point*10;
    if(per>=40)
  printf("\n\n\nYOUR PERCENTAGE IS %d %\n CONGRATULATIONS YOU PASS THE QUIZ",per); 
   else
   printf("\nYOUR PERCENTAGE IS %d %\n FAIL\n\n\n",per); 
}
void help()
{
    system("clear");
    do
    {
    int j;    
    printf(">TO START THE QUIZ YOU HAVE TO PRESS 1 (after going to the main screen of the game)\n");
    printf(">TO QUIT THE QUIZ GAME YOU HAVE TO PRESS 3 (after going to the main screen of the game)\n");
    printf(">SELECT THE QUIZ OUT OF 5(MATHS,SCIENCE,COMPUTER,SPORTS,G.K)\n");
    printf(">EACH QUIZ CONTAIN 10 QUESTIONS\n>EACH QUESTION IS OF 1 MARKS/POINT \n");
    printf(">CORRECT ANSWER = 1 POINTS\t\t\t\t>INCORRECT ANSWER =0 POINTS\n");
    printf(">TOTAL POINTS WILL BE SHOWN AT THE END OF THE QUIZ\n\n\n\n\n\n\n\n");
    printf("PRESS ANY DIGIT  for going to main screen of the game\n");
    scanf("%d",&j);
    main();
    }while(1);
    
}
void science()
{
   system ("clear");
    point=0;
    npoint=0;
    subject=2;
     int a[10];
    do
    {printf("Q1.\tIn the lower layers of atmosphere, what range of wavelengths of light is predominant?\n1) Less than 100 nm\n2) Greater than 300 nm\n3) Between 100-300 nm\n4) All wavelengths are equally present\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[0]);
    if(a[0]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: In the lower layers of atmosphere, light of wavelengths greater than 300nm are present and it is because of this reason, there is generally no ozone formation at the ground level.");
    break;
        
    }
    else if(a[0]==1 || a[0]==4 || a[0]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: In the lower layers of atmosphere, light of wavelengths greater than 300nm are present and it is because of this reason, there is generally no ozone formation at the ground level.");        
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m1;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m1);
    system("clear");
    do
    {printf("Q2.\tWhat does the ratio of the mass of water vapour to mass of air indicate?\n1) Absolute humidity\n2) Specific humidity\n3) Relative humidity\n4) Approximate humidity\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[1]);
    if(a[1]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: Specific humidity is the mass of water vapour per unit mass of air mixture.");
    break;
        
    }
    else if(a[1]==1 || a[1]==4 || a[1]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: Specific humidity is the mass of water vapour per unit mass of air mixture.");        
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m2;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m2);
    system ("clear");
    do
    {printf("Q3.\t  What is the region of mild and irregular wind in the equatorial region known as?\n1) Trade winds\n2) Westerlies\n3) Doldrums\n4) Easterlies\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[2]);
    if(a[2]==3)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: Doldrums are the irregular winds and their exact location is hard to analyse. Ships in the region of doldrums might restrict its movement due to a lack of proper wind.");
    break;
        
    }
    else if(a[2]==2 || a[2]==1 || a[2]==4)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation:Doldrums are the irregular winds and their exact location is hard to analyse. Ships in the region of doldrums might restrict its movement due to a lack of proper wind.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m3;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m3);
     system ("clear");
    do
    {printf("Q4.\t  “Roaring forties” is the term used to describe which of the following winds?\n1) East-to-west air winds in the southern hemisphere\n2) West-to east air winds in the northern hemisphere\n3) East-to-west air winds in the northern hemisphere\nd) West-to-east air winds in the southern hemisphere\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[3]);
    if(a[3]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: Roaring forties found in the southern hemisphere are strong westerly winds caused by air displaced from the equator to the South Pole and aid yachtsmen in on competitions and voyages.");
    break;
        
    }
    else if(a[3]==2 || a[3]==1 || a[3]==3)
    {
        ++npoint;
        printf("WRONG\n");
         printf("Explanation: Roaring forties found in the southern hemisphere are strong westerly winds caused by air displaced from the equator to the South Pole and aid yachtsmen in on competitions and voyages.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m4;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m4);    
     system ("clear");
    do
    {printf("Q5.\t   Which of the following statements is true?\n1) Troposphere is equally thick across different parts of the world\n2) Troposphere contains the ozone layer\n3) Troposphere is thinner at the equator than at the poles\n4) Troposphere is thicker at the equator than at the poles \n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[4]);
    if(a[4]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: Troposphere is nearly 16-17km thick at the equator and thins down to approximately 8km at the poles.");
    break;
        
    }
    else if(a[4]==1 || a[4]==2 || a[4]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation:Troposphere is nearly 16-17km thick at the equator and thins down to approximately 8km at the poles.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m5;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m5);    
     system ("clear");
    do
    {printf("Q6.\t The temperature decreases with altitude in the stratosphere layer.\n1) True\n2) False \n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[5]);
    if(a[5]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation:  Temperature slightly increases with altitude in the stratosphere due to absorption of UV radiations from the sun, by the ozone layer present in the stratosphere.");
    break;
        
    }
    else if(a[5]==1)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation:  Temperature slightly increases with altitude in the stratosphere due to absorption of UV radiations from the sun, by the ozone layer present in the stratosphere.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m6;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m6);    
      system ("clear");
    do
    {printf("Q7.\t   Which of the following indicates the correct order of the principal layers of the earth’s atmosphere from top to bottom?\n1) Troposphere – Stratosphere – Mesosphere – Thermosphere – Exosphere\n2) Thermosphere – Stratosphere – Troposphere – Mesosphere – Exosphere\n3) Exosphere – Thermosphere – Mesosphere – Stratosphere – Troposphere\n4) Exosphere – Mesosphere – Thermosphere – Stratosphere – Troposphere\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[6]);
    if(a[6]==3)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation:  Exosphere is the outermost layer of the atmosphere followed by mesosphere, thermosphere, stratosphere and troposphere.");
    break;
        
    }
    else if(a[6]==2 || a[6]==1 || a[6]==4)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation:  Exosphere is the outermost layer of the atmosphere followed by mesosphere, thermosphere, stratosphere and troposphere.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m7;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m7);    
       system ("clear");
    do
    {printf("Q8.\t  Which layer of the atmosphere is responsible for aurora formation?\n1) Ozone layer\n2) Stratosphere\n3) Exosphere\n4) Ionosphere\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[7]);
    if(a[7]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation:Ionosphere is a secondary layer of the atmosphere which extends through mesosphere, thermosphere and exosphere during day time and is responsible for aurora – natural light display in the sky in high altitude region.");
    break;
        
    }
    else if(a[7]==2 || a[7]==1 || a[7]==3)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation:Ionosphere is a secondary layer of the atmosphere which extends through mesosphere, thermosphere and exosphere during day time and is responsible for aurora – natural light display in the sky in high altitude region.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m8;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m8);    
       system ("clear");
    do
    {printf("Q9.\t   Which of the following mentioned layers is NOT a homosphere?\n1) Exosphere\n2) Troposphere\n3) Ionosphere\n4) Mesosphere\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[8]);
    if(a[8]==1)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: Homospheric layers of atmosphere include layers where chemical composition is independent of molecular weight of gases due to mixing by turbulence. Hence the lower layers such as troposphere, ionosphere and mesosphere are homospheres.");
    break;
        
    }
    else if(a[8]==2 || a[8]==3 || a[8]==4)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation: Homospheric layers of atmosphere include layers where chemical composition is independent of molecular weight of gases due to mixing by turbulence. Hence the lower layers such as troposphere, ionosphere and mesosphere are homospheres.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m9;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m9);    
           system ("clear");
    do
    {printf("Q10.\t What is the atmospheric pressure at sea level?\n1) 101325 Pa\n2) 14.696 psi\n3) 760 Torr\n4) All of the mentioned \n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[9]);
    if(a[9]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: As per International Standard Atmosphere, at sea level atmospheric pressure is equal to 101325 Pa which is equal to 14.696 psi and 760 Torr. ");
    break;
        
    }
    else if(a[9]==2 || a[9]==1 || a[9]==3)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation: As per International Standard Atmosphere, at sea level atmospheric pressure is equal to 101325 Pa which is equal to 14.696 psi and 760 Torr.");
     break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m10;
    printf("\n\nPRESS ANY DIGIT TO KNOW YOUR SCORES:");
    scanf("%d",&m10);
    pt();
    pr();
    record();
    int n;
    do
    {printf("\n\n\n>PRESS 1 IF YOU WANTS TO TRY TO PLAY AN OTHER TYPE OF QUIZ ");
      printf("\n\n\n>PRESS 2 IF YOU WANTS TO GO TO THE MAIN SCREEN OF QUIZ ");
      printf("\n\n\n>PRESS 3 IF YOU WANTS TO END THE GAME NOW\n ");
      scanf("%d",&n);
      if(n==1)
      {
          start();
          break;
      }
      else if(n==2)
      {
          main();
          break;
          
      }
      else if(n==3)
      {
          system("clear");   
          printf("THANKS FOR PLAYING THE QUIZ GAME");
          break;
          
      }
      else
      {
          system ("clear");
          printf("SOMETHING ENTERED WRONG\nPLEASE ENTER YOUR CHOICE AGAIN\n");
      }
     }while(1);
     
}
void computer()
{
   system ("clear");
    point=0;
    npoint=0;
    subject=3;
     int a[10];
    do
    {printf("Q1.\tWhat does the COMPUTER stand for?\n1) Commonly Occupied Machines Used in Technical and Educational Research\n1) Commonly Operated Machines Used in Technical and Environmental Research\n3) Commonly Oriented Machines Used in Technical and Educational Research\n4) Commonly Operated Machines Used in Technical and Educational Research\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[0]);
    if(a[0]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The word COMPUTER is an abbreviation for the terms “Commonly Operated Machines Used in Technical and Educational Research”. The word COMPUTER also relates to the word COMPUTE which means to calculate. So initially, it was thought that a computer is a device that is used to perform calculations.");
    break;
        
    }
    else if(a[0]==1 || a[0]==2 || a[0]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: The word COMPUTER is an abbreviation for the terms “Commonly Operated Machines Used in Technical and Educational Research”. The word COMPUTER also relates to the word COMPUTE which means to calculate. So initially, it was thought that a computer is a device that is used to perform calculations.");        
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m1;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m1);
    system("clear");
    do
    {printf("Q2.\t The only language which the computer understands is ______________\n1) C Language\n2) Assembly Language\n3) Binary Language\n4) BASIC\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[1]);
    if(a[1]==3)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation:  The Computer understands only binary language which is written in the form of 0s & 1s. A computer can understand assembly language but an assembler is required which convert the assembly language to binary language. Similarly, for understanding high level languages, compilers/interpreters are required.");
    break;
        
    }
    else if(a[1]==1 || a[1]==4 || a[1]==2)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation:  The Computer understands only binary language which is written in the form of 0s & 1s. A computer can understand assembly language but an assembler is required which convert the assembly language to binary language. Similarly, for understanding high level languages, compilers/interpreters are required.");        
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m2;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m2);
    system ("clear");
    do
    {printf("Q3.\t A computer language that is written in binary codes only is _____\n1) pascal\n2) machine language\n3) C\n4) C#\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[2]);
    if(a[2]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: Machine Language is written in binary codes only. It can be easily understood by the computer and is very difficult for us to understand. A machine language, unlike other languages, requires no translators or interpreters.");
    break;
        
    }
    else if(a[2]==3 || a[2]==1 || a[2]==4)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: Machine Language is written in binary codes only. It can be easily understood by the computer and is very difficult for us to understand. A machine language, unlike other languages, requires no translators or interpreters.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m3;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m3);
     system ("clear");
    do
    {printf("Q4.\t Which of the following is the brain of the computer?\n1) Central Processing Unit\n2) Memory\n3) Arithmetic and Logic unit\n4) Control unit\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[3]);
    if(a[3]==1)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The CPU is referred to as the brain of a computer.\nIt consists of a control unit and an arithmetic and logic unit. It is responsible for performing all the processes and operations.");
    break;
        
    }
    else if(a[3]==2 || a[3]==4 || a[3]==3)
    {
        ++npoint;
        printf("WRONG\n");
         printf("Explanation: The CPU is referred to as the brain of a computer.\nIt consists of a control unit and an arithmetic and logic unit. It is responsible for performing all the processes and operations.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m4;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m4);    
     system ("clear");
    do
    {printf("Q5.\t What are the two basic types of memory in a computer?\n1) Minor and Major\n2) Main and virtual\n3) Primary and Secondary\n4) Primary and major \n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[4]);
    if(a[4]==3)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: There are two types of memories in a computer system: Primary Memory and Secondary Memory.\nThe primary memory can be directly accessed by the CPU whereas the secondary memory cannot be directly accessed.");
    break;
        
    }
    else if(a[4]==1 || a[4]==2 || a[4]==4)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation:There are two types of memories in a computer system: Primary Memory and Secondary Memory.\nThe primary memory can be directly accessed by the CPU whereas the secondary memory cannot be directly accessed.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m5;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m5);    
     system ("clear");
    do
    {printf("Q6.\t  Which of the following is not a characteristic of a computer?\n1) Versatility\n2) Accuracy\n3) Diligence\n4) I.Q. \n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[5]);
    if(a[5]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation:  The Computer system has no I.Q. of its own. It does only what it is programmed to do. It cannot take decisions of its own.\nA computer is diligent because it can work continuously for hours without getting any errors or without getting grumbled.\nThe accuracy of a computer is consistently high and its level of accuracy depends on its design. A computer can perform any task if, it can be broken down into a series of logical steps. Therefore, a computer is versatile.");
    break;
        
    }
    else if(a[5]==1 || a[5]==2 || a[5]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation:  The Computer system has no I.Q. of its own. It does only what it is programmed to do. It cannot take decisions of its own.\nA computer is diligent because it can work continuously for hours without getting any errors or without getting grumbled.\nThe accuracy of a computer is consistently high and its level of accuracy depends on its design. A computer can perform any task if, it can be broken down into a series of logical steps. Therefore, a computer is versatile.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m6;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m6);    
      system ("clear");
    do
    {printf("Q7.\t  What is the word length of a personal computer?\n1) 32 bits\n2) 8 bits\n3) 64bits\n4) 16 bits\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[6]);
    if(a[6]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation:   The word length which is the size of a word is generally 8 bits in a personal computer. Word Size is generally the number of bits that can be processed in one go by the CPU.");
    break;
        
    }
    else if(a[6]==3 || a[6]==1 || a[6]==4)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation:   The word length which is the size of a word is generally 8 bits in a personal computer. Word Size is generally the number of bits that can be processed in one go by the CPU.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m7;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m7);    
       system ("clear");
    do
    {printf("Q8.\t  A bit in computer terminology means either 0 or 1.\n1) False\n2) True\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[7]);
    if(a[7]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation:A bit stands for a binary digit. A binary digit can have only two digits i.e. 0 or 1. A binary number consisting of n-bits is called an n-bit number.");
    break;
        
    }
    else if(a[7]==1)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation:A bit stands for a binary digit. A binary digit can have only two digits i.e. 0 or 1. A binary number consisting of n-bits is called an n-bit number.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m8;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m8);    
       system ("clear");
    do
    {printf("Q9.\t  Which of the following is the smallest unit of data in a computer?\n1) Bit\n2) KB\n3) Nibble\n4) Byte \n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[8]);
    if(a[8]==1)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: A bit is defined as the smallest unit of data in a computer system. It is used as a short form of Binary Digit. A bit can have only two values 0 or 1. A nibble comprises of 4 bits, a byte is a collection of 8 bits whereas KB (Kilobyte) is equal to 1024 bytes.");
    break;
        
    }
    else if(a[8]==2 || a[8]==3 || a[8]==4)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation:A bit is defined as the smallest unit of data in a computer system. It is used as a short form of Binary Digit. A bit can have only two values 0 or 1. A nibble comprises of 4 bits, a byte is a collection of 8 bits whereas KB (Kilobyte) is equal to 1024 bytes.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m9;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m9);    
           system ("clear");
    do
    {printf("Q10.\t  Which unit is responsible for converting the data received from the user into a computer understandable format?\n1) Output Unit\n2) Input Unit\n3) Memory Unit\n4) Arithmetic & Logic Unit\n\n\n\n");
     printf("Enter The Option You Want To choose :");
    scanf("%d",&a[9]);
    if(a[9]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The Input Unit converts the data, which the user enters into a language that the computer understands, i.e. it converts the data into binary format. The Output Unit is responsible for giving the results in a user-understandable format. The Storage Unit is responsible for storing the data after immediate results of processing whereas; the ALU is responsible for various arithmetic and bitwise operations.");
    break;
        
    }
    else if(a[9]==4 || a[9]==1 || a[9]==3)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation: The Input Unit converts the data, which the user enters into a language that the computer understands, i.e. it converts the data into binary format. The Output Unit is responsible for giving the results in a user-understandable format. The Storage Unit is responsible for storing the data after immediate results of processing whereas; the ALU is responsible for various arithmetic and bitwise operations.");
     break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m10;
    printf("\n\nPRESS ANY DIGIT TO KNOW YOUR SCORES:");
    scanf("%d",&m10);
    pt();
    pr();
    record();
    int n;
    do
    {printf("\n\n\n>PRESS 1 IF YOU WANTS TO TRY TO PLAY AN OTHER TYPE OF QUIZ ");
      printf("\n\n\n>PRESS 2 IF YOU WANTS TO GO TO THE MAIN SCREEN OF QUIZ ");
      printf("\n\n\n>PRESS 3 IF YOU WANTS TO END THE GAME NOW\n ");
      scanf("%d",&n);
      if(n==1)
      {
          start();
          break;
      }
      else if(n==2)
      {
          main();
          break;
          
      }
      else if(n==3)
      {
          system("clear");   
          printf("THANKS FOR PLAYING THE QUIZ GAME");
          break;
          
      }
      else
      {
          system ("clear");
          printf("SOMETHING ENTERED WRONG\nPLEASE ENTER YOUR CHOICE AGAIN\n");
      }
     }while(1);
     
}
void record()
{ 
  if(subject==1)
  {
     mhead= sortedlist(mhead);
  }
  if(subject==2)
  {
     shead= sortedlist(shead);
  }
  if(subject==3)
  {
     chead= sortedlist(chead);
  }
  if(subject==4)
  {
     sphead= sortedlist(sphead);
  }
  if(subject==5)
  {
    ghead=sortedlist(ghead);
  }
   }
struct node *sortedlist(struct node *head)
{
     struct node *newnode;
 char name1[200];
 strcpy(name1,username);
  int p1=point;
  int prc1=per;
  int sub1=subject;
   newnode=(struct node *)malloc(sizeof(struct node));
   strcpy(newnode->name,name1);
   newnode->p=p1;
   newnode->prc=prc1;
   newnode->sub=sub1;
  
  
   if(head==NULL)
    {
       newnode->next=NULL;
       head=newnode;
    }
   else
   {
       struct node *preptr;
       struct node *ptr=head;
       if(ptr->p < newnode->p)
       {
           newnode->next=head;
           head=newnode;
       }
      else 
       {while(ptr->p > newnode->p && ptr->next!=NULL )
       {
           preptr=ptr;
           ptr=ptr->next;   
       }
       if(ptr->next==NULL && ptr->p > newnode->p)
     { 
         ptr->next=newnode;
         newnode->next=NULL;
      }
       else if(ptr->next==NULL && ptr->p < newnode->p)
     { 
       preptr->next=newnode;
       newnode->next=ptr;
      }
      else 
     { preptr->next=newnode;
       newnode->next=ptr;   }
       }       
   }
return head;   
}
void score()
{    system("clear");
    if(point ==-1 && npoint==-1)
    {
        int e;
         printf("\t\t\t\t_____________________________________________________\n\n");
         printf("\t\t\t\t                  PREVIOUS SCORE :\n\n");
         printf("\t\t\t\t_____________________________________________________\n\n");
        printf("\t\t\t\t\t    !!!!NO PREVIOUS ATTEMPT!!!! \n\t\t\t\t\tYOU ARE FIRST ONE TO PLAY THIS GAME \n\t\t\t\t\t   GOOD LUCK FOR YOUR QUIZ TEST\n\n ");
        printf("\t\t\t\t_____________________________________________________\n\n");
        printf("\n\n\n\n\nENTER ANY DIGIT TO GO TO THE MAIN SCREEN:");
        scanf("%d",&e);
   main();
   exit(0);
        
    } 
    else
    {
        printf("\t\t\t\t_____________________________________________________\n\n");
        printf("\t\t\t\t               PREVIOUS SCORE :\n\n");
        printf("\t\t\t\t_____________________________________________________\n\n");
        
   struct node *ptr1=mhead;
   while(ptr1!=NULL)
   {
       
    printf("\t\t\t\t>%s score\t%d point and %d percantage in MATHS \n",ptr1->name,ptr1->p,ptr1->prc);
    
    ptr1=ptr1->next;
   }
      struct node *ptr2=shead;
   while(ptr2!=NULL)
   {
       
    printf("\t\t\t\t>%s score\t%d point and %d percantage in SCIENCE \n",ptr2->name,ptr2->p,ptr2->prc);
    
    ptr2=ptr2->next;
   }
     struct node *ptr3=chead;
   while(ptr3!=NULL)
   {
       
    printf("\t\t\t\t>%s score\t%d point and %d percantage in COMPUTER \n",ptr3->name,ptr3->p,ptr3->prc);
    
    ptr3=ptr3->next;
   }
     struct node *ptr4=sphead;
   while(ptr4!=NULL)
   {
      
    printf("\t\t\t\t>%s score\t%d point and %d percantage in SPORTS \n",ptr4->name,ptr4->p,ptr4->prc);
    
    ptr4=ptr4->next;
   }
     struct node *ptr5=ghead;
   while(ptr5!=NULL)
   {
       
    printf("\t\t\t\t>%s score\t%d point and %d percantage in G.K. \n",ptr5->name,ptr5->p,ptr5->prc);
    
    ptr5=ptr5->next;
   }
   
   }
   printf("\t\t\t\t_____________________________________________________\n\n");
   int a;
   printf("\n\n\n\n\n\t\t\t\tENTER ANY DIGIT TO GO TO THE MAIN SCREEN:");
   scanf("%d",&a);
   main();
}
void sports()
{
   system ("clear");
    point=0;
    npoint=0;
    subject=4;
     int a[10];
    do
    {
    printf("Q1.\tWhich of the following terms are used to describe parts of a cricket bat?\n1)Eye and Toe\n2)Leg and Hand\n3)Shoulders and Toe\n4) Neck and Shoulders\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[0]);
    if(a[0]==3)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The blade of the cricket bat is a wooden block which is generally flat on the striking face and with a ridge on the backside. The edges of the blade which are closest to the handle are called shoulders of the blade while the bottom of the blade is known is toe of the bat.");
    break;
        
    }
    else if(a[0]==1 || a[0]==2 || a[0]==4)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: The blade of the cricket bat is a wooden block which is generally flat on the striking face and with a ridge on the backside. The edges of the blade which are closest to the handle are called shoulders of the blade while the bottom of the blade is known is toe of the bat.");        
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m1;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m1);
    system("clear");
    do
    {printf("Q2.\t What is India’s rank in overall medal tally of Asian Games?\n1)7\n2)6\n3)10\n4)8\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[1]);
    if(a[1]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: India is ranked 6th in the overall medal tally of Asian Games. It has won a total of 671 medals with 154 Gold medals.");
    break;
        
    }
    else if(a[1]==1 || a[1]==4 || a[1]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation:  India is ranked 6th in the overall medal tally of Asian Games. It has won a total of 671 medals with 154 Gold medals.");        
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m2;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m2);
    system ("clear");
    do
    {printf("Q3.\tWhat is the standard width of each wicket in cricket?\n1)9 inches\n2)10 inches\n3)11 inches\n4)12 inches\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[2]);
    if(a[2]==1)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: A wicket consists of three stumps which are inserted into the ground and are topped with two bails. The overall width of each wicket is 9 inches.");
    break;
        
    }
    else if(a[2]==3 || a[2]==2 || a[2]==4)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: A wicket consists of three stumps which are inserted into the ground and are topped with two bails. The overall width of each wicket is 9 inches.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m3;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m3);
     system ("clear");
    do
    {printf("Q4.\t When was the World Chess Federation founded?\n1)1935\n2) 1924\n3)1905\n4) 1896\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[3]);
    if(a[3]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The World Chess Federation was founded in Paris in 1924. It is the international governing body for chess sport.");
    break;
        
    }
    else if(a[3]==1 || a[3]==4 || a[3]==3)
    {
        ++npoint;
        printf("WRONG\n");
         printf("Explanation: The World Chess Federation was founded in Paris in 1924. It is the international governing body for chess sport.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m4;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m4);    
     system ("clear");
    do
    {printf("Q5.\tWho was the first male player to complete the Career Grand Slam on three different surfaces?\n1)Andre Agassi\n2)Roy Emerson\n3)Jim Courier\n4)Rafael Nada\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[4]);
    if(a[4]==1)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: Andre Agassi was the first male player to complete the Career Grand Slam on three different surfaces and the first male player in history to win the Career Golden Slam i.e. winning the four Grand Slams and the Olympic Gold Medal in singles. Which woman player has won the most Glam Slam tournament singles titles");
    break;
        
    }
    else if(a[4]==3 || a[4]==2 || a[4]==4)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation:Andre Agassi was the first male player to complete the Career Grand Slam on three different surfaces and the first male player in history to win the Career Golden Slam i.e. winning the four Grand Slams and the Olympic Gold Medal in singles. Which woman player has won the most Glam Slam tournament singles titles");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m5;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m5);    
     system ("clear");
    do
    {printf("Q6.\t With which sport is Seema Punia associated?\n1)Javelin Throw\n2)Discus Throw\n3)Shot Put\n4)Long Jump\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[5]);
    if(a[5]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: Seema Punia is an Indian discus thrower. She is also known as the Millennium Child as she had won a gold medal at the World Junior Championships in 2000. She won a gold at the 2014 Asian Games and a silver medal at the 2014 Commonwealth Games. ");
    break;
        
    }
    else if(a[5]==1 || a[5]==4 || a[5]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation:  Seema Punia is an Indian discus thrower. She is also known as the Millennium Child as she had won a gold medal at the World Junior Championships in 2000. She won a gold at the 2014 Asian Games and a silver medal at the 2014 Commonwealth Games.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m6;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m6);    
      system ("clear");
    do
    {printf("Q7.\tWhich Indian player has recorded the maximum number of wins in Davis Cup?\n1)Mahesh Bhupathi\n2)Leander Paes\n3)Sumit Nagal\n4)Rohan Bopanna\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[6]);
    if(a[6]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation:   Leander Paes is an Indian professional tennis player. He is considered to be one of the best doubles and mixed doubles players of all time. He holds the record for the most Davis Cup doubles wins with 43 victories. His total number of wins are 90 in Davis Cup.");
    break;
        
    }
    else if(a[6]==3 || a[6]==1 || a[6]==4)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation:   Leander Paes is an Indian professional tennis player. He is considered to be one of the best doubles and mixed doubles players of all time. He holds the record for the most Davis Cup doubles wins with 43 victories. His total number of wins are 90 in Davis Cup.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m7;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m7);    
       system ("clear");
    do
    {printf("Q8.\t Who has composed the FIFA anthem?\n1)Rob May\n2)Simon Hill\n3)Franz Lambert\n4)All of the above\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[7]);
    if(a[7]==3)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation:FIFA adopted an anthem in 1994 FIFA World Cup. It was composed by German composer Franz Lambert. It has been rearranged and produced by Rob May and Simon Hill.");
    break;
        
    }
    else if(a[7]==1 || a[7]==2 || a[7]==4)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation:FIFA adopted an anthem in 1994 FIFA World Cup. It was composed by German composer Franz Lambert. It has been rearranged and produced by Rob May and Simon Hill.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m8;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m8);    
       system ("clear");
    do
    {printf("Q9.\t  Which ICC World Cup was known as the Prudential Cup?\n1)1990\n2)1975\n3)1979\n4)1998\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[8]);
    if(a[8]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The first International Cricket World Cup was held in England in 1975 and was officially known as the Prudential Cup after the name of its sponsors Prudential Pl");
    break;
        
    }
    else if(a[8]==1 || a[8]==3 || a[8]==4)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation:The first International Cricket World Cup was held in England in 1975 and was officially known as the Prudential Cup after the name of its sponsors Prudential Pl");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m9;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m9);    
           system ("clear");
    do
    {printf("Q10.\t Olympics After how many years are the Olympics held?\n1)2\n2) 3\n3)4\n4) 1\n\n\n\n");
     printf("Enter The Option You Want To choose :");
    scanf("%d",&a[9]);
    if(a[9]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The Olympics are the leading sporting event of the world with participation of more than 200 countries. The games are held every 4 years");
    break;
        
    }
    else if(a[9]==2 || a[9]==1 || a[9]==3)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation: The Olympics are the leading sporting event of the world with participation of more than 200 countries. The games are held every 4 years");
     break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m10;
    printf("\n\nPRESS ANY DIGIT TO KNOW YOUR SCORES:");
    scanf("%d",&m10);
    pt();
    pr();
    record();
    int n;
    do
    {printf("\n\n\n>PRESS 1 IF YOU WANTS TO TRY TO PLAY AN OTHER TYPE OF QUIZ ");
      printf("\n\n\n>PRESS 2 IF YOU WANTS TO GO TO THE MAIN SCREEN OF QUIZ ");
      printf("\n\n\n>PRESS 3 IF YOU WANTS TO END THE GAME NOW\n ");
      scanf("%d",&n);
      if(n==1)
      {
          start();
          break;
      }
      else if(n==2)
      {
          main();
          break;
          
      }
      else if(n==3)
      {
          system("clear");   
          printf("THANKS FOR PLAYING THE QUIZ GAME");
          break;
          
      }
      else
      {
          system ("clear");
          printf("SOMETHING ENTERED WRONG\nPLEASE ENTER YOUR CHOICE AGAIN\n");
      }
     }while(1);
     
}
void gk()
{
   system ("clear");
    point=0;
    npoint=0;
    subject=5;
     int a[10];
    do
    {
    printf("Q1.\tWhich cricketer has the record of highest individual score in ODIs?\n1)Rohit Sharma\n2)Martin Guptill\n3)Chris Gayle\n4)Virender Sehwag\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[0]);
    if(a[0]==1)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: Indian batsman Rohit Sharma has the record of highest individual score in One Day Internationals with a total of 264 scores in Sri Lanka vs India at Kolkata in 2014. He is followed by Martin Guptill with a total of 237. Which player has scored most number of centuries in ODIs");
    break;
        
    }
    else if(a[0]==3 || a[0]==2 || a[0]==4)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: Indian batsman Rohit Sharma has the record of highest individual score in One Day Internationals with a total of 264 scores in Sri Lanka vs India at Kolkata in 2014. He is followed by Martin Guptill with a total of 237. Which player has scored most number of centuries in ODIs");        
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m1;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m1);
    system("clear");
    do
    {printf("Q2.\t When was Indian Open championships abolished?\n1)1990\n2)1986\n3)1982\n4)1976\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[1]);
    if(a[1]==3)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The Indian Open also called the All India Championships is a defunct combined national tournament. It was played from 1910 to 1982. The men’s event was also a part of the Grand Prix tennis circuit from 1970 to 1979.");
    break;
        
    }
    else if(a[1]==1 || a[1]==4 || a[1]==2)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation:  The Indian Open also called the All India Championships is a defunct combined national tournament. It was played from 1910 to 1982. The men’s event was also a part of the Grand Prix tennis circuit from 1970 to 1979.");        
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m2;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m2);
    system ("clear");
     do
    {printf("Q3.\t  What is the circle which connects all the vertices of a polygon called?\n1) Semi-circle\n2) Incircle\n3) Outer circle\n4) Circumcircle\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[2]);
    if(a[2]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: A circle which connects all the vertices of the triangle is called as a circumcircle. Whereas, if touches the sides of the polygon internally then it is called as incircle.");
    break;
        
    }
    else if(a[2]==2 || a[2]==1 || a[2]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation: A circle which connects all the vertices of the triangle is called as a circumcircle. Whereas, if touches the sides of the polygon internally then it is called as incircle.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m3;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m3);
     system ("clear");
    do
    {printf("Q4.\t  What will be the sum of exterior angle of a regular polygon?\n1) 360°\n2) 180°\n3) 540°\n4) 120°\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[3]);
    if(a[3]==1)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The sum of the external angles of a regular polygon is always 360°. When we push all the angles of a convex polygon the angle converges and form a total of 360°. This angle is also called as perigon angle.");
    break;
        
    }
    else if(a[3]==2 || a[3]==4 || a[3]==3)
    {
        ++npoint;
        printf("WRONG\n");
         printf("Explanation: The sum of the external angles of a regular polygon is always 360°. When we push all the angles of a convex polygon the angle converges and form a total of 360°. This angle is also called as perigon angle.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
     int m4;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m4);    
     system ("clear");
    do
    {printf("Q5.\t   Which of the following statements is true?\n1) Troposphere is equally thick across different parts of the world\n2) Troposphere contains the ozone layer\n3) Troposphere is thinner at the equator than at the poles\n4) Troposphere is thicker at the equator than at the poles \n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[4]);
    if(a[4]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: Troposphere is nearly 16-17km thick at the equator and thins down to approximately 8km at the poles.");
    break;
        
    }
    else if(a[4]==1 || a[4]==2 || a[4]==3)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation:Troposphere is nearly 16-17km thick at the equator and thins down to approximately 8km at the poles.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m5;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m5);    
     system ("clear");
    do
    {printf("Q6.\t The temperature decreases with altitude in the stratosphere layer.\n1) True\n2) False \n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[5]);
    if(a[5]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation:  Temperature slightly increases with altitude in the stratosphere due to absorption of UV radiations from the sun, by the ozone layer present in the stratosphere.");
    break;
        
    }
    else if(a[5]==1)
    {
        ++npoint;
        printf("WRONG\n");
        printf("Explanation:  Temperature slightly increases with altitude in the stratosphere due to absorption of UV radiations from the sun, by the ozone layer present in the stratosphere.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m6;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m6);    
      system ("clear");
    do
    {printf("Q7.\t  What is the word length of a personal computer?\n1) 32 bits\n2) 8 bits\n3) 64bits\n4) 16 bits\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[6]);
    if(a[6]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation:   The word length which is the size of a word is generally 8 bits in a personal computer. Word Size is generally the number of bits that can be processed in one go by the CPU.");
    break;
        
    }
    else if(a[6]==3 || a[6]==1 || a[6]==4)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation:   The word length which is the size of a word is generally 8 bits in a personal computer. Word Size is generally the number of bits that can be processed in one go by the CPU.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m7;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m7);    
       system ("clear");
    do
    {printf("Q8.\t  A bit in computer terminology means either 0 or 1.\n1) False\n2) True\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[7]);
    if(a[7]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation:A bit stands for a binary digit. A binary digit can have only two digits i.e. 0 or 1. A binary number consisting of n-bits is called an n-bit number.");
    break;
        
    }
    else if(a[7]==1)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation:A bit stands for a binary digit. A binary digit can have only two digits i.e. 0 or 1. A binary number consisting of n-bits is called an n-bit number.");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m8;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m8);    
       system ("clear");
    do
    {printf("Q9.\t  Which ICC World Cup was known as the Prudential Cup?\n1)1990\n2)1975\n3)1979\n4)1998\n\n\n\n");
    printf("Enter The Option You Want To choose :");
    scanf("%d",&a[8]);
    if(a[8]==2)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The first International Cricket World Cup was held in England in 1975 and was officially known as the Prudential Cup after the name of its sponsors Prudential Pl");
    break;
        
    }
    else if(a[8]==1 || a[8]==3 || a[8]==4)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation:The first International Cricket World Cup was held in England in 1975 and was officially known as the Prudential Cup after the name of its sponsors Prudential Pl");
    break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m9;
    printf("\n\nPRESS ANY DIGIT FOR THE NEXT QUESTION:");
    scanf("%d",&m9);    
           system ("clear");
    do
    {printf("Q10.\t Olympics After how many years are the Olympics held?\n1)2\n2) 3\n3)4\n4) 1\n\n\n\n");
     printf("Enter The Option You Want To choose :");
    scanf("%d",&a[9]);
    if(a[9]==4)
    {
        ++point;
        printf("CORRECT\n");
        printf("Explanation: The Olympics are the leading sporting event of the world with participation of more than 200 countries. The games are held every 4 years");
    break;
        
    }
    else if(a[9]==2 || a[9]==1 || a[9]==3)
    {
        ++npoint;
        printf("WRONG\n");
     printf("Explanation: The Olympics are the leading sporting event of the world with participation of more than 200 countries. The games are held every 4 years");
     break;
        
    }
    else
    {
        system("clear");
        printf("SOMETHING ENTERED WRONG\nTRY AGAIN\n");
        
    }
    }while(1);
    int m10;
    printf("\n\nPRESS ANY DIGIT TO KNOW YOUR SCORES:");
    scanf("%d",&m10);
    pt();
    pr();
    record();
    int n;
    do
    {printf("\n\n\n>PRESS 1 IF YOU WANTS TO TRY TO PLAY AN OTHER TYPE OF QUIZ ");
      printf("\n\n\n>PRESS 2 IF YOU WANTS TO GO TO THE MAIN SCREEN OF QUIZ ");
      printf("\n\n\n>PRESS 3 IF YOU WANTS TO END THE GAME NOW\n ");
      scanf("%d",&n);
      if(n==1)
      {
          start();
          break;
      }
      else if(n==2)
      {
          main();
          break;
          
      }
      else if(n==3)
      {
          system("clear");   
          printf("THANKS FOR PLAYING THE QUIZ GAME");
          break;
          
      }
      else
      {
          system ("clear");
          printf("SOMETHING ENTERED WRONG\nPLEASE ENTER YOUR CHOICE AGAIN\n");
      }
     }while(1);
     
}