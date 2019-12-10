
#include <gtk/gtk.h>






typedef struct
{
char marque[20];
char modele[20];
char couleur[20];
char boite_vitesse[20];
char carburant[20];
char accessoire[20];
char matricule[20];
}voiture;

typedef struct
{
int jour;
int mois;
int annee;
} Date;


void ajouter_voiture(voiture v);
void afficher_voiture(GtkWidget *treeview1);
void Supprimer_voiture(char *f,char s[30]);



int tableau_voiture_louer(voiture tab[]);
int verifier_location(voiture vo);
int tableau_voiture_disponible(char marque[][20],char modele,char boite_vitesse,char carburant,char couleur,char accessoire,char matricule);
void louer_voiture(voiture v);
