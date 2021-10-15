#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct pokemon {
  char *name;
  int hp;
};

void print_pokemon(struct pokemon *p){
  printf("POKEMON: %s", p->name);
  printf("\n");
  printf("HP: %d", p->hp);
  printf("\n");
}


struct pokemon * make_pokemon(char* poke, double hitPoints){
  struct pokemon *p;
  p = malloc(sizeof(struct pokemon));
  
  p->name = poke;
  p->hp = hitPoints;
  return p;
}


int main(){
  srand(time(NULL));
  
  char *s = "CHARZARD";
  int pokeHP = rand();

  struct pokemon *p = make_pokemon(s, pokeHP);
  print_pokemon(p);
  
  if(pokeHP % 2 == 1) printf("bad things happen when your age is odd...");
  else printf("i wish you a lucky year!");
  
  printf("\n");

  free(p);
  return 0;
}