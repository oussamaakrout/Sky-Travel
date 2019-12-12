#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include"mes_devis_hebergement.h"


enum 
{	Numero_Devis,
	DATE,
	Date_Entree,
	Date_Sortie,
	Hotel,
	Nombre_Nuits,
	Nombre_Personnes,
	TTC,
	Etat_Devis,
	COLUMNS
};


void afficher_mes_devis_hebergement(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char numdevis[30];
char date[30];
char date_entree[30];
char date_sortie[30];
char hotel[30];
char nbr_nuits[30];
char nbr_pers[30];
char ttc[30];
char etatdevis[30];
store=NULL;
FILE *f;
store=gtk_tree_view_get_model(liste);
if (store==NULL)
{renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" numdevis",renderer, "text",Numero_Devis,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" date",renderer, "text",DATE,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" date_entree",renderer, "text",Date_Entree,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" date_sortie",renderer, "text",Date_Sortie,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" hotel",renderer, "text",Hotel,NULL);


gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" nbr_nuits",renderer, "text",Nombre_Nuits,NULL);


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
f=fopen("devis_hebergement.txt","r");
if(f==NULL)
{return;}
else
{f=fopen("devis_hebergement.txt","a+");
	while(fscanf(f,"%s %s %s %s %s %s %s %s %s \n",numdevis,date,date_entree,date_sortie,hotel,nbr_nuits,nbr_pers,ttc,etatdevis)!=EOF)
	{
	gtk_list_store_append(store,&iter);
	gtk_list_store_set(store,&iter,Numero_Devis,numdevis,DATE,date,Date_Entree,date_entree,Date_Sortie,date_sortie,Hotel,hotel,Nombre_Nuits,nbr_nuits,Nombre_Personnes,nbr_pers,TTC,ttc,Etat_Devis,etatdevis,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL (store));
	g_object_unref (store);
	}
}

void
Supprimer_devis_hebergement(char *f,char s[30])
{
char numdevis[10];
char date[15];
char date_entree[15];
char date_sortie[15];
char hotel[15];
char nbr_nuit[15];
char nbr_pers[15];
char ttc[15];
char etat_devis[15];
  
  FILE* fichierIn=NULL; // On déclare un  premier pointeur sur une structure de type FILE et on l'initialise.
  FILE* fichierOut=NULL; // On déclare un deuxieme pointeur sur une structure de type FILE et on l'initialise.

 if ((fichierIn = fopen(f, "r")) == NULL) // Nous testons l'ouverture du fichier en paramètre si ca échoue, on affiche un msg d'erreur.
        printf("ERREUR: Verifiez le nom de fichier de lecture");

 if ((fichierOut = fopen("devis_hebergement_copie.txt", "w")) == NULL) // nous testons l'ouverture du fichier dont on va copier si ca échoue, on affiche un msg d'erreur et on ferme le fichier dont on va lire (en paramètre)
    {
        fclose(fichierIn);
        printf("ERREUR: Verifiez le nom de fichier d'ecriture");
    }


while(!feof(fichierIn)){ // Tant qu'on n'a pas arrivé à la fin du fichier

      fscanf(fichierIn,"%s %s %s %s %s %s %s %s %s \n",numdevis,date,date_entree,date_sortie,hotel,nbr_nuit,nbr_pers,ttc,etat_devis); // Récupérer les données du fichier les enregistré dans les champs correspondants
      if (strcmp(s,numdevis)!=0) 
      {fprintf(fichierOut,"%s %s %s %s %s %s %s %s %s \n",numdevis,date,date_entree,date_sortie,hotel,nbr_nuit,nbr_pers,ttc,etat_devis);} // ecrire les données dans le deuxieme fichier
      }

    fclose(fichierIn); //On ferme les fichiers
    fclose(fichierOut);

    remove(f); // on supprime le fichier passé en paramétre
    rename("devis_hebergement_copie.txt", f); // on renome le deuxieme fichier
}




















