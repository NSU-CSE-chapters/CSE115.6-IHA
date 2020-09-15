//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>
struct Player
{
    char Name[20];
    int Age;
    char Country[20];
    int Ranking;
};

int main()
{
    int n,i;
    scanf("%d", &n);
    struct Player  player[n];

    for (int i = 0; i < n; i++)
    {
        gets(player[0].Name);
        scanf("%d", &player[0].Age);
        gets(player[0].Country);
        scanf("%d", &player[0].Ranking);
    }
    printf("enter search naame\n");
  scanf("%d", &player->Name);

  for (int i = 0; i < n; i++)
  {
    if (player[i].Name == player->Name)    
    {
      printf("%d is present. \n", player->Name);
      
    }
  }

  
    
}
