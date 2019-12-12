#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include"mes_devis_location.h"


enum 
{	numdevis,
	date,
	d_pres,
	f_pres,
	marque,
	modele,
	b_v,
	accessoire,
	matricule,
	ttc,
	e_d,
	COLUMNS
};


void afficher_mes_devis_location(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char Numero_Devis[30];
char Date[30];
char Debut_Prestation[30];
char Fin_Prestation[30];
char Marque[30];
char Modele[30];
char Boite_Vitesse[30];
char Accessoires[30];
char Matricule[30];
char TTC[30];
char Etat_Devis[30];
store=NULL;
FILE *f;
store=gtk_tree_view_get_model(liste);
if (store==NULL)
{renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" Numero_Devis",renderer, "text",numdevis,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" Date",renderer, "text",date,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" Debut_Prestation",renderer, "text",d_pres,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" Fin_Prestation",renderer, "text",f_pres,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" Marque",renderer, "text",marque,NULL);


gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" Modele",renderer, "text",modele,NULL);


gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" Boite_Vitesse",renderer, "text",b_v,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" Accessoires",renderer, "text",accessoire,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" Matricule",renderer, "text",matricule,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" TTC",renderer, "text",ttc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" Etat_Devis",renderer, "text",e_d,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
}


store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
f=fopen("devis_location.txt","r");
if(f==NULL)
{return;}
else
{f=fopen("devis_location.txt","a+");
	while(fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s \n",Numero_Devis,Date,Debut_Prestation,Fin_Prestation,Marque,Modele,Boite_Vitesse,Accessoires,Matricule,TTC,Etat_Devis)!=EOF)
	{
	gtk_list_store_append(store,&iter);
	gtk_list_store_set(store,&iter,numdevis,Numero_Devis,date,Date,d_pres,Debut_Prestation,f_pres,Fin_Prestation,marque,Marque,modele,Modele,b_v,Boite_Vitesse,accessoire,Accessoires,matricule,Matricule,ttc,TTC,e_d,Etat_Devis,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL (store));
	g_object_unref (store);
	}
}

void
Supprimer_devis_location(char *f,char s[30])
{
char numdevis[10];
char date[15];
char date_aller[15];
char date_retour[15];
char marque[15];
char modele[15];
char puissance_fiscale[15];
char accessoire[15];
char matricule[15];
char ttc[15];
char etat_devis[15];
  
  FILE* fichierIn=NULL; // On déclare un  premier pointeur sur une structure de type FILE et on l'initialise.
  FILE* fichierOut=NULL; // On déclare un deuxieme pointeur sur une structure de type FILE et on l'initialise.

 if ((fichierIn = fopen(f, "r")) == NULL) // Nous testons l'ouverture du fichier en paramètre si ca échoue, on affiche un msg d'erreur.
        printf("ERREUR: Verifiez le nom de fichier de lecture");

 if ((fichierOut = fopen("devis_location_copie.txt", "w")) == NULL) // nous testons l'ouverture du fichier dont on va copier si ca échoue, on affiche un msg d'erreur et on ferme le fichier dont on va lire (en paramètre)
    {
        fclose(fichierIn);
        printf("ERREUR: Verifiez le nom de fichier d'ecriture");
    }


while(!feof(fichierIn)){ // Tant qu'on n'a pas arrivé à la fin du fichier

      fscanf(fichierIn,"%s %s %s %s %s %s %s %s %s %s %s \n",numdevis,date,date_aller,date_retour,marque,modele,puissance_fiscale,accessoire,matricule,ttc,etat_devis); // Récupérer les données du fichier les enregistré dans les champs correspondants
      if (strcmp(s,numdevis)!=0) 
      {fprintf(fichierOut,"%s %s %s %s %s %s %s %s %s %s %s \n",numdevis,date,date_aller,date_retour,marque,modele,puissance_fiscale,accessoire,matricule,ttc,etat_devis);} // ecrire les données dans le deuxieme fichier
      }

    fclose(fichierIn); //On ferme les fichiers
    fclose(fichierOut);

    remove(f); // on supprime le fichier passé en paramétre
    rename("devis_location_copie.txt", f); // on renome le deuxieme fichier
}















