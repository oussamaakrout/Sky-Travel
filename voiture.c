#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "voiture.h"



void ajouter_voiture(voiture v)


{
FILE *f;

f=fopen("voiture.txt","a+");

{


fprintf(f,"%s %s %s %s %s %s %s  \n",v.marque,v.modele,v.boite_vitesse,v.carburant,v.couleur,v.accessoire,v.matricule);

fclose(f);
}
}


enum 
{	MARQUE,
	MODELE,
	BOITE_VITESSE,
	CARBURANT,
	COULEUR,
	ACCESSOIRE,
	MATRICULE,
	COLUMNS
};

void afficher_voiture(GtkWidget *treeview1)
{
 GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char marque[20];
char modele[20];
char boite_vitesse[20];
char carburant[20];
char couleur[20];
char accessoire[20];
char matricule[20];

store=NULL;
FILE *f;
store=gtk_tree_view_get_model(treeview1);
if (store==NULL)
{renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" marque",renderer, "text",MARQUE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("modele",renderer, "text",MODELE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("boite vitesse",renderer, "text",BOITE_VITESSE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("carburant",renderer, "text",CARBURANT,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" couleur",renderer, "text",COULEUR,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" accessoire",renderer, "text",ACCESSOIRE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("matricule",renderer, "text",MATRICULE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
}

store=gtk_list_store_new(COLUMNS, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING);
f=fopen("voiture.txt","r");
if(f==NULL)
{return;}
else
{f=fopen("voiture.txt","a+");
	while(fscanf(f,"%s %s %s %s %s %s %s  \n",marque,modele,boite_vitesse,carburant,couleur,accessoire,matricule)!=EOF)
	{
	gtk_list_store_append(store,&iter);
	gtk_list_store_set(store,&iter,MARQUE,marque,MODELE,modele,BOITE_VITESSE,boite_vitesse,CARBURANT,carburant,COULEUR,couleur,ACCESSOIRE,accessoire,MATRICULE,matricule,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeview1), GTK_TREE_MODEL (store));
	g_object_unref (store);
	}
}


void
Supprimer_voiture(char *f,char s[30])
{

    voiture v;
  FILE* fichierIn=NULL; // On déclare un  premier pointeur sur une structure de type FILE et on l'initialise.
  FILE* fichierOut=NULL; // On déclare un deuxieme pointeur sur une structure de type FILE et on l'initialise.

 if ((fichierIn = fopen(f, "r")) == NULL) // Nous testons l'ouverture du fichier en paramètre si ca échoue, on affiche un msg d'erreur.
        printf("ERREUR: Verifiez le nom de fichier de lecture");

 if ((fichierOut = fopen("voiture_copie.txt", "w")) == NULL) // nous testons l'ouverture du fichier dont on va copier si ca échoue, on affiche un msg d'erreur et on ferme le fichier dont on va lire (en paramètre)
    {
        fclose(fichierIn);
        printf("ERREUR: Verifiez le nom de fichier d'ecriture");
    }


while(!feof(fichierIn)){ // Tant qu'on n'a pas arrivé à la fin du fichier

      fscanf(fichierIn,"%s %s %s %s %s %s %s  \n",v.marque,v.modele,v.boite_vitesse,v.carburant,v.couleur,v.accessoire,v.matricule); // Récupérer les données du fichier les enregistré dans les champs correspondants
      if (strcmp(s,v.matricule)!=0) 
      {fprintf(fichierOut,"%s %s %s %s %s %s %s  \n",v.marque,v.modele,v.boite_vitesse,v.carburant,v.couleur,v.accessoire,v.matricule);} // ecrire les données dans le deuxieme fichier
      }

    fclose(fichierIn); //On ferme les fichiers
    fclose(fichierOut);

    remove(f); // on supprime le fichier passé en paramétre
    rename("voiture_copie.txt", f); // on renome le deuxieme fichier
}





  





int tableau_voiture_louer(voiture tab[])
{
int n=0;
FILE *f=fopen("voiture_louer.txt","r");
if (f!=NULL)
{while(fscanf(f,"%s %s %s %s %s %s %s", tab[n].marque,tab[n].modele,tab[n].boite_vitesse,tab[n].carburant,tab[n].couleur,tab[n].accessoire,tab[n].matricule)!=EOF)
{n++;}
fclose(f);
}
return n;
}

int verifier_location(voiture vo)
{
voiture v;
int s;
s=0;
FILE *f=fopen("voiture_louer.txt","r+");
if(f!=NULL)
{while(!s &&fscanf(f,"%s %s %s %s %s %s %s  \n",v.marque,v.modele,v.boite_vitesse,v.carburant,v.couleur,v.accessoire,v.matricule)!=EOF)
{if(strcmp(v.marque,vo.marque)==0)
 {if((v.modele==vo.modele)&&(v.boite_vitesse==vo.boite_vitesse)&&(v.carburant==vo.carburant)&&(v.couleur==vo.couleur)&&(v.accessoire==vo.accessoire)&&(v.matricule==vo.matricule))
	{s=1;}
}
}
fclose(f);
}
return s;
}
int tableau_voiture_disponible(char marque[][20],char modele,char boite_vitesse,char carburant,char couleur,char accessoire,char matricule)
{int i,nv=0;
FILE *f=fopen("voiture.txt","r");
voiture v;
/*v.modele=modele;
v.boite_vitesse=boite_vitesse;
v.carburant=carburant;               
v.couleur=couleur;
v.accessoire=accessoire;
v.matricule=matricule;*/                              ///////////////////////////*probleme*////////////////////////////////
if(f!=NULL)
{while(fscanf(f,"%s",v.marque)!=EOF)
 {if(v.marque[0]==modele)
	{int s= verifier_location(v);
	if(!s)
	{strcpy(marque[nv],v.marque);
	nv++;
	}
	}
}
}
fclose(f);
return nv;
}

void louer_voiture(voiture v)
{
FILE *f=fopen("voiture_louer.txt","a");
if (f!=NULL)
{fprintf(f,"%s %s %s %s %s %s %s  \n",v.marque,v.modele,v.boite_vitesse,v.carburant,v.couleur,v.accessoire,v.matricule);
fclose(f);
}
}
