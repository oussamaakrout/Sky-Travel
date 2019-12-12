#include <gtk/gtk.h>

typedef struct
{
int jour;
int mois;
int annee;
}Date;
typedef struct
{
int nummaison;
char nomrue[100];
int codepostal;
char ville[20];
int BP;
}Adresse;

typedef struct
{
char id_client[30];
char nom[30];
char prenom[30];
int cin;
Adresse adresse[30];
int telephone;

}Client;

typedef struct
{
int numdevis;
char id_client[30];
Date datedevis;
int prixjour;
float TVA;
float THT;
float TTC;
int nbrjour;
char marque[30];
char modele[30];
char boite_vitesse[10];
char accessoire[20];
char matricule[20];
char couleur[10];
Date debutpres;
Date finpres;
int reduction;
char designation[200];//type d'hebergement:pension complete /demi-pension...
char Conditionsdepaiement[3000];
}Devis_location;


void afficher_mes_devis_location(GtkWidget *liste);
void Supprimer_devis_location(char *f,char s[30]);







