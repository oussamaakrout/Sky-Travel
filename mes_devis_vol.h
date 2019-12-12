#include <gtk/gtk.h>
typedef struct
{
int jour;
int mois;
int annee;
}Date;

typedef struct
{
char num[15];
Date dateexp;
char cvc[10];
}Carte;


typedef struct
{

int numdevis;
char id_client[30];
Date datedevis;
float prixunit;
float TVA;
float THT;
float TTC;
int nbrpers;
char compagnie[30];
char classe[30];
char lieu_depart[30];
char lieu_arrivee[30];
float reduction;
char designation[200]; 
char Conditionsdepaiement[3000];
}Devis_vol;






void afficher_mes_devis_vol(GtkWidget *liste);
void Supprimer_devis_vol(char *f,char s[30]);
