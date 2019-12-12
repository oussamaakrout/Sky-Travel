#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include "reclamation.h"
enum 
{	IDR,
	IDC,
	NOM,
	PRENOM,
	TYPE,
	COLUMNS
};

enum 
{	IDR1,
	TYPE1,
	MESSAGE,
	COLUMNS1
};

void afficher_reclamation(GtkWidget *treeview1)
{
 GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char idr[20];
char type[50];
char message[1000];
store=NULL;
FILE *f;
store=gtk_tree_view_get_model(treeview1);
if (store==NULL)
{renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" IDR",renderer, "text",IDR1,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" TYPE",renderer, "text",TYPE1,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" MESSAGE",renderer, "text",MESSAGE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
}
store=gtk_list_store_new(COLUMNS1, G_TYPE_STRING,
G_TYPE_STRING,G_TYPE_STRING);
f=fopen("reclamation.txt","r");
if(f==NULL)
{return;}
else
{f=fopen("reclamation.txt","a+");
	while(fscanf(f,"%s %s %s  \n",idr,type,message)!=EOF)
	{
	gtk_list_store_append(store,&iter);
	gtk_list_store_set(store,&iter,IDR1,idr,TYPE1,type,MESSAGE,message,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeview1), GTK_TREE_MODEL (store));
	g_object_unref (store);
	}
}

void enregistrer_reclamation (reclamation R)
{
FILE *fR;
int X;
X=Y;
fR=fopen("reclamation.txt","a+");
if (fR!=NULL);
if (X==1) 
fprintf(fR,"%s  ","vol");
else if (X==2)
fprintf(fR,"%s ","voiture");
else if (X==3)
fprintf(fR,"%s ","hebergement");
fprintf (fR,"%s\n",R.rec_text);
 fclose(fR);
} 

void afficher_client(GtkWidget *treeview2)
{
 GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char idr[20];
char idc[20];
char nom[30];
char prenom[30];
char type[10];
store=NULL;
FILE *f;
store=gtk_tree_view_get_model(treeview2);
if (store==NULL)
{renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" IDR",renderer, "text",IDR,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview2),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" IDC",renderer, "text",IDC,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview2),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" NOM",renderer, "text",NOM,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview2),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" PRENOM",renderer, "text",PRENOM,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview2),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" TYPE",renderer, "text",TYPE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview2),column);
}
store=gtk_list_store_new(COLUMNS, G_TYPE_STRING,
G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING);
f=fopen("liste client.txt","r");
if(f==NULL)
{return;}
else
{f=fopen("liste client.txt","a+");
	while(fscanf(f,"%s %s %s %s %s \n",idr,idc,nom,prenom,type)!=EOF)
	{
	gtk_list_store_append(store,&iter);
	gtk_list_store_set(store,&iter,IDR,idr,IDC,idc,NOM,nom,PRENOM,prenom,TYPE,type,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeview2), GTK_TREE_MODEL (store));
	g_object_unref (store);
	}}

void supprimer_reclamation(char numero[20],char numero1[20])
{FILE *f=NULL,*ftmp=NULL;
client tmp;
char tamp[20];
fflush(stdin);
f=fopen("liste client.txt","r+");
 ftmp=fopen("rectmp.txt","a+");
if (f!=NULL)
{while (fscanf(f,"%s %s %s %s %s ", tmp.idr,tmp.idc,tmp.nom,tmp.prenom,tmp.type)!=EOF)
{if (strcmp(numero,tmp.idr) !=0) {
fprintf(ftmp,"%s %s %s %s %s \n",tmp.idr,tmp.idc,tmp.nom,tmp.prenom,tmp.type);}}
fclose(ftmp);
fclose(f);
remove("liste client.txt");
rename("rectmp.txt","liste client.txt");
} }


void selectionner_reclamation(char numero[20],char numero1[20], GtkWidget *treeview1)
{
remove("rectmp2.txt");
FILE *f=NULL,*ftmp=NULL;
client tmp;
char tamp[20];
fflush(stdin);
f=fopen("liste client.txt","r+");
 ftmp=fopen("rectmp2.txt","a+");
if (f!=NULL)
{while (fscanf(f,"%s %s %s %s %s ", tmp.idr,tmp.idc,tmp.nom,tmp.prenom,tmp.type)!=EOF)
{if ((strcmp(numero,tmp.idr)==0)||(strcmp(numero1,tmp.idc)==0)){
fprintf(ftmp,"%s %s %s %s %s \n",tmp.idr,tmp.idc,tmp.nom,tmp.prenom,tmp.type);}}
fclose(ftmp);
fclose(f);
afficher2_client(treeview1);
}}


void afficher2_client(GtkWidget *treeview1)
{
 GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char idr[20];
char idc[20];
char nom[30];
char prenom[30];
char type[10];
store=NULL;
FILE *f;
store=gtk_tree_view_get_model(treeview1);
if (store==NULL)
{renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" IDR",renderer, "text",IDR,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" IDC",renderer, "text",IDC,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" NOM",renderer, "text",NOM,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" PRENOM",renderer, "text",PRENOM,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes(" TYPE",renderer, "text",TYPE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview1),column);
}
store=gtk_list_store_new(COLUMNS, G_TYPE_STRING,
G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING);
f=fopen("rectmp2.txt","r");
if(f==NULL)
{return;}
else
{f=fopen("rectmp2.txt","a+");
	while(fscanf(f,"%s %s %s %s %s \n",idr,idc,nom,prenom,type)!=EOF)
	{
	gtk_list_store_append(store,&iter);
	gtk_list_store_set(store,&iter,IDR,idr,IDC,idc,NOM,nom,PRENOM,prenom,TYPE,type,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeview1), GTK_TREE_MODEL (store));
	g_object_unref (store);
	}
}
