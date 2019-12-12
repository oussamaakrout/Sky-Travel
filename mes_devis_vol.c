#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include"mes_devis_vol.h"


enum 
{	NumDevis,
	DATE,
	Lieu_Depart,
	Lieu_Arrivee,
	Compagnie,
	Classe,
	Nombre_Personnes,
	TTC,
	Etat_Devis,
	COLUMNS
};


void afficher_mes_devis_vol(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char numdevis[30];
char date[30];
char lieu_depart[30];
char lieu_arrivee[30];
char compagnie[30];
char classe[30];
char nbr_pers[30];
char ttc[30];
char etatdevis[30];
store=NULL;
FILE *f;
store=gtk_tree_view_get_model(liste);
if (store==NULL)
{renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" numdevis",renderer, "text",NumDevis,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" date",renderer, "text",DATE,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" lieu_depart",renderer, "text",Lieu_Depart,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" lieu_arrivee",renderer, "text",Lieu_Arrivee,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" compagnie",renderer, "text",Compagnie,NULL);


gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" classe",renderer, "text",Classe,NULL);


gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" nbr_pers",renderer, "text",Nombre_Personnes,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" ttc",renderer, "text",TTC,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" etatdevis",renderer, "text",Etat_Devis,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
}


store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
f=fopen("devis_vol.txt","r");
if(f==NULL)
{return;}
else
{f=fopen("devis_vol.txt","a+");
	while(fscanf(f,"%s %s %s %s %s %s %s %s %s \n",numdevis,date,lieu_depart,lieu_arrivee,compagnie,classe,nbr_pers,ttc,etatdevis)!=EOF)
	{
	gtk_list_store_append(store,&iter);
	gtk_list_store_set(store,&iter,NumDevis,numdevis,DATE,date,Lieu_Depart,lieu_depart,Lieu_Arrivee,lieu_arrivee,Compagnie,compagnie,Classe,classe,Nombre_Personnes,nbr_pers,TTC,ttc,Etat_Devis,etatdevis,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL (store));
	g_object_unref (store);
	}
}

void ajouter_carte(Carte c)
{FILE *f;
f=fopen("carte_bancaires.txt","a+");
if (f!=NULL)
{fprintf(f,"%s %d %d %s \n",c.num,c.dateexp.mois,c.dateexp.annee,c.cvc);
fclose(f);
}
}


void
Supprimer_devis_vol(char *f,char s[30])
{
char numdevis[10];
char date[15];
char lieu_depart[15];
char lieu_arrivee[15];
char compagnie[15];
char classe[15];
char nbr_pers[15];
char ttc[15];
char etat_devis[15];
  
  FILE* fichierIn=NULL; // On déclare un  premier pointeur sur une structure de type FILE et on l'initialise.
  FILE* fichierOut=NULL; // On déclare un deuxieme pointeur sur une structure de type FILE et on l'initialise.

 if ((fichierIn = fopen(f, "r")) == NULL) // Nous testons l'ouverture du fichier en paramètre si ca échoue, on affiche un msg d'erreur.
        printf("ERREUR: Verifiez le nom de fichier de lecture");

 if ((fichierOut = fopen("devis_vol_copie.txt", "w")) == NULL) // nous testons l'ouverture du fichier dont on va copier si ca échoue, on affiche un msg d'erreur et on ferme le fichier dont on va lire (en paramètre)
    {
        fclose(fichierIn);
        printf("ERREUR: Verifiez le nom de fichier d'ecriture");
    }


while(!feof(fichierIn)){ // Tant qu'on n'a pas arrivé à la fin du fichier

      fscanf(fichierIn,"%s %s %s %s %s %s %s %s %s \n",numdevis,date,lieu_depart,lieu_arrivee,compagnie,classe,nbr_pers,ttc,etat_devis); // Récupérer les données du fichier les enregistré dans les champs correspondants
      if (strcmp(s,numdevis)!=0) 
      {fprintf(fichierOut,"%s %s %s %s %s %s %s %s %s \n",numdevis,date,lieu_depart,lieu_arrivee,compagnie,classe,nbr_pers,ttc,etat_devis);} // ecrire les données dans le deuxieme fichier
      }

    fclose(fichierIn); //On ferme les fichiers
    fclose(fichierOut);

    remove(f); // on supprime le fichier passé en paramétre
    rename("devis_vol_copie.txt", f); // on renome le deuxieme fichier
}




























