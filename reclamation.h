#include <gtk/gtk.h>

typedef struct {
		char idr[20];
		char idc[20];
		char nom[30];
		char prenom[30];
		char type[10];
		}client;

void ajouter_client(client C);
void afficher_client(GtkWidget *liste);
void afficher_reclamation(GtkWidget *liste);
int IDR_rech;

typedef struct 
{
int IDR;
char Type[20];
char rec_text [500];
} reclamation;

reclamation T;
int G;
void selectionner_reclamation(char numero[20],char numero1[20],GtkWidget *liste);
void supprimer_reclamation(char numero[20],char numero1[20]);
void enregistrer_reclamation (reclamation R);
void afficher2_client(GtkWidget *treeview1);
//void Supprimer_reclamation(int numero);
int Z;
int Y;
//FILE file;
//file="reclamation.txt";

 
